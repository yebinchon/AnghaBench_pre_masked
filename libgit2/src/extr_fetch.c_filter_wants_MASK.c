
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_remote_head ;
typedef scalar_t__ git_remote_autotag_option_t ;
struct TYPE_10__ {scalar_t__ length; } ;
struct TYPE_8__ {scalar_t__ download_tags; int repo; int refs; TYPE_5__ active_refspecs; } ;
typedef TYPE_1__ git_remote ;
typedef int git_refspec ;
typedef int git_odb ;
struct TYPE_9__ {scalar_t__ download_tags; } ;
typedef TYPE_2__ git_fetch_options ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_5__*,int *,int *) ;
 int FUNC_2 (int *,char*,int) ;
 scalar_t__ FUNC_3 (int const***,size_t*,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int **,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int *,int *,int *,scalar_t__) ;

__attribute__((used)) static int FUNC_7(git_remote *VAR_2, const git_fetch_options *VAR_3)
{
 git_remote_head **VAR_4;
 git_refspec VAR_5, VAR_6;
 int VAR_7 = 0;
 git_odb *VAR_8;
 size_t VAR_9, VAR_10;
 git_remote_autotag_option_t VAR_11 = VAR_2->download_tags;

 if (VAR_3 && VAR_3->download_tags != VAR_1)
  VAR_11 = VAR_3->download_tags;

 FUNC_5(&VAR_2->refs);
 if ((VAR_7 = FUNC_2(&VAR_5, VAR_0, 1)) < 0)
  return VAR_7;







 if (VAR_2->active_refspecs.length == 0) {
  if ((VAR_7 = FUNC_2(&VAR_6, "HEAD", 1)) < 0)
   goto cleanup;

  VAR_7 = FUNC_1(&VAR_2->active_refspecs, &VAR_6, &VAR_2->refs);
  FUNC_0(&VAR_6);

  if (VAR_7 < 0)
   goto cleanup;
 }

 if (FUNC_4(&VAR_8, VAR_2->repo) < 0)
  goto cleanup;

 if (FUNC_3((const git_remote_head ***)&VAR_4, &VAR_10, VAR_2) < 0)
  goto cleanup;

 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  if ((VAR_7 = FUNC_6(VAR_2, VAR_4[VAR_9], VAR_8, &VAR_5, VAR_11)) < 0)
   break;
 }

cleanup:
 FUNC_0(&VAR_5);

 return VAR_7;
}

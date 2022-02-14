
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int git_vector ;
struct TYPE_20__ {int oid; int name; } ;
typedef TYPE_2__ git_remote_head ;
struct TYPE_21__ {scalar_t__ (* update_tips ) (int ,TYPE_5__*,int *,int ) ;int payload; } ;
typedef TYPE_3__ git_remote_callbacks ;
struct TYPE_22__ {int repo; } ;
typedef TYPE_4__ git_remote ;
typedef int git_refspec ;
typedef int git_reference ;
struct TYPE_19__ {int member_0; } ;
struct TYPE_23__ {TYPE_1__ member_0; } ;
typedef TYPE_5__ git_oid ;
struct TYPE_24__ {int ptr; } ;
typedef TYPE_6__ git_buf ;


 TYPE_6__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_5__*,int *) ;
 int FUNC_3 (int **,int ,int ,int *,int,char const*) ;
 int FUNC_4 (int **,int ,int ,int *,int,TYPE_5__*,char const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_5__*,int ,int ) ;
 int FUNC_7 (TYPE_6__*,int *,int ) ;
 int FUNC_8 (TYPE_4__ const*,int *,int **,TYPE_2__**,size_t*,size_t*,size_t*) ;
 scalar_t__ FUNC_9 (int ,TYPE_5__*,int *,int ) ;

__attribute__((used)) static int FUNC_10(const git_remote *VAR_3, const git_remote_callbacks *VAR_4,
     git_vector *VAR_5, const char *VAR_6)
{
 size_t VAR_7, VAR_8, VAR_9;
 git_refspec *VAR_10;
 git_remote_head *VAR_11;
 git_reference *VAR_12;
 git_buf VAR_13 = VAR_0;
 int VAR_14 = 0;

 VAR_7 = VAR_8 = VAR_9 = 0;

 while ((VAR_14 = FUNC_8(VAR_3, VAR_5, &VAR_10, &VAR_11, &VAR_7, &VAR_8, &VAR_9)) == 0) {
  git_oid VAR_15 = {{ 0 }};
  FUNC_0(&VAR_13);
  if ((VAR_14 = FUNC_7(&VAR_13, VAR_10, VAR_11->name)) < 0)
   goto cleanup;

  VAR_14 = FUNC_6(&VAR_15, VAR_3->repo, VAR_13.ptr);
  if (VAR_14 < 0 && VAR_14 != VAR_1)
   goto cleanup;

  if (!FUNC_2(&VAR_15, &VAR_11->oid))
   continue;


  if (VAR_14)
   VAR_14 = FUNC_3(&VAR_12, VAR_3->repo, VAR_13.ptr, &VAR_11->oid, 1, VAR_6);
  else
   VAR_14 = FUNC_4(&VAR_12, VAR_3->repo, VAR_13.ptr, &VAR_11->oid, 1, &VAR_15, VAR_6);
  FUNC_5(VAR_12);
  if (VAR_14 < 0)
   goto cleanup;

  if (VAR_4 && VAR_4->update_tips != ((void*)0)) {
   if (VAR_4->update_tips(VAR_13.ptr, &VAR_15, &VAR_11->oid, VAR_4->payload) < 0)
    goto cleanup;
  }
 }

 if (VAR_14 == VAR_2)
  VAR_14 = 0;

cleanup:
 FUNC_1(&VAR_13);
 return VAR_14;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int opts ;
struct TYPE_17__ {int from_glob; } ;
typedef TYPE_1__ git_revwalk__push_options ;
struct TYPE_18__ {int repo; } ;
typedef TYPE_2__ git_revwalk ;
typedef int git_reference_iterator ;
typedef int git_reference ;
struct TYPE_19__ {int ptr; } ;
typedef TYPE_3__ git_buf ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char const*,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int ,char const*) ;
 int FUNC_5 (TYPE_3__*,char*,int) ;
 int FUNC_6 (TYPE_3__*,char const*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,int *) ;
 int FUNC_12 (TYPE_2__*,int ,TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,TYPE_1__ const*,int) ;
 size_t FUNC_14 (char const*,char*) ;

int FUNC_15(git_revwalk *VAR_4, const char *VAR_5, const git_revwalk__push_options *VAR_6)
{
 git_revwalk__push_options VAR_7 = VAR_3;
 int VAR_8 = 0;
 git_buf VAR_9 = VAR_0;
 git_reference *VAR_10;
 git_reference_iterator *VAR_11;
 size_t VAR_12;

 FUNC_1(VAR_4 && VAR_5);

 if (VAR_6)
  FUNC_13(&VAR_7, VAR_6, sizeof(VAR_7));


 if (FUNC_2(VAR_5, VAR_2) != 0)
  FUNC_4(&VAR_9, VAR_2, VAR_5);
 else
  FUNC_6(&VAR_9, VAR_5);
 FUNC_0(&VAR_9);


 VAR_12 = FUNC_14(VAR_5, "?*[");
 if (!VAR_5[VAR_12])
  FUNC_5(&VAR_9, "/*", 2);

 if ((VAR_8 = FUNC_9(&VAR_11, VAR_4->repo, VAR_9.ptr)) < 0)
  goto out;

 VAR_7.from_glob = 1;
 while ((VAR_8 = FUNC_11(&VAR_10, VAR_11)) == 0) {
  VAR_8 = FUNC_12(VAR_4, FUNC_10(VAR_10), &VAR_7);
  FUNC_7(VAR_10);
  if (VAR_8 < 0)
   break;
 }
 FUNC_8(VAR_11);

 if (VAR_8 == VAR_1)
  VAR_8 = 0;
out:
 FUNC_3(&VAR_9);
 return VAR_8;
}

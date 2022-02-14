
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tree; } ;
typedef TYPE_1__ tree_reader ;
typedef int git_tree_entry ;
typedef int git_reader ;
typedef int git_oid ;
typedef scalar_t__ git_off_t ;
typedef int git_filemode_t ;
typedef int git_buf ;
typedef int git_blob ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int ,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,size_t) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int **,int ,char const*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(
 git_buf *VAR_0,
 git_oid *VAR_1,
 git_filemode_t *VAR_2,
 git_reader *VAR_3,
 const char *VAR_4)
{
 tree_reader *VAR_5 = (tree_reader *)VAR_3;
 git_tree_entry *VAR_6 = ((void*)0);
 git_blob *VAR_7 = ((void*)0);
 git_off_t VAR_8;
 int VAR_9;

 if ((VAR_9 = FUNC_7(&VAR_6, VAR_5->tree, VAR_4)) < 0 ||
     (VAR_9 = FUNC_2(&VAR_7, FUNC_11(VAR_5->tree), FUNC_10(VAR_6))) < 0)
  goto done;

 VAR_8 = FUNC_4(VAR_7);
 FUNC_0(VAR_8);

 if ((VAR_9 = FUNC_5(VAR_0, FUNC_3(VAR_7), (size_t)VAR_8)) < 0)
  goto done;

 if (VAR_1)
  FUNC_6(VAR_1, FUNC_10(VAR_6));

 if (VAR_2)
  *VAR_2 = FUNC_8(VAR_6);

done:
 FUNC_1(VAR_7);
 FUNC_9(VAR_6);
 return VAR_9;
}

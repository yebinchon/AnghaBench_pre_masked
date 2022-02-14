
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_5__ {int* mode; int * oid; } ;
typedef TYPE_1__ git_index_reuc_entry ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int const*) ;
 TYPE_1__* FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(git_index_reuc_entry **VAR_0,
 const char *VAR_1,
 int VAR_2, const git_oid *VAR_3,
 int VAR_4, const git_oid *VAR_5,
 int VAR_6, const git_oid *VAR_7)
{
 git_index_reuc_entry *VAR_8 = ((void*)0);

 FUNC_1(VAR_0 && VAR_1);

 *VAR_0 = VAR_8 = FUNC_3(VAR_1);
 FUNC_0(VAR_8);

 if ((VAR_8->mode[0] = VAR_2) > 0) {
  FUNC_1(VAR_3);
  FUNC_2(&VAR_8->oid[0], VAR_3);
 }

 if ((VAR_8->mode[1] = VAR_4) > 0) {
  FUNC_1(VAR_5);
  FUNC_2(&VAR_8->oid[1], VAR_5);
 }

 if ((VAR_8->mode[2] = VAR_6) > 0) {
  FUNC_1(VAR_7);
  FUNC_2(&VAR_8->oid[2], VAR_7);
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw_object_store {int packed_git_mru; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct raw_object_store*,int ,int) ;
 struct raw_object_store* FUNC_2 (int) ;

struct raw_object_store *FUNC_3(void)
{
 struct raw_object_store *VAR_0 = FUNC_2(sizeof(*VAR_0));

 FUNC_1(VAR_0, 0, sizeof(*VAR_0));
 FUNC_0(&VAR_0->packed_git_mru);
 return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int exec; int id; int type; } ;
typedef TYPE_1__ git_rebase_operation ;
typedef int git_rebase ;
typedef int git_oid ;


 size_t VAR_0 ;
 int FUNC_0 (size_t,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*) ;
 TYPE_1__* FUNC_4 (int *,size_t) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(git_rebase *VAR_1, size_t VAR_2)
{
 size_t VAR_3, VAR_4 = 5;
 git_oid VAR_5[5];
 git_rebase_operation *VAR_6;

 FUNC_3(&VAR_5[0], "da9c51a23d02d931a486f45ad18cda05cf5d2b94");
 FUNC_3(&VAR_5[1], "8d1f13f93c4995760ac07d129246ac1ff64c0be9");
 FUNC_3(&VAR_5[2], "3069cc907e6294623e5917ef6de663928c1febfb");
 FUNC_3(&VAR_5[3], "588e5d2f04d49707fe4aab865e1deacaf7ef6787");
 FUNC_3(&VAR_5[4], "b146bd7608eac53d9bf9e1a6963543588b555c64");

 FUNC_0(VAR_4, FUNC_6(VAR_1));
 FUNC_0(VAR_2, FUNC_5(VAR_1));

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  VAR_6 = FUNC_4(VAR_1, VAR_3);
  FUNC_0(VAR_0, VAR_6->type);
  FUNC_1(&VAR_5[VAR_3], &VAR_6->id);
  FUNC_2(((void*)0), VAR_6->exec);
 }
}

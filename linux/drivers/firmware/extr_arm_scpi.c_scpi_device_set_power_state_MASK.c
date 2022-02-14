
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dev_pstate_set {int pstate; int dev_id; } ;
typedef int stat ;
typedef int dev_set ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct dev_pstate_set*,int,int*,int) ;

__attribute__((used)) static int FUNC_2(u16 VAR_1, u8 VAR_2)
{
 int VAR_3;
 struct dev_pstate_set VAR_4 = {
  .dev_id = FUNC_0(VAR_1),
  .pstate = VAR_2,
 };

 return FUNC_1(VAR_0, &VAR_4,
     sizeof(VAR_4), &VAR_3, sizeof(VAR_3));
}

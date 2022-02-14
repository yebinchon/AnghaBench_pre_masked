
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tonga_smumgr {int dummy; } ;
struct pp_hwmgr {struct tonga_smumgr* smu_backend; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tonga_smumgr*) ;
 struct tonga_smumgr* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (struct pp_hwmgr*) ;

__attribute__((used)) static int FUNC_3(struct pp_hwmgr *VAR_3)
{
 struct tonga_smumgr *VAR_4 = ((void*)0);

 VAR_4 = FUNC_1(sizeof(struct tonga_smumgr), VAR_2);
 if (VAR_4 == ((void*)0))
  return -VAR_1;

 VAR_3->smu_backend = VAR_4;

 if (FUNC_2(VAR_3)) {
  FUNC_0(VAR_4);
  return -VAR_0;
 }

 return 0;
}

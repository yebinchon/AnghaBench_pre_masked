
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uc_fw {int type; int obj; } ;


 int FUNC_0 (char*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct intel_uc_fw*,int ) ;
 int FUNC_4 (struct intel_uc_fw*) ;
 int FUNC_5 (struct intel_uc_fw*) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct intel_uc_fw *VAR_2)
{
 int VAR_3;


 FUNC_1(FUNC_5(VAR_2));

 if (!FUNC_4(VAR_2))
  return -VAR_0;

 VAR_3 = FUNC_2(VAR_2->obj);
 if (VAR_3) {
  FUNC_0("%s fw pin-pages err=%d\n",
     FUNC_6(VAR_2->type), VAR_3);
  FUNC_3(VAR_2, VAR_1);
 }

 return VAR_3;
}

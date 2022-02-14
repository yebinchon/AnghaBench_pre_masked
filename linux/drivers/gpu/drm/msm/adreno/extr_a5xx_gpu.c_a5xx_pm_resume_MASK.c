
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gpu {int name; } ;


 int FUNC_0 (char*,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct msm_gpu*,int ) ;
 int FUNC_2 (struct msm_gpu*,int ,int) ;
 int FUNC_3 (struct msm_gpu*) ;
 int FUNC_4 (struct msm_gpu*,int,int ,int,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct msm_gpu *VAR_4)
{
 int VAR_5;


 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5)
  return VAR_5;


 FUNC_2(VAR_4, VAR_0, 0x778000);


 FUNC_5(3);

 VAR_5 = FUNC_4(VAR_4, 20, VAR_1,
  (1 << 20), (1 << 20));
 if (VAR_5) {
  FUNC_0("%s: timeout waiting for RBCCU GDSC enable: %X\n",
   VAR_4->name,
   FUNC_1(VAR_4, VAR_1));
  return VAR_5;
 }


 FUNC_2(VAR_4, VAR_2, 0x778000);
 VAR_5 = FUNC_4(VAR_4, 20, VAR_3,
  (1 << 20), (1 << 20));
 if (VAR_5)
  FUNC_0("%s: timeout waiting for SP GDSC enable\n",
   VAR_4->name);

 return VAR_5;
}

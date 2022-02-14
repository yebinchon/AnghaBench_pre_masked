
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiimote_data {int hdev; } ;
typedef int __u8 ;


 int FUNC_0 (int ,char*,int*) ;
 int FUNC_1 (int ,char*,int*) ;
 int FUNC_2 (struct wiimote_data*,int,int*,int) ;

__attribute__((used)) static bool FUNC_3(struct wiimote_data *VAR_0, __u8 *VAR_1)
{
 int VAR_2;


 VAR_2 = FUNC_2(VAR_0, 0xa600fa, VAR_1, 6);
 if (VAR_2 != 6)
  return 0;

 FUNC_0(VAR_0->hdev, "motion plus ID: %6phC\n", VAR_1);

 if (VAR_1[5] == 0x05)
  return 1;

 FUNC_1(VAR_0->hdev, "unknown motion plus ID: %6phC\n", VAR_1);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct btmrvl_private {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (struct btmrvl_private*,int ,int*,scalar_t__) ;
 int FUNC_2 (char*,int ,int*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct btmrvl_private *VAR_3,
        u8 *VAR_4, int VAR_5)
{
 int VAR_6;

 VAR_4[0] = 0x00;
 VAR_4[1] = 0x00;
 VAR_4[2] = 0x00;
 VAR_4[3] = VAR_5;

 FUNC_2("Calibration data: ",
        VAR_2, VAR_4, VAR_0 + VAR_5);

 VAR_6 = FUNC_1(VAR_3, VAR_1, VAR_4,
       VAR_0 + VAR_5);
 if (VAR_6)
  FUNC_0("Failed to download calibration data");

 return 0;
}

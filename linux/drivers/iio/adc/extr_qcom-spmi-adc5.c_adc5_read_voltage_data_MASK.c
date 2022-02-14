
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct adc5_chip {int dummy; } ;
typedef int rslt_lsb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct adc5_chip*,int ,int*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct adc5_chip *VAR_4, u16 *VAR_5)
{
 int VAR_6;
 u8 VAR_7, VAR_8;

 VAR_6 = FUNC_0(VAR_4, VAR_0, &VAR_7, sizeof(VAR_7));
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_1, &VAR_8, sizeof(VAR_7));
 if (VAR_6)
  return VAR_6;

 *VAR_5 = (VAR_8 << 8) | VAR_7;

 if (*VAR_5 == VAR_2) {
  FUNC_2("Invalid data:0x%x\n", *VAR_5);
  return -VAR_3;
 }

 FUNC_1("voltage raw code:0x%x\n", *VAR_5);

 return 0;
}

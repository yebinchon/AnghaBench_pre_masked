
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atm_qos {int txtp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(const struct atm_qos *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4, VAR_5, VAR_6 = FUNC_1(&VAR_2->txtp);
 if (VAR_6 == 0)
  return 0;
 if (VAR_6 < 0) {
  VAR_3 = 1;
  VAR_6 = -VAR_6;
 }
 VAR_4 = VAR_6 * 27;
 VAR_5 = (3125 << (9 + VAR_0)) - (VAR_4 << VAR_0);
 if (VAR_3)
  VAR_5 += VAR_4 - 1;
 VAR_5 /= VAR_4;
 if (VAR_5 > VAR_1)
  VAR_5 = VAR_1;
 FUNC_0("pcr_to_cbricg: pcr=%d rounddown=%c icg=%d\n",
     VAR_6, VAR_3 ? 'Y' : 'N', VAR_5);
 return VAR_5;
}

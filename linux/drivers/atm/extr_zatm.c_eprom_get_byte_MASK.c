
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zatm_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct zatm_dev*,unsigned short) ;
 int FUNC_1 (struct zatm_dev*,int,unsigned short) ;

__attribute__((used)) static void FUNC_2(struct zatm_dev *VAR_3, unsigned char *VAR_4,
      unsigned short VAR_5)
{
 int VAR_6;

 *VAR_4 = 0;
 for (VAR_6 = 8; VAR_6; VAR_6--) {
  FUNC_1(VAR_3,VAR_0,VAR_5);
  FUNC_1(VAR_3,VAR_0 | VAR_2,VAR_5);
  *VAR_4 <<= 1;
  if (FUNC_0(VAR_3,VAR_5) & VAR_1) *VAR_4 |= 1;
  FUNC_1(VAR_3,VAR_0,VAR_5);
 }
}

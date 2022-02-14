
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zatm_dev {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct zatm_dev*,unsigned long,unsigned short) ;

__attribute__((used)) static void FUNC_1(struct zatm_dev *VAR_3, unsigned long VAR_4,
      int VAR_5, unsigned short VAR_6)
{
 unsigned long VAR_7;
 int VAR_8;

 for (VAR_8 = VAR_5-1; VAR_8 >= 0; VAR_8--) {
  VAR_7 = VAR_0 | (((VAR_4 >> VAR_8) & 1) ? VAR_1 : 0);
  FUNC_0(VAR_3,VAR_7,VAR_6);
  FUNC_0(VAR_3,VAR_7 | VAR_2,VAR_6);
  FUNC_0(VAR_3,VAR_7,VAR_6);
 }
}

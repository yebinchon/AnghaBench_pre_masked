
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zatm_dev {int dummy; } ;
struct atm_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct zatm_dev* FUNC_0 (struct atm_dev*) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned long,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static unsigned char FUNC_4(struct atm_dev *VAR_7,unsigned long VAR_8)
{
 struct zatm_dev *VAR_9;

 VAR_9 = FUNC_0(VAR_7);
 FUNC_3();
 FUNC_2(VAR_6 | VAR_2 | VAR_3 |
   (VAR_4 << VAR_5) | VAR_8,VAR_1);
 FUNC_3();
 return FUNC_1(VAR_0) & 0xff;
}

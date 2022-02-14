
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(int VAR_1, struct fb_var_screeninfo *VAR_2)
{
 if (VAR_1) {
  VAR_0 |= (1<<0);
 } else {
  VAR_0 &= ~(1<<0);
 }







 FUNC_0(VAR_1);
}

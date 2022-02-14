
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wm831x*,int) ;
 int FUNC_1 (struct wm831x*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct wm831x *VAR_4, unsigned VAR_5,
        unsigned VAR_6)
{
 int VAR_7 = VAR_2 + VAR_5;
 int VAR_8, VAR_9;

 VAR_8 = FUNC_0(VAR_4, VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 switch (VAR_8 & VAR_3) {
 case 0:
 case 1:
  break;
 default:

  return -VAR_0;
 }

 if (VAR_6 >= 32 && VAR_6 <= 64)
  VAR_9 = 0;
 else if (VAR_6 >= 4000 && VAR_6 <= 8000)
  VAR_9 = 1;
 else
  return -VAR_1;

 return FUNC_1(VAR_4, VAR_7, VAR_3, VAR_9);
}

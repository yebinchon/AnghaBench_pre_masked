
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_ts {struct wm831x* wm831x; } ;
struct wm831x {int dummy; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct wm831x_ts* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (struct wm831x*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct input_dev *VAR_6)
{
 struct wm831x_ts *VAR_7 = FUNC_0(VAR_6);
 struct wm831x *VAR_8 = VAR_7->wm831x;

 FUNC_1(VAR_8, VAR_5,
   VAR_1 | VAR_0 |
   VAR_2 | VAR_3 |
   VAR_4, VAR_1);

 FUNC_1(VAR_8, VAR_5,
   VAR_0, VAR_0);

 return 0;
}

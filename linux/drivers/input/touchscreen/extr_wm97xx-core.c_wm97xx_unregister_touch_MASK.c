
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm97xx {int * input_dev; int touch_dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct wm97xx *VAR_0)
{
 FUNC_1(VAR_0->touch_dev);
 FUNC_0(VAR_0->input_dev);
 VAR_0->input_dev = ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiimote_debug {int eeprom; int drm; } ;
struct TYPE_2__ {int lock; } ;
struct wiimote_data {TYPE_1__ state; struct wiimote_debug* debug; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct wiimote_debug*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct wiimote_data *VAR_0)
{
 struct wiimote_debug *VAR_1 = VAR_0->debug;
 unsigned long VAR_2;

 if (!VAR_1)
  return;

 FUNC_2(&VAR_0->state.lock, VAR_2);
 VAR_0->debug = ((void*)0);
 FUNC_3(&VAR_0->state.lock, VAR_2);

 FUNC_0(VAR_1->drm);
 FUNC_0(VAR_1->eeprom);
 FUNC_1(VAR_1);
}

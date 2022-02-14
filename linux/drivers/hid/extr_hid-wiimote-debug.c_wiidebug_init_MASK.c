
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wiimote_debug {void* eeprom; void* drm; struct wiimote_data* wdata; } ;
struct TYPE_4__ {int lock; } ;
struct wiimote_data {TYPE_2__ state; struct wiimote_debug* debug; TYPE_1__* hdev; } ;
struct TYPE_3__ {int debug_dir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (char*,int ,int ,struct wiimote_debug*,int *) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct wiimote_debug*) ;
 struct wiimote_debug* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_6(struct wiimote_data *VAR_5)
{
 struct wiimote_debug *VAR_6;
 unsigned long VAR_7;
 int VAR_8 = -VAR_0;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->wdata = VAR_5;

 VAR_6->eeprom = FUNC_0("eeprom", VAR_2,
  VAR_6->wdata->hdev->debug_dir, VAR_6, &VAR_4);
 if (!VAR_6->eeprom)
  goto err;

 VAR_6->drm = FUNC_0("drm", VAR_2,
   VAR_6->wdata->hdev->debug_dir, VAR_6, &VAR_3);
 if (!VAR_6->drm)
  goto err_drm;

 FUNC_4(&VAR_5->state.lock, VAR_7);
 VAR_5->debug = VAR_6;
 FUNC_5(&VAR_5->state.lock, VAR_7);

 return 0;

err_drm:
 FUNC_1(VAR_6->eeprom);
err:
 FUNC_2(VAR_6);
 return VAR_8;
}

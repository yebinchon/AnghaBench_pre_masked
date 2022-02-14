
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int disk; } ;
struct drbd_device {TYPE_2__ state; int flags; TYPE_1__* ldev; } ;
typedef enum drbd_io_error_p { ____Placeholder_drbd_io_error_p } drbd_io_error_p ;
typedef enum drbd_force_detach_flags { ____Placeholder_drbd_force_detach_flags } drbd_force_detach_flags ;
struct TYPE_6__ {int on_io_error; } ;
struct TYPE_4__ {int disk_conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct drbd_device*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int *) ;
 int VAR_9 ;
 int FUNC_3 (struct drbd_device*,char*,char const*) ;
 int VAR_10 ;
 TYPE_3__* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static inline void FUNC_8(struct drbd_device *VAR_11,
  enum drbd_force_detach_flags VAR_12,
  const char *VAR_13)
{
 enum drbd_io_error_p VAR_14;

 FUNC_5();
 VAR_14 = FUNC_4(VAR_11->ldev->disk_conf)->on_io_error;
 FUNC_6();
 switch (VAR_14) {
 case 128:
  if (VAR_12 == VAR_2 || VAR_12 == VAR_3) {
   if (FUNC_1(&VAR_10))
    FUNC_3(VAR_11, "Local IO failed in %s.\n", VAR_13);
   if (VAR_11->state.disk > VAR_5)
    FUNC_2(FUNC_0(VAR_11, VAR_9, VAR_5), VAR_0, ((void*)0));
   break;
  }

 case 129:
 case 130:
  FUNC_7(VAR_7, &VAR_11->flags);
  if (VAR_12 == VAR_2)
   FUNC_7(VAR_8, &VAR_11->flags);
  if (VAR_12 == VAR_1)
   FUNC_7(VAR_6, &VAR_11->flags);
  if (VAR_11->state.disk > VAR_4) {
   FUNC_2(FUNC_0(VAR_11, VAR_9, VAR_4), VAR_0, ((void*)0));
   FUNC_3(VAR_11,
    "Local IO failed in %s. Detaching...\n", VAR_13);
  }
  break;
 }
}

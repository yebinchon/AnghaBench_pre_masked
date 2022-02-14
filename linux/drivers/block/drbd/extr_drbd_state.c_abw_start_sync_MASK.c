
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int conn; } ;
struct drbd_device {TYPE_1__ state; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct drbd_device*,int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct drbd_device*,char*) ;
 int FUNC_3 (struct drbd_device*,int ) ;

__attribute__((used)) static void FUNC_4(struct drbd_device *VAR_5, int VAR_6)
{
 if (VAR_6) {
  FUNC_2(VAR_5, "Writing the bitmap failed not starting resync.\n");
  FUNC_1(VAR_5, FUNC_0(VAR_4, VAR_1), VAR_0);
  return;
 }

 switch (VAR_5->state.conn) {
 case 128:
  FUNC_1(VAR_5, FUNC_0(VAR_4, VAR_3), VAR_0);
  break;
 case 129:
  FUNC_3(VAR_5, VAR_2);
  break;
 }
}

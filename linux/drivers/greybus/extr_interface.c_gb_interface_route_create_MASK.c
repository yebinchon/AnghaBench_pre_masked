
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct gb_svc {int device_id_map; int ap_intf_id; } ;
struct gb_interface {int interface_id; int device_id; int dev; TYPE_1__* hd; } ;
struct TYPE_2__ {struct gb_svc* svc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (struct gb_svc*,int,int) ;
 int FUNC_2 (struct gb_svc*,int ,int ,int,int) ;
 int FUNC_3 (int *,int ,scalar_t__,int ) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(struct gb_interface *VAR_4)
{
 struct gb_svc *VAR_5 = VAR_4->hd->svc;
 u8 VAR_6 = VAR_4->interface_id;
 u8 VAR_7;
 int VAR_8;


 VAR_8 = FUNC_3(&VAR_5->device_id_map,
        VAR_2, VAR_1 + 1,
        VAR_3);
 if (VAR_8 < 0) {
  FUNC_0(&VAR_4->dev, "failed to allocate device id: %d\n", VAR_8);
  return VAR_8;
 }
 VAR_7 = VAR_8;

 VAR_8 = FUNC_1(VAR_5, VAR_6, VAR_7);
 if (VAR_8) {
  FUNC_0(&VAR_4->dev, "failed to set device id %u: %d\n",
   VAR_7, VAR_8);
  goto err_ida_remove;
 }


 VAR_8 = FUNC_2(VAR_5, VAR_5->ap_intf_id, VAR_0,
      VAR_6, VAR_7);
 if (VAR_8) {
  FUNC_0(&VAR_4->dev, "failed to create route: %d\n", VAR_8);
  goto err_svc_id_free;
 }

 VAR_4->device_id = VAR_7;

 return 0;

err_svc_id_free:




err_ida_remove:
 FUNC_4(&VAR_5->device_id_map, VAR_7);

 return VAR_8;
}

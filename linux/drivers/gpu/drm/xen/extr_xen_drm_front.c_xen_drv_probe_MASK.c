
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device_id {int dummy; } ;
struct device {int dummy; } ;
struct xenbus_device {struct device dev; } ;
struct xen_drm_front_info {int dbuf_list; int io_lock; struct xenbus_device* xb_dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (struct device*,struct xen_drm_front_info*) ;
 struct xen_drm_front_info* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct xenbus_device*,int ) ;

__attribute__((used)) static int FUNC_8(struct xenbus_device *VAR_3,
    const struct xenbus_device_id *VAR_4)
{
 struct xen_drm_front_info *VAR_5;
 struct device *VAR_6 = &VAR_3->dev;
 int VAR_7;

 VAR_7 = FUNC_5(VAR_6, FUNC_0(64));
 if (VAR_7 < 0) {
  FUNC_1("Cannot setup DMA mask, ret %d", VAR_7);
  return VAR_7;
 }

 VAR_5 = FUNC_4(&VAR_3->dev,
      sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->xb_dev = VAR_3;
 FUNC_6(&VAR_5->io_lock);
 FUNC_2(&VAR_5->dbuf_list);
 FUNC_3(&VAR_3->dev, VAR_5);

 return FUNC_7(VAR_3, VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int nodename; } ;
struct xen_drm_front_info {struct xenbus_device* xb_dev; } ;
struct xen_drm_front_cfg {int be_alloc; scalar_t__ num_connectors; int * connectors; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct xen_drm_front_info*,int *,int ,int) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;

int FUNC_5(struct xen_drm_front_info *VAR_2,
      struct xen_drm_front_cfg *VAR_3)
{
 struct xenbus_device *VAR_4 = VAR_2->xb_dev;
 int VAR_5, VAR_6;

 if (FUNC_4(VAR_2->xb_dev->nodename,
     VAR_1, 0)) {
  FUNC_2("Backend can provide display buffers\n");
  VAR_3->be_alloc = 1;
 }

 VAR_3->num_connectors = 0;
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3->connectors); VAR_6++) {
  VAR_5 = FUNC_3(VAR_2, &VAR_3->connectors[VAR_6],
        VAR_4->nodename, VAR_6);
  if (VAR_5 < 0)
   break;
  VAR_3->num_connectors++;
 }

 if (!VAR_3->num_connectors) {
  FUNC_1("No connector(s) configured at %s\n",
     VAR_4->nodename);
  return -VAR_0;
 }

 return 0;
}

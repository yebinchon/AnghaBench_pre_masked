
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnic_dev_bar {int dummy; } ;
struct usnic_vnic {struct vnic_dev_bar* bar; } ;


 int FUNC_0 (struct vnic_dev_bar*) ;

struct vnic_dev_bar *FUNC_1(struct usnic_vnic *VAR_0,
    int VAR_1)
{
 return (VAR_1 < FUNC_0(VAR_0->bar)) ? &VAR_0->bar[VAR_1] : ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xilly_endpoint_hardware {int dummy; } ;
struct xilly_endpoint {int msg_counter; int register_mutex; int ep_wait; scalar_t__ fatal_error; scalar_t__ failed_messages; struct xilly_endpoint_hardware* ephw; struct device* dev; struct pci_dev* pdev; } ;
struct pci_dev {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct xilly_endpoint* FUNC_0 (struct device*,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct xilly_endpoint *FUNC_3(struct pci_dev *VAR_1,
           struct device *VAR_2,
           struct xilly_endpoint_hardware
           *VAR_3)
{
 struct xilly_endpoint *VAR_4;

 VAR_4 = FUNC_0(VAR_2, sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->pdev = VAR_1;
 VAR_4->dev = VAR_2;
 VAR_4->ephw = VAR_3;
 VAR_4->msg_counter = 0x0b;
 VAR_4->failed_messages = 0;
 VAR_4->fatal_error = 0;

 FUNC_1(&VAR_4->ep_wait);
 FUNC_2(&VAR_4->register_mutex);

 return VAR_4;
}

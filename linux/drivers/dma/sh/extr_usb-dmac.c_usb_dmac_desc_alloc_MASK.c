
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_dmac_desc {unsigned int sg_allocated_len; int node; } ;
struct TYPE_2__ {int lock; } ;
struct usb_dmac_chan {TYPE_1__ vc; int desc_freed; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct usb_dmac_desc* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_1 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct usb_dmac_desc*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct usb_dmac_chan *VAR_2, unsigned int VAR_3,
          gfp_t VAR_4)
{
 struct usb_dmac_desc *VAR_5;
 unsigned long VAR_6;

 VAR_5 = FUNC_1(FUNC_5(VAR_5, VAR_1, VAR_3), VAR_4);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->sg_allocated_len = VAR_3;
 FUNC_0(&VAR_5->node);

 FUNC_3(&VAR_2->vc.lock, VAR_6);
 FUNC_2(&VAR_5->node, &VAR_2->desc_freed);
 FUNC_4(&VAR_2->vc.lock, VAR_6);

 return 0;
}

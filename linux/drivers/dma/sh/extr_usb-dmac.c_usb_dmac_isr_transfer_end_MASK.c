
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cookie; } ;
struct TYPE_4__ {TYPE_1__ tx; } ;
struct usb_dmac_desc {scalar_t__ sg_index; scalar_t__ sg_len; TYPE_2__ vd; int done_cookie; int residue; } ;
struct usb_dmac_chan {struct usb_dmac_desc* desc; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct usb_dmac_chan*) ;
 int FUNC_2 (struct usb_dmac_chan*,scalar_t__) ;
 int FUNC_3 (struct usb_dmac_chan*,struct usb_dmac_desc*,scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(struct usb_dmac_chan *VAR_0)
{
 struct usb_dmac_desc *VAR_1 = VAR_0->desc;

 FUNC_0(!VAR_1);

 if (++VAR_1->sg_index < VAR_1->sg_len) {
  FUNC_2(VAR_0, VAR_1->sg_index);
 } else {
  VAR_1->residue = FUNC_3(VAR_0, VAR_1,
       VAR_1->sg_index - 1);
  VAR_1->done_cookie = VAR_1->vd.tx.cookie;
  FUNC_4(&VAR_1->vd);


  FUNC_1(VAR_0);
 }
}

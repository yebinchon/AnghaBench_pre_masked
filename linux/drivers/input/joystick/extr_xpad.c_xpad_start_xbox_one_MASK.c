
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_xpad {int odata_lock; scalar_t__ init_seq; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct usb_xpad*) ;

__attribute__((used)) static int FUNC_3(struct usb_xpad *VAR_0)
{
 unsigned long VAR_1;
 int VAR_2;

 FUNC_0(&VAR_0->odata_lock, VAR_1);






 VAR_0->init_seq = 0;
 VAR_2 = FUNC_2(VAR_0);

 FUNC_1(&VAR_0->odata_lock, VAR_1);

 return VAR_2;
}

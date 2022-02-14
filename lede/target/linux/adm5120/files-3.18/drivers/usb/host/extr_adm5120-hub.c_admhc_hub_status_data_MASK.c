
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_hcd {int flags; } ;
struct admhcd {int num_ports; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (struct admhcd*,int) ;
 int FUNC_2 (struct admhcd*) ;
 scalar_t__ FUNC_3 (struct admhcd*,int,int) ;
 int FUNC_4 (int ,int *) ;
 struct admhcd* FUNC_5 (struct usb_hcd*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_9(struct usb_hcd *VAR_9, char *VAR_10)
{
 struct admhcd *VAR_11 = FUNC_5(VAR_9);
 int VAR_12, VAR_13 = 0, VAR_14 = 1;
 int VAR_15 = 0;
 unsigned long VAR_16;
 u32 VAR_17;

 FUNC_7(&VAR_11->lock, VAR_16);
 if (!FUNC_0(VAR_9))
  goto done;


 VAR_17 = FUNC_2(VAR_11);
 if (VAR_17 & (VAR_6 | VAR_7))
  VAR_10[0] = VAR_13 = 1;
 else
  VAR_10[0] = 0;
 if (VAR_11->num_ports > 7) {
  VAR_10[1] = 0;
  VAR_14++;
 }


 for (VAR_12 = 0; VAR_12 < VAR_11->num_ports; VAR_12++) {
  VAR_17 = FUNC_1(VAR_11, VAR_12);


  VAR_15 |= (VAR_17 & VAR_0);

  if (VAR_17 & (VAR_1 | VAR_3 | VAR_5
    | VAR_2 | VAR_4)) {
   VAR_13 = 1;
   if (VAR_12 < 7)
    VAR_10[0] |= 1 << (VAR_12 + 1);
   else
    VAR_10[1] |= 1 << (VAR_12 - 7);
  }
 }

 if (FUNC_3(VAR_11, VAR_13,
   VAR_15))
  FUNC_6(VAR_8, &VAR_9->flags);
 else
  FUNC_4(VAR_8, &VAR_9->flags);

done:
 FUNC_8(&VAR_11->lock, VAR_16);

 return VAR_13 ? VAR_14 : 0;
}

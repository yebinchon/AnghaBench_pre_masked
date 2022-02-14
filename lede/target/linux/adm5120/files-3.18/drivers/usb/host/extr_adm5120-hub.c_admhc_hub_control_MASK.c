
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_6__ {int b_hnp_enable; int otg_port; } ;
struct usb_hcd {TYPE_3__ self; } ;
struct admhcd {int num_ports; TYPE_2__* regs; } ;
struct TYPE_4__ {int status; } ;
struct TYPE_5__ {TYPE_1__ roothub; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;




 int VAR_10 ;
 int VAR_11 ;



 int FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (struct admhcd*,char*) ;
 int FUNC_2 (struct admhcd*,char*) ;
 int FUNC_3 (struct admhcd*,int,char*) ;
 int FUNC_4 (struct admhcd*,int) ;
 int FUNC_5 (struct admhcd*,int) ;
 int FUNC_6 (struct admhcd*,int) ;
 int FUNC_7 (struct admhcd*,int,int ) ;
 int FUNC_8 (struct admhcd*,int ,int *) ;
 struct admhcd* FUNC_9 (struct usb_hcd*) ;
 int FUNC_10 (struct admhcd*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct usb_hcd *VAR_12, u16 VAR_13, u16 VAR_14,
  u16 VAR_15, char *VAR_16, u16 VAR_17)
{
 struct admhcd *VAR_18 = FUNC_9(VAR_12);
 int VAR_19 = VAR_18->num_ports;
 int VAR_20 = 0;

 if (FUNC_11(!FUNC_0(VAR_12)))
  return -VAR_11;

 switch (VAR_13) {
 case 143:
  switch (VAR_14) {
  case 144:




  case 145:
   break;
  default:
   goto error;
  }
  break;
 case 142:
  if (!VAR_15 || VAR_15 > VAR_19)
   goto error;
  VAR_15--;

  switch (VAR_14) {
  case 131:
   VAR_20 = FUNC_4(VAR_18, VAR_15);
   break;
  case 128:
   VAR_20 = FUNC_7(VAR_18, VAR_15, VAR_1);
   break;
  case 130:
   VAR_20 = FUNC_7(VAR_18, VAR_15, VAR_0);
   break;
  case 136:
   VAR_20 = FUNC_7(VAR_18, VAR_15, VAR_2);
   break;
  case 135:
   VAR_20 = FUNC_7(VAR_18, VAR_15, VAR_4);
   break;
  case 132:
   VAR_20 = FUNC_7(VAR_18, VAR_15, VAR_6);
   break;
  case 134:
   VAR_20 = FUNC_7(VAR_18, VAR_15, VAR_3);
   break;
  case 133:
   VAR_20 = FUNC_7(VAR_18, VAR_15, VAR_5);
   break;
  default:
   goto error;
  }
  break;
 case 141:
  VAR_20 = FUNC_1(VAR_18, VAR_16);
  break;
 case 140:
  VAR_20 = FUNC_2(VAR_18, VAR_16);
  break;
 case 139:
  if (!VAR_15 || VAR_15 > VAR_19)
   goto error;
  VAR_15--;

  VAR_20 = FUNC_3(VAR_18, VAR_15, VAR_16);
  break;
 case 138:
  switch (VAR_14) {
  case 144:

  case 145:
   break;
  default:
   goto error;
  }
  break;
 case 137:
  if (!VAR_15 || VAR_15 > VAR_19)
   goto error;
  VAR_15--;

  switch (VAR_14) {
  case 131:
   VAR_20 = FUNC_5(VAR_18, VAR_15);
   break;
  case 129:
   VAR_20 = FUNC_6(VAR_18, VAR_15);
   break;
  case 128:






   VAR_20 = FUNC_7(VAR_18, VAR_15, VAR_8);
   break;
  case 130:
   VAR_20 = FUNC_7(VAR_18, VAR_15, VAR_7);
   break;
  default:
   goto error;
  }
  break;

 default:
error:

  VAR_20 = -VAR_10;
 }

 return VAR_20;
}

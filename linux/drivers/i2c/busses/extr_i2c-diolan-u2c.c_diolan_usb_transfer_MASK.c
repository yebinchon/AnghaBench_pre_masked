
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_diolan_u2c {int olen; int ocount; int* obuffer; int* ibuffer; int ep_in; int usb_dev; int ep_out; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (int ,int ,int*,int,int*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_diolan_u2c *VAR_5)
{
 int VAR_6 = 0;
 int VAR_7;
 int VAR_8;

 if (!VAR_5->olen || !VAR_5->ocount)
  return -VAR_1;

 VAR_6 = FUNC_0(VAR_5->usb_dev,
      FUNC_2(VAR_5->usb_dev, VAR_5->ep_out),
      VAR_5->obuffer, VAR_5->olen, &VAR_7,
      VAR_0);
 if (!VAR_6) {
  for (VAR_8 = 0; VAR_8 < VAR_5->ocount; VAR_8++) {
   int VAR_9;

   VAR_9 = FUNC_0(VAR_5->usb_dev,
           FUNC_1(VAR_5->usb_dev,
             VAR_5->ep_in),
           VAR_5->ibuffer,
           sizeof(VAR_5->ibuffer), &VAR_7,
           VAR_0);





   if (VAR_6 < 0)
    continue;
   VAR_6 = VAR_9;
   if (VAR_6 == 0 && VAR_7 > 0) {
    switch (VAR_5->ibuffer[VAR_7 - 1]) {
    case 130:





     VAR_6 = VAR_8 == 1 ? -VAR_3 : -VAR_2;
     break;
    case 128:
     VAR_6 = -VAR_4;
     break;
    case 129:

     VAR_6 = VAR_7 - 1;
     break;
    default:
     VAR_6 = -VAR_2;
     break;
    }
   }
  }
 }
 VAR_5->olen = 0;
 VAR_5->ocount = 0;
 return VAR_6;
}

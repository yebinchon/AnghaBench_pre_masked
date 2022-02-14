
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {scalar_t__ nak; } ;
struct psmouse {struct ps2dev ps2dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct ps2dev*,int,int ) ;
 int FUNC_1 (struct psmouse*,char*,int,...) ;

__attribute__((used)) static int FUNC_2(struct psmouse *VAR_3, int VAR_4)
{
 struct ps2dev *VAR_5 = &VAR_3->ps2dev;

 if (FUNC_0(VAR_5, VAR_4 & 0xff, VAR_0) < 0) {
  FUNC_1(VAR_3,
    "sending command 0x%02x failed, resp 0x%02x\n",
    VAR_4 & 0xff, VAR_5->nak);
  if (VAR_5->nak == VAR_2)
   return VAR_2;
  else
   return VAR_1;
 }






 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psmouse {scalar_t__ pktcnt; scalar_t__ pktsize; struct elantech_data* private; } ;
struct TYPE_2__ {int debug; int hw_version; int paritycheck; } ;
struct elantech_data {TYPE_1__ info; } ;
typedef int psmouse_ret_t ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct psmouse*) ;
 int FUNC_1 (struct psmouse*) ;
 int FUNC_2 (struct psmouse*) ;
 int FUNC_3 (struct psmouse*) ;
 int FUNC_4 (struct psmouse*) ;
 int FUNC_5 (struct psmouse*) ;
 int FUNC_6 (struct psmouse*) ;
 int FUNC_7 (struct psmouse*) ;
 int FUNC_8 (struct psmouse*,int) ;
 int FUNC_9 (struct psmouse*,int) ;
 int FUNC_10 (struct psmouse*,int) ;

__attribute__((used)) static psmouse_ret_t FUNC_11(struct psmouse *VAR_3)
{
 struct elantech_data *VAR_4 = VAR_3->private;
 int VAR_5;

 if (VAR_3->pktcnt < VAR_3->pktsize)
  return VAR_2;

 if (VAR_4->info.debug > 1)
  FUNC_5(VAR_3);

 switch (VAR_4->info.hw_version) {
 case 1:
  if (VAR_4->info.paritycheck && !FUNC_1(VAR_3))
   return VAR_0;

  FUNC_6(VAR_3);
  break;

 case 2:

  if (FUNC_0(VAR_3))
   return VAR_1;

  if (VAR_4->info.paritycheck && !FUNC_2(VAR_3))
   return VAR_0;

  FUNC_7(VAR_3);
  break;

 case 3:
  VAR_5 = FUNC_3(VAR_3);
  switch (VAR_5) {
  case 128:
   return VAR_0;

  case 130:

   break;

  case 129:
   FUNC_10(VAR_3, VAR_5);
   break;

  default:
   FUNC_8(VAR_3, VAR_5);
   break;
  }

  break;

 case 4:
  VAR_5 = FUNC_4(VAR_3);
  switch (VAR_5) {
  case 128:
   return VAR_0;

  case 129:
   FUNC_10(VAR_3, VAR_5);
   break;

  default:
   FUNC_9(VAR_3, VAR_5);
   break;
  }

  break;
 }

 return VAR_1;
}

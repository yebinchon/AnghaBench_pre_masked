
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int dummy; } ;
struct psmouse {int pktsize; struct hgpk_data* private; struct ps2dev ps2dev; } ;
struct hgpk_data {int mode; } ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ps2dev*,int *,int const) ;

__attribute__((used)) static int FUNC_2(struct psmouse *VAR_5)
{
 struct ps2dev *VAR_6 = &VAR_5->ps2dev;
 struct hgpk_data *VAR_7 = VAR_5->private;
 int VAR_8;
 int VAR_9;





 const int VAR_10[] = {
  VAR_2, VAR_2,
  VAR_2, VAR_2,
  0xf2, 0xf2, 0xf2,
 };

 switch (VAR_7->mode) {
 case 129:
  VAR_5->pktsize = 3;
  break;

 case 130:
 case 128:
  VAR_5->pktsize = 6;


  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_10); VAR_8++)
   if (FUNC_1(VAR_6, ((void*)0), VAR_10[VAR_8]))
    return -VAR_1;


  VAR_9 = VAR_7->mode == 130 ?
   VAR_3 : VAR_4;

  if (FUNC_1(VAR_6, ((void*)0), VAR_9))
   return -VAR_1;
  break;

 default:
  return -VAR_0;
 }

 return 0;
}

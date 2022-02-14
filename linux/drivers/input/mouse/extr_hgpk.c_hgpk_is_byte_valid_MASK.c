
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int pktcnt; int packet; struct hgpk_data* private; } ;
struct hgpk_data {int mode; } ;


 unsigned char VAR_0 ;



 unsigned char VAR_1 ;
 int FUNC_0 (struct psmouse*,char*,int,int,int,int ) ;

__attribute__((used)) static bool FUNC_1(struct psmouse *VAR_2, unsigned char *VAR_3)
{
 struct hgpk_data *VAR_4 = VAR_2->private;
 int VAR_5 = VAR_2->pktcnt;
 bool VAR_6;

 switch (VAR_4->mode) {
 case 129:
  VAR_6 = (VAR_3[0] & 0x0C) == 0x08;
  break;

 case 130:
  VAR_6 = VAR_5 == 1 ?
   VAR_3[0] == VAR_0 : !(VAR_3[VAR_5 - 1] & 0x80);
  break;

 case 128:
  VAR_6 = VAR_5 == 1 ?
   VAR_3[0] == VAR_1 : !(VAR_3[VAR_5 - 1] & 0x80);
  break;

 default:
  VAR_6 = 0;
  break;
 }

 if (!VAR_6)
  FUNC_0(VAR_2,
       "bad data, mode %d (%d) %*ph\n",
       VAR_4->mode, VAR_5, 6, VAR_2->packet);

 return VAR_6;
}

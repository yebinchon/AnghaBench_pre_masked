
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int pktsize; int badbyte; int packet; int ps2dev; struct alps_data* private; } ;
struct alps_data {int flags; unsigned char mask0; unsigned char byte0; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct psmouse*,int) ;
 int FUNC_1 (int ,unsigned char*,int) ;
 scalar_t__ FUNC_2 (int *,unsigned char*,int) ;

__attribute__((used)) static int FUNC_3(struct psmouse *VAR_2)
{
 struct alps_data *VAR_3 = VAR_2->private;
 unsigned char VAR_4[sizeof(VAR_2->packet)];
 bool VAR_5;

 if (VAR_3->flags & VAR_0)
  FUNC_0(VAR_2, 1);

 VAR_5 = FUNC_2(&VAR_2->ps2dev, VAR_4,
      VAR_1 | (VAR_2->pktsize << 8)) < 0;

 if (VAR_3->flags & VAR_0)
  FUNC_0(VAR_2, 0);

 if (VAR_5 || (VAR_4[0] & VAR_3->mask0) != VAR_3->byte0)
  return -1;

 if ((VAR_2->badbyte & 0xc8) == 0x08) {



  if (FUNC_2(&VAR_2->ps2dev, VAR_4, VAR_1 | (3 << 8)))
   return -1;
 }

 FUNC_1(VAR_2->packet, VAR_4, sizeof(VAR_4));
 return 0;
}

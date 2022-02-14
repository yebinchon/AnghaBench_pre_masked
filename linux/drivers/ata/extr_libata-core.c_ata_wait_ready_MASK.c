
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ata_link {TYPE_2__* ap; } ;
struct TYPE_4__ {int flags; struct ata_link* slave_link; TYPE_1__* host; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 unsigned long FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (struct ata_link*) ;
 scalar_t__ FUNC_3 (struct ata_link*) ;
 int FUNC_4 (struct ata_link*,char*,int) ;
 int FUNC_5 (TYPE_2__*,int) ;
 unsigned long VAR_7 ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;

int FUNC_8(struct ata_link *VAR_8, unsigned long VAR_9,
     int (*VAR_10)(struct ata_link *VAR_11))
{
 unsigned long VAR_12 = VAR_7;
 unsigned long VAR_13;
 int VAR_14 = 0;


 if (VAR_8->ap->host->flags & VAR_1)
  VAR_13 = FUNC_1(VAR_12, VAR_3);
 else
  VAR_13 = FUNC_1(VAR_12, VAR_2);





 FUNC_0(VAR_8 == VAR_8->ap->slave_link);

 if (FUNC_6(VAR_13, VAR_9))
  VAR_13 = VAR_9;

 while (1) {
  unsigned long VAR_15 = VAR_7;
  int VAR_16, VAR_17;

  VAR_16 = VAR_17 = VAR_10(VAR_8);
  if (VAR_16 > 0)
   return 0;
  if (VAR_16 == -VAR_5) {
   if (FUNC_3(VAR_8))
    VAR_16 = 0;
   else if ((VAR_8->ap->flags & VAR_0) &&
     !FUNC_2(VAR_8) &&
     FUNC_7(VAR_15, VAR_13))
    VAR_16 = 0;
  }

  if (VAR_16)
   return VAR_16;
  if (FUNC_6(VAR_15, VAR_9))
   return -VAR_4;

  if (!VAR_14 && FUNC_6(VAR_15, VAR_12 + 5 * VAR_6) &&
      (VAR_9 - VAR_15 > 3 * VAR_6)) {
   FUNC_4(VAR_8,
    "link is slow to respond, please be patient "
    "(ready=%d)\n", VAR_17);
   VAR_14 = 1;
  }

  FUNC_5(VAR_8->ap, 50);
 }
}

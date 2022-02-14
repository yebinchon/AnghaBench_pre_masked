
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_device {unsigned long pio_mask; unsigned long mwdma_mask; unsigned long udma_mask; } ;
typedef int buf ;







 unsigned int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;
 int FUNC_1 (struct ata_device*,char*,char*) ;
 char* FUNC_2 (unsigned long) ;
 unsigned long FUNC_3 (unsigned long,unsigned long,unsigned long) ;
 int FUNC_4 (unsigned long,unsigned long*,unsigned long*,unsigned long*) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (char*,int,char*,char*,...) ;

int FUNC_7(struct ata_device *VAR_6, unsigned int VAR_7)
{
 char VAR_8[32];
 unsigned long VAR_9, VAR_10;
 unsigned long VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15;

 VAR_14 = !!(VAR_7 & VAR_0);
 VAR_7 &= ~VAR_0;

 VAR_10 = VAR_9 = FUNC_3(VAR_6->pio_mask,
        VAR_6->mwdma_mask,
        VAR_6->udma_mask);
 FUNC_4(VAR_10, &VAR_11, &VAR_12, &VAR_13);

 switch (VAR_7) {
 case 128:
  VAR_15 = FUNC_5(VAR_11) - 1;
  VAR_11 &= ~(1 << VAR_15);
  break;

 case 131:
  if (VAR_13) {
   VAR_15 = FUNC_5(VAR_13) - 1;
   VAR_13 &= ~(1 << VAR_15);
   if (!VAR_13)
    return -VAR_5;
  } else if (VAR_12) {
   VAR_15 = FUNC_5(VAR_12) - 1;
   VAR_12 &= ~(1 << VAR_15);
   if (!VAR_12)
    return -VAR_5;
  }
  break;

 case 132:
  VAR_13 &= VAR_4;
  break;

 case 129:
  VAR_11 &= 1;

 case 130:
  VAR_12 = 0;
  VAR_13 = 0;
  break;

 default:
  FUNC_0();
 }

 VAR_10 &= FUNC_3(VAR_11, VAR_12, VAR_13);

 if (!(VAR_10 & VAR_2) || VAR_10 == VAR_9)
  return -VAR_5;

 if (!VAR_14) {
  if (VAR_10 & (VAR_1 | VAR_3))
   FUNC_6(VAR_8, sizeof(VAR_8), "%s:%s",
     FUNC_2(VAR_10),
     FUNC_2(VAR_10 & VAR_2));
  else
   FUNC_6(VAR_8, sizeof(VAR_8), "%s",
     FUNC_2(VAR_10));

  FUNC_1(VAR_6, "limiting speed to %s\n", VAR_8);
 }

 FUNC_4(VAR_10, &VAR_6->pio_mask, &VAR_6->mwdma_mask,
       &VAR_6->udma_mask);

 return 0;
}

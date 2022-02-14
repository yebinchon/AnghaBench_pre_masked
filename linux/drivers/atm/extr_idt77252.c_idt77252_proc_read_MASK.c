
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_map {struct atm_vcc* tx_vcc; } ;
struct idt77252_dev {int tct_size; scalar_t__ tct_base; struct vc_map** vcs; int * irqstat; } ;
struct atm_vcc {int vpi; int vci; } ;
struct atm_dev {struct idt77252_dev* dev_data; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct idt77252_dev*,unsigned long) ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static int
FUNC_2(struct atm_dev *VAR_1, loff_t * VAR_2, char *VAR_3)
{
 struct idt77252_dev *VAR_4 = VAR_1->dev_data;
 int VAR_5, VAR_6;

 VAR_6 = (int) *VAR_2;
 if (!VAR_6--)
  return FUNC_1(VAR_3, "IDT77252 Interrupts:\n");
 if (!VAR_6--)
  return FUNC_1(VAR_3, "TSIF:  %lu\n", VAR_4->irqstat[15]);
 if (!VAR_6--)
  return FUNC_1(VAR_3, "TXICP: %lu\n", VAR_4->irqstat[14]);
 if (!VAR_6--)
  return FUNC_1(VAR_3, "TSQF:  %lu\n", VAR_4->irqstat[12]);
 if (!VAR_6--)
  return FUNC_1(VAR_3, "TMROF: %lu\n", VAR_4->irqstat[11]);
 if (!VAR_6--)
  return FUNC_1(VAR_3, "PHYI:  %lu\n", VAR_4->irqstat[10]);
 if (!VAR_6--)
  return FUNC_1(VAR_3, "FBQ3A: %lu\n", VAR_4->irqstat[8]);
 if (!VAR_6--)
  return FUNC_1(VAR_3, "FBQ2A: %lu\n", VAR_4->irqstat[7]);
 if (!VAR_6--)
  return FUNC_1(VAR_3, "RSQF:  %lu\n", VAR_4->irqstat[6]);
 if (!VAR_6--)
  return FUNC_1(VAR_3, "EPDU:  %lu\n", VAR_4->irqstat[5]);
 if (!VAR_6--)
  return FUNC_1(VAR_3, "RAWCF: %lu\n", VAR_4->irqstat[4]);
 if (!VAR_6--)
  return FUNC_1(VAR_3, "FBQ1A: %lu\n", VAR_4->irqstat[3]);
 if (!VAR_6--)
  return FUNC_1(VAR_3, "FBQ0A: %lu\n", VAR_4->irqstat[2]);
 if (!VAR_6--)
  return FUNC_1(VAR_3, "RSQAF: %lu\n", VAR_4->irqstat[1]);
 if (!VAR_6--)
  return FUNC_1(VAR_3, "IDT77252 Transmit Connection Table:\n");

 for (VAR_5 = 0; VAR_5 < VAR_4->tct_size; VAR_5++) {
  unsigned long VAR_7;
  struct atm_vcc *VAR_8;
  struct vc_map *VAR_9;
  char *VAR_10;

  VAR_9 = VAR_4->vcs[VAR_5];
  if (!VAR_9)
   continue;

  VAR_8 = ((void*)0);
  if (VAR_9->tx_vcc)
   VAR_8 = VAR_9->tx_vcc;
  if (!VAR_8)
   continue;
  if (VAR_6--)
   continue;

  VAR_10 = VAR_3;
  VAR_10 += FUNC_1(VAR_10, "  %4u: %u.%u: ", VAR_5, VAR_8->vpi, VAR_8->vci);
  VAR_7 = (unsigned long) (VAR_4->tct_base + VAR_5 * VAR_0);

  for (VAR_5 = 0; VAR_5 < 8; VAR_5++)
   VAR_10 += FUNC_1(VAR_10, " %08x", FUNC_0(VAR_4, VAR_7 + VAR_5));
  VAR_10 += FUNC_1(VAR_10, "\n");
  return VAR_10 - VAR_3;
 }
 return 0;
}

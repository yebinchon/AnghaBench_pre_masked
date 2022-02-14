
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct he_tpdrq {int dummy; } ;
struct he_rbrq {int dummy; } ;
struct he_rbp {int dummy; } ;
struct he_dev {char* prod_id; int media; int irq_peak; int rbrq_peak; int tbrq_peak; int total_bw; TYPE_2__* atm_dev; TYPE_1__* cs_stper; int global_lock; } ;
struct atm_dev {int dummy; } ;
typedef int loff_t ;
struct TYPE_4__ {int link_rate; } ;
struct TYPE_3__ {int inuse; int pcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct he_dev* FUNC_0 (struct atm_dev*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct he_dev*,int ) ;
 int VAR_12 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (char*,char*,...) ;

__attribute__((used)) static int
FUNC_6(struct atm_dev *VAR_13, loff_t *VAR_14, char *VAR_15)
{
 unsigned long VAR_16;
 struct he_dev *VAR_17 = FUNC_0(VAR_13);
 int VAR_18, VAR_19;





 static long VAR_20 = 0, VAR_21 = 0, VAR_22 = 0, VAR_23 = 0;


 VAR_18 = *VAR_14;
 if (!VAR_18--)
  return FUNC_5(VAR_15, "ATM he driver\n");

 if (!VAR_18--)
  return FUNC_5(VAR_15, "%s%s\n\n",
   VAR_17->prod_id, VAR_17->media & 0x40 ? "SM" : "MM");

 if (!VAR_18--)
  return FUNC_5(VAR_15, "Mismatched Cells  VPI/VCI Not Open  Dropped Cells  RCM Dropped Cells\n");

 FUNC_3(&VAR_17->global_lock, VAR_16);
 VAR_20 += FUNC_2(VAR_17, VAR_10);
 VAR_21 += FUNC_2(VAR_17, VAR_11);
 VAR_22 += FUNC_2(VAR_17, VAR_6);
 VAR_23 += FUNC_2(VAR_17, VAR_0);
 FUNC_4(&VAR_17->global_lock, VAR_16);

 if (!VAR_18--)
  return FUNC_5(VAR_15, "%16ld  %16ld  %13ld  %17ld\n\n",
       VAR_20, VAR_21, VAR_22, VAR_23);

 if (!VAR_18--)
  return FUNC_5(VAR_15, "irq_size = %d  inuse = ?  peak = %d\n",
    VAR_1, VAR_17->irq_peak);

 if (!VAR_18--)
  return FUNC_5(VAR_15, "tpdrq_size = %d  inuse = ?\n",
      VAR_5);

 if (!VAR_18--)
  return FUNC_5(VAR_15, "rbrq_size = %d  inuse = ?  peak = %d\n",
    VAR_3, VAR_17->rbrq_peak);

 if (!VAR_18--)
  return FUNC_5(VAR_15, "tbrq_size = %d  peak = %d\n",
     VAR_4, VAR_17->tbrq_peak);
 if (!VAR_18--)
  return FUNC_5(VAR_15, "rate controller periods (cbr)\n                 pcr  #vc\n");

 for (VAR_19 = 0; VAR_19 < VAR_9; ++VAR_19)
  if (!VAR_18--)
   return FUNC_5(VAR_15, "cs_stper%-2d  %8ld  %3d\n", VAR_19,
      VAR_17->cs_stper[VAR_19].pcr,
      VAR_17->cs_stper[VAR_19].inuse);

 if (!VAR_18--)
  return FUNC_5(VAR_15, "total bw (cbr): %d  (limit %d)\n",
   VAR_17->total_bw, VAR_17->atm_dev->link_rate * 10 / 9);

 return 0;
}

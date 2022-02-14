
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eeh_pe {int addr; TYPE_1__* phb; } ;
struct TYPE_2__ {int global_number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct eeh_pe*,int ,unsigned int*) ;
 int FUNC_1 (struct eeh_pe*) ;
 int FUNC_2 (struct eeh_pe*,int,int) ;
 int FUNC_3 (struct eeh_pe*,int,int) ;
 int FUNC_4 (struct eeh_pe*,int) ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct eeh_pe*,int ) ;
 int FUNC_7 (char*,int,int,...) ;

int FUNC_8(struct eeh_pe *VAR_9, bool VAR_10)
{
 int VAR_11 = (VAR_1 | VAR_0);
 int VAR_12 = VAR_4;
 unsigned int VAR_13 = 0;
 int VAR_14, VAR_15 = 0, VAR_16;






 FUNC_0(VAR_9, VAR_8, &VAR_13);

 if (VAR_13)
  VAR_12 = VAR_3;


 FUNC_4(VAR_9, VAR_11);


 for (VAR_14 = 0; VAR_14 < 3; VAR_14++) {
  VAR_16 = FUNC_2(VAR_9, VAR_12, VAR_10);
  if (!VAR_16)
   VAR_16 = FUNC_2(VAR_9, VAR_2,
        VAR_10);
  if (VAR_16) {
   VAR_16 = -VAR_5;
   FUNC_7("EEH: Failure %d resetting PHB#%x-PE#%x (attempt %d)\n\n",
    VAR_15, VAR_9->phb->global_number, VAR_9->addr, VAR_14 + 1);
   continue;
  }
  if (VAR_14)
   FUNC_7("EEH: PHB#%x-PE#%x: Successful reset (attempt %d)\n",
    VAR_9->phb->global_number, VAR_9->addr, VAR_14 + 1);


  VAR_15 = FUNC_6(VAR_9, VAR_7);
  if (VAR_15 < 0) {
   FUNC_7("EEH: Unrecoverable slot failure on PHB#%x-PE#%x",
    VAR_9->phb->global_number, VAR_9->addr);
   VAR_16 = -VAR_6;
   break;
  }
  if (FUNC_5(VAR_15))
   break;
  else
   FUNC_7("EEH: PHB#%x-PE#%x: Slot inactive after reset: 0x%x (attempt %d)\n",
    VAR_9->phb->global_number, VAR_9->addr, VAR_15, VAR_14 + 1);
 }




 if (!VAR_10)
  FUNC_1(VAR_9);

 FUNC_3(VAR_9, VAR_11, 1);
 return VAR_16;
}

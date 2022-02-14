
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ext_code {int dummy; } ;
struct cpu_hw_sf {int flags; int qsi; TYPE_1__* event; } ;
struct TYPE_2__ {int hw; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_11 ;
 int FUNC_2 (int ,int,char*,unsigned int) ;
 int FUNC_3 (struct cpu_hw_sf*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int VAR_12 ;
 struct cpu_hw_sf* FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct ext_code VAR_13,
        unsigned int VAR_14, unsigned long VAR_15)
{
 struct cpu_hw_sf *VAR_16;

 if (!(VAR_14 & VAR_3))
  return;
 FUNC_5(VAR_6);
 VAR_16 = FUNC_9(&VAR_11);



 if (!(VAR_16->flags & VAR_10))
  return;





 if (VAR_14 & VAR_4) {
  if (VAR_16->flags & VAR_9)
   if (FUNC_0(&VAR_16->event->hw))
    FUNC_3(VAR_16);
   else
    FUNC_4(VAR_16->event, 0);
  else
   FUNC_1(!(VAR_16->flags & VAR_9));
 }


 if (VAR_14 != VAR_4)
  FUNC_2(VAR_12, 6, "measurement alert: %#x\n",
        VAR_14);


 if (VAR_14 & VAR_5)
  FUNC_7(&VAR_16->qsi);


 if (VAR_14 & VAR_2) {
  FUNC_6("Sample data was lost\n");
  VAR_16->flags |= VAR_8;
  FUNC_8();
 }


 if (VAR_14 & (VAR_0|VAR_1)) {
  FUNC_6("A sampling buffer entry is incorrect (alert=0x%x)\n",
         VAR_14);
  VAR_16->flags |= VAR_7;
  FUNC_8();
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq_mask_ack; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_1__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(int VAR_16)
{
 unsigned long VAR_17;

 VAR_12 = VAR_16;

 FUNC_2(&VAR_14, VAR_17);

 FUNC_0(0xff, VAR_5);
 FUNC_0(0xff, VAR_7);




 FUNC_1(0x11, VAR_4);
 FUNC_1(VAR_0 + 0, VAR_5);
 FUNC_1(1U << VAR_2, VAR_5);
 if (VAR_16)
  FUNC_1(VAR_1 | VAR_3, VAR_5);
 else
  FUNC_1(VAR_1, VAR_5);

 FUNC_1(0x11, VAR_6);
 FUNC_1(VAR_0 + 8, VAR_7);
 FUNC_1(VAR_2, VAR_7);
 FUNC_1(VAR_8, VAR_7);
 if (VAR_16)




  VAR_13.irq_mask_ack = VAR_11;
 else
  VAR_13.irq_mask_ack = VAR_15;

 FUNC_4(100);

 FUNC_0(VAR_9, VAR_5);
 FUNC_0(VAR_10, VAR_7);

 FUNC_3(&VAR_14, VAR_17);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq_mask_ack; } ;


 unsigned int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_1__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(int VAR_15)
{
 unsigned long VAR_16;

 VAR_11 = VAR_15;

 FUNC_3(&VAR_13, VAR_16);

 FUNC_1(0xff, VAR_4);




 FUNC_2(0x11, VAR_3);


 FUNC_2(FUNC_0(0), VAR_4);


 FUNC_2(1U << VAR_1, VAR_4);

 if (VAR_15)
  FUNC_2(VAR_0 | VAR_2, VAR_4);
 else
  FUNC_2(VAR_0, VAR_4);

 FUNC_2(0x11, VAR_5);


 FUNC_2(FUNC_0(8), VAR_6);

 FUNC_2(VAR_1, VAR_6);

 FUNC_2(VAR_7, VAR_6);

 if (VAR_15)




  VAR_12.irq_mask_ack = VAR_10;
 else
  VAR_12.irq_mask_ack = VAR_14;

 FUNC_5(100);

 FUNC_1(VAR_8, VAR_4);
 FUNC_1(VAR_9, VAR_6);

 FUNC_4(&VAR_13, VAR_16);
}

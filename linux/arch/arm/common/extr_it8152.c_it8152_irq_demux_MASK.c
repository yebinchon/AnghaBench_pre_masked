
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;

void FUNC_7(struct irq_desc *VAR_6)
{
       int VAR_7, VAR_8, VAR_9;
       int VAR_10;

       while (1) {

        VAR_7 = FUNC_4(VAR_2);
        VAR_8 = FUNC_4(VAR_1);
        VAR_9 = FUNC_4(VAR_0);


        FUNC_5((~VAR_7), VAR_2);
        FUNC_5((~VAR_8), VAR_1);
        FUNC_5((~VAR_9), VAR_0);

        if (!(VAR_9 | VAR_8 | VAR_7)) {


         VAR_7 = FUNC_4(VAR_2);
         VAR_8 = FUNC_4(VAR_1);
         VAR_9 = FUNC_4(VAR_0);
         if (!(VAR_9 | VAR_8 | VAR_7))
          return;
        }

        VAR_7 &= ((1 << VAR_5) - 1);
        while (VAR_7) {
         VAR_10 = FUNC_3(VAR_7);
         FUNC_6(FUNC_2(VAR_10));
         VAR_7 &= ~(1 << VAR_10);
        }

        VAR_8 &= ((1 << VAR_4) - 1);
        while (VAR_8) {
         VAR_10 = FUNC_3(VAR_8);
         FUNC_6(FUNC_1(VAR_10));
         VAR_8 &= ~(1 << VAR_10);
        }

        VAR_9 &= ((1 << VAR_3) - 1);
        while (VAR_9) {
         VAR_10 = FUNC_3(VAR_9);
         FUNC_6(FUNC_0(VAR_10));
         VAR_9 &= ~(1 << VAR_10);
        }
       }
}

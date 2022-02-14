
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
typedef int irq_handler_t ;
struct TYPE_2__ {int brdno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_1__ VAR_16 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int,int ,int ,char*,int ) ;

void FUNC_7 (irq_handler_t VAR_17)
{
    uint16_t VAR_18 = FUNC_0(VAR_16.brdno);
    int VAR_19;


    FUNC_4(VAR_5, 0);
    FUNC_4(VAR_4, VAR_12);
    FUNC_3(VAR_8, FUNC_2(VAR_8) | VAR_10 | VAR_9);
    FUNC_3(VAR_6, VAR_7 | 6);
    if (FUNC_6(VAR_3, VAR_15, VAR_0, "timer",
                    VAR_17))
 FUNC_5 ("Couldn't register timer int");

    FUNC_1(&VAR_14, VAR_11);

    if (VAR_18 == 0x0162 || VAR_18 == 0x172)
 VAR_19 = VAR_1;
    else
        VAR_19 = VAR_2;
    if (FUNC_6(VAR_19, VAR_13, 0,
    "abort", VAR_13))
 FUNC_5 ("Couldn't register abort int");
}

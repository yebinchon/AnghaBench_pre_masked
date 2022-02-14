
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int irq_handler_t ;
struct TYPE_2__ {int msr; int t1cr_omr; int t1msb; int t1lsb; int irr_icr1; int pfr_icr0; int t0cr_rtmr; } ;
typedef TYPE_1__* RtcPtr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int ,int ,char*,int ) ;

void FUNC_3 (irq_handler_t VAR_9)
{
    volatile RtcPtr_t VAR_10 = (RtcPtr_t)VAR_2;
    unsigned char VAR_11 = VAR_10->msr & 0xc0;

    VAR_10->msr = 0;

    if (FUNC_2(VAR_1, VAR_8, VAR_3, "timer",
                    VAR_9))
 FUNC_1 ("Couldn't register timer int");

    VAR_10->t1cr_omr = 0x04;
    VAR_10->t1msb = VAR_5 >> 8;
    VAR_10->t1lsb = VAR_5 & 0xff;
    VAR_10->irr_icr1 &= 0xef;
    VAR_10->msr = 0x40;
    VAR_10->pfr_icr0 = 0x80;
    VAR_10->irr_icr1 = 0;
    VAR_10->t1cr_omr = 0x0a;
    VAR_10->t0cr_rtmr &= 0xdf;
    VAR_10->msr = 0;
    VAR_10->t1cr_omr = 0x05;

    VAR_10->msr = VAR_11;

    FUNC_0(&VAR_7, VAR_4);

    if (FUNC_2(VAR_0, VAR_6, 0,
    "abort", VAR_6))
 FUNC_1 ("Couldn't register abort int");
}

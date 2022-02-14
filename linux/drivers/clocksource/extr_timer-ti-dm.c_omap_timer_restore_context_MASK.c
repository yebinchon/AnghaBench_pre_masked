
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tclr; int tier; int tsicr; int tmar; int tldr; int tcrr; int twer; } ;
struct omap_dm_timer {TYPE_1__ context; int irq_ena; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct omap_dm_timer*,int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct omap_dm_timer *VAR_6)
{
 FUNC_0(VAR_6, VAR_5,
    VAR_6->context.twer);
 FUNC_0(VAR_6, VAR_0,
    VAR_6->context.tcrr);
 FUNC_0(VAR_6, VAR_3,
    VAR_6->context.tldr);
 FUNC_0(VAR_6, VAR_4,
    VAR_6->context.tmar);
 FUNC_0(VAR_6, VAR_2,
    VAR_6->context.tsicr);
 FUNC_1(VAR_6->context.tier, VAR_6->irq_ena);
 FUNC_0(VAR_6, VAR_1,
    VAR_6->context.tclr);
}

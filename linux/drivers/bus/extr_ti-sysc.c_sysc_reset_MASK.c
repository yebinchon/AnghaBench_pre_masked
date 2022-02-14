
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int quirks; int syss_mask; } ;
struct sysc {int* offsets; int (* reset_done_quirk ) (struct sysc*) ;TYPE_3__ cfg; int (* clk_enable_quirk ) (struct sysc*) ;int (* clk_disable_quirk ) (struct sysc*) ;TYPE_2__* cap; scalar_t__ legacy_mode; } ;
struct TYPE_5__ {TYPE_1__* regbits; } ;
struct TYPE_4__ {scalar_t__ srst_shift; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int (*) (struct sysc*),struct sysc*,int,int,int,int ) ;
 int FUNC_2 (struct sysc*) ;
 int FUNC_3 (struct sysc*) ;
 int FUNC_4 (struct sysc*) ;
 int FUNC_5 (struct sysc*) ;
 int FUNC_6 (struct sysc*) ;
 int FUNC_7 (struct sysc*,int,int) ;

__attribute__((used)) static int FUNC_8(struct sysc *VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11 = 0;
 u32 VAR_12, VAR_13;

 VAR_7 = VAR_6->offsets[VAR_3];
 VAR_8 = VAR_6->offsets[VAR_4];

 if (VAR_6->legacy_mode || VAR_7 < 0 ||
     VAR_6->cap->regbits->srst_shift < 0 ||
     VAR_6->cfg.quirks & VAR_1)
  return 0;

 VAR_12 = FUNC_0(VAR_6->cap->regbits->srst_shift);

 if (VAR_6->cfg.quirks & VAR_5)
  VAR_13 = 0;
 else
  VAR_13 = VAR_6->cfg.syss_mask;

 if (VAR_6->clk_disable_quirk)
  VAR_6->clk_disable_quirk(VAR_6);

 VAR_9 = FUNC_5(VAR_6);
 VAR_9 |= VAR_12;
 FUNC_7(VAR_6, VAR_7, VAR_9);

 if (VAR_6->clk_enable_quirk)
  VAR_6->clk_enable_quirk(VAR_6);


 if (VAR_8 >= 0) {
  VAR_11 = FUNC_1(FUNC_6, VAR_6, VAR_10,
        (VAR_10 & VAR_6->cfg.syss_mask) ==
        VAR_13,
        100, VAR_0);

 } else if (VAR_6->cfg.quirks & VAR_2) {
  VAR_11 = FUNC_1(FUNC_5, VAR_6, VAR_10,
        !(VAR_10 & VAR_12),
        100, VAR_0);
 }

 if (VAR_6->reset_done_quirk)
  VAR_6->reset_done_quirk(VAR_6);

 return VAR_11;
}

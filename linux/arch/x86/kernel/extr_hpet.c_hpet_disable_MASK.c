
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int boot_cfg; unsigned int nr_channels; TYPE_1__* channels; } ;
struct TYPE_3__ {int boot_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 () ;

void FUNC_3(void)
{
 unsigned int VAR_4;
 u32 VAR_5;

 if (!FUNC_2() || !VAR_3)
  return;


 VAR_5 = VAR_2.boot_cfg;
 VAR_5 &= ~VAR_1;
 FUNC_1(VAR_5, VAR_0);


 for (VAR_4 = 0; VAR_4 < VAR_2.nr_channels; VAR_4++)
  FUNC_1(VAR_2.channels[VAR_4].boot_cfg, FUNC_0(VAR_4));


 if (VAR_2.boot_cfg & VAR_1)
  FUNC_1(VAR_2.boot_cfg, VAR_0);
}

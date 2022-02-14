
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tnetd7300_clock {int pll; int ctrl; } ;
struct TYPE_4__ {int rate; } ;
struct TYPE_3__ {int rate; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_0 (int,int,int*,int*,int*) ;
 TYPE_1__ VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static void FUNC_4(u32 VAR_8, struct tnetd7300_clock *VAR_9,
 u32 *VAR_10, u32 VAR_11)
{
 int VAR_12, VAR_13, VAR_14;
 int VAR_15 = VAR_6.rate;

 switch ((*VAR_10 & (VAR_2 << VAR_8)) >> VAR_8) {
 case 131:
  VAR_15 = VAR_6.rate;
  break;
 case 129:
  VAR_15 = VAR_0;
  break;
 case 128:
  VAR_15 = VAR_1;
  break;
 case 130:
  VAR_15 = VAR_7.rate;
  break;
 }

 FUNC_0(VAR_15, VAR_11, &VAR_12, &VAR_13, &VAR_14);

 FUNC_3(((VAR_12 - 1) << VAR_5) | (VAR_13 - 1), &VAR_9->ctrl);
 FUNC_1(1);
 FUNC_3(4, &VAR_9->pll);
 while (FUNC_2(&VAR_9->pll) & VAR_4)
  ;
 FUNC_3(((VAR_14 - 1) << VAR_3) | (0xff << 3) | 0x0e, &VAR_9->pll);
 FUNC_1(75);
}

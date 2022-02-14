
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct qib_pportdata {int dd; TYPE_1__* cpspec; } ;
struct TYPE_2__ {int ibcctrl_b; } ;


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
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct qib_pportdata*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct qib_pportdata *VAR_11, u32 VAR_12)
{
 u64 VAR_13;

 VAR_13 = VAR_11->cpspec->ibcctrl_b & ~(VAR_4 |
        VAR_0 |
        VAR_1);

 if (VAR_12 & (VAR_12 - 1))
  VAR_13 |= (VAR_12 << VAR_3) |
        VAR_0 |
        VAR_1;
 else
  VAR_13 |= VAR_12 == VAR_8 ?
   VAR_5 | VAR_0 :
   ((VAR_12 == VAR_7 ?
     VAR_2 : VAR_6));

 if (VAR_13 == VAR_11->cpspec->ibcctrl_b)
  return;

 VAR_11->cpspec->ibcctrl_b = VAR_13;
 FUNC_1(VAR_11, VAR_10, VAR_11->cpspec->ibcctrl_b);
 FUNC_0(VAR_11->dd, VAR_9, 0);
}

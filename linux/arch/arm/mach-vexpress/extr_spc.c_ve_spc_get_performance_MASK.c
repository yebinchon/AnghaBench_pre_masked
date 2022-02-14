
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ve_spc_opp {scalar_t__ freq; } ;
struct TYPE_2__ {scalar_t__ baseaddr; scalar_t__* num_opps; struct ve_spc_opp** opps; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(int VAR_4, u32 *VAR_5)
{
 struct ve_spc_opp *VAR_6 = VAR_3->opps[VAR_4];
 u32 VAR_7 = 0;
 u32 VAR_8;

 VAR_7 = FUNC_0(VAR_4) ? VAR_1 : VAR_2;

 VAR_8 = FUNC_1(VAR_3->baseaddr + VAR_7);
 if (VAR_8 >= VAR_3->num_opps[VAR_4])
  return -VAR_0;

 VAR_6 += VAR_8;
 *VAR_5 = VAR_6->freq;

 return 0;
}

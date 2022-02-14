
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct op_x86_model_spec {int reserved; } ;
struct op_msrs {TYPE_2__* controls; TYPE_1__* counters; } ;
struct TYPE_7__ {scalar_t__ count; scalar_t__ enabled; } ;
struct TYPE_6__ {scalar_t__ addr; } ;
struct TYPE_5__ {scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct op_x86_model_spec const*,TYPE_3__*) ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__,int) ;
 scalar_t__* VAR_4 ;
 int FUNC_5 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_6(struct op_x86_model_spec const *VAR_5,
         struct op_msrs const * const VAR_6)
{
 u64 VAR_7;
 int VAR_8;


 for (VAR_8 = 0; VAR_8 < VAR_1; ++VAR_8) {
  if (VAR_2[VAR_8].enabled
      && VAR_6->counters[FUNC_2(VAR_8)].addr)
   VAR_4[VAR_8] = VAR_2[VAR_8].count;
  else
   VAR_4[VAR_8] = 0;
 }


 for (VAR_8 = 0; VAR_8 < VAR_3; ++VAR_8) {
  if (!VAR_6->controls[VAR_8].addr)
   continue;
  FUNC_4(VAR_6->controls[VAR_8].addr, VAR_7);
  if (VAR_7 & VAR_0)
   FUNC_3(VAR_8);
  VAR_7 &= VAR_5->reserved;
  FUNC_5(VAR_6->controls[VAR_8].addr, VAR_7);




  FUNC_5(VAR_6->counters[VAR_8].addr, -1LL);
 }


 for (VAR_8 = 0; VAR_8 < VAR_3; ++VAR_8) {
  int VAR_9 = FUNC_1(VAR_8);
  if (!VAR_4[VAR_9])
   continue;


  FUNC_5(VAR_6->counters[VAR_8].addr, -(u64)VAR_4[VAR_9]);


  FUNC_4(VAR_6->controls[VAR_8].addr, VAR_7);
  VAR_7 &= VAR_5->reserved;
  VAR_7 |= FUNC_0(VAR_5, &VAR_2[VAR_9]);
  FUNC_5(VAR_6->controls[VAR_8].addr, VAR_7);
 }
}

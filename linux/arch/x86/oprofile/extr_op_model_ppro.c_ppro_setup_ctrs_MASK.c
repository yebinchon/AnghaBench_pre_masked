
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ version_id; scalar_t__ bit_width; } ;
union cpuid10_eax {TYPE_1__ split; int full; } ;
typedef int u64 ;
struct op_x86_model_spec {int reserved; } ;
struct op_msrs {TYPE_3__* controls; TYPE_2__* counters; } ;
struct TYPE_11__ {int x86_model; int x86; } ;
struct TYPE_10__ {int count; scalar_t__ enabled; } ;
struct TYPE_9__ {scalar_t__ addr; } ;
struct TYPE_8__ {scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_4__* VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_5__ VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int FUNC_3 (struct op_x86_model_spec const*,TYPE_4__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__,int) ;
 int* VAR_6 ;
 int FUNC_6 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_7(struct op_x86_model_spec const *VAR_7,
       struct op_msrs const * const VAR_8)
{
 u64 VAR_9;
 int VAR_10;

 if (FUNC_1(VAR_1)) {
  union cpuid10_eax VAR_11;
  VAR_11.full = FUNC_2(0xa);





  if (!(VAR_11.split.version_id == 0 &&
   FUNC_0(VAR_4.x86) == 6 &&
    FUNC_0(VAR_4.x86_model) == 15)) {

   if (VAR_3 < VAR_11.split.bit_width)
    VAR_3 = VAR_11.split.bit_width;
  }
 }


 for (VAR_10 = 0; VAR_10 < VAR_5; ++VAR_10) {
  if (!VAR_8->controls[VAR_10].addr)
   continue;
  FUNC_5(VAR_8->controls[VAR_10].addr, VAR_9);
  if (VAR_9 & VAR_0)
   FUNC_4(VAR_10);
  VAR_9 &= VAR_7->reserved;
  FUNC_6(VAR_8->controls[VAR_10].addr, VAR_9);




  FUNC_6(VAR_8->counters[VAR_10].addr, -1LL);
 }


 for (VAR_10 = 0; VAR_10 < VAR_5; ++VAR_10) {
  if (VAR_2[VAR_10].enabled && VAR_8->counters[VAR_10].addr) {
   VAR_6[VAR_10] = VAR_2[VAR_10].count;
   FUNC_6(VAR_8->counters[VAR_10].addr, -VAR_6[VAR_10]);
   FUNC_5(VAR_8->controls[VAR_10].addr, VAR_9);
   VAR_9 &= VAR_7->reserved;
   VAR_9 |= FUNC_3(VAR_7, &VAR_2[VAR_10]);
   FUNC_6(VAR_8->controls[VAR_10].addr, VAR_9);
  } else {
   VAR_6[VAR_10] = 0;
  }
 }
}

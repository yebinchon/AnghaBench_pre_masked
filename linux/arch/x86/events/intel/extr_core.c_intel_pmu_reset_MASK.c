
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct debug_store {int bts_buffer_base; int bts_index; } ;
struct TYPE_4__ {int ds; } ;
struct TYPE_3__ {int num_counters; int num_counters_fixed; int version; scalar_t__ lbr_nr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct debug_store* FUNC_0 (int ) ;
 TYPE_2__ VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (scalar_t__,unsigned long long) ;
 TYPE_1__ VAR_5 ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13(void)
{
 struct debug_store *VAR_6 = FUNC_0(VAR_4.ds);
 unsigned long VAR_7;
 int VAR_8;

 if (!VAR_5.num_counters)
  return;

 FUNC_5(VAR_7);

 FUNC_6("clearing PMU state on CPU#%d\n", FUNC_7());

 for (VAR_8 = 0; VAR_8 < VAR_5.num_counters; VAR_8++) {
  FUNC_10(FUNC_11(VAR_8), 0ull);
  FUNC_10(FUNC_12(VAR_8), 0ull);
 }
 for (VAR_8 = 0; VAR_8 < VAR_5.num_counters_fixed; VAR_8++)
  FUNC_10(VAR_2 + VAR_8, 0ull);

 if (VAR_6)
  VAR_6->bts_index = VAR_6->bts_buffer_base;


 if (VAR_5.version >= 2) {
  FUNC_2(FUNC_3());
  FUNC_9(VAR_3, 0);
 }


 if (VAR_5.lbr_nr) {
  FUNC_8(FUNC_1() &
   ~(VAR_0|VAR_1));
 }

 FUNC_4(VAR_7);
}

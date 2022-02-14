
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(void)
{
 if (VAR_5 == 0)
  VAR_5 = VAR_2;
 else if (VAR_5 > VAR_3) {
  FUNC_0("set bch_cutoff_writeback_sync (%u) to max value %u",
   VAR_5, VAR_3);
  VAR_5 = VAR_3;
 }

 if (VAR_4 == 0)
  VAR_4 = VAR_0;
 else if (VAR_4 > VAR_1) {
  FUNC_0("set bch_cutoff_writeback (%u) to max value %u",
   VAR_4, VAR_1);
  VAR_4 = VAR_1;
 }

 if (VAR_4 > VAR_5) {
  FUNC_0("set bch_cutoff_writeback (%u) to %u",
   VAR_4, VAR_5);
  VAR_4 = VAR_5;
 }
}

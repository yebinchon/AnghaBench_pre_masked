
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 long FUNC_1 (int *) ;
 long FUNC_2 (int *) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int FUNC_4(uint32_t *VAR_1)
{
 long VAR_2;
 uint32_t VAR_3[4];


 VAR_2 = FUNC_1(VAR_3);
 if (VAR_2 != 0) {
  FUNC_3("perf_config: perf_stop_counters = %ld\n", VAR_2);
  return -VAR_0;
 }

FUNC_3("Preparing to write image\n");

 VAR_2 = FUNC_2((uint64_t *)VAR_1);
 if (VAR_2 != 0) {
  FUNC_3("perf_config: DOWNLOAD = %ld\n", VAR_2);
  return -VAR_0;
 }

FUNC_3("Preparing to start counters\n");


 FUNC_0();

 return sizeof(uint32_t);
}

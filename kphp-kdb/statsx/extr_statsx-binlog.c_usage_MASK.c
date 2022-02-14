
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;

void FUNC_2() {
  FUNC_1 (VAR_0, "Debug utils: read stats binlog and dumps events for given counter.\n");
  FUNC_1 (VAR_0, "\t-c [counter_id]\tDumps only logevent for given counter.\n");
  FUNC_1 (VAR_0, "\t-l\tGenerate list of all used counters\n");
  FUNC_1 (VAR_0, "\t-u\tGenerate list of active users (finding bots)\n");
  FUNC_1 (VAR_0, "\t-S<start time>\n");
  FUNC_1 (VAR_0, "\t-T<end time>\n");
  FUNC_1 (VAR_0, "\t-i\tuse recent snapshot (for the case when first binlog was deleted)\n");
  FUNC_0 (2);
}

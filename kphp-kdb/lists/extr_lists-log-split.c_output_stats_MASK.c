
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,int ,...) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_2 (void) {
  FUNC_0 (VAR_4,
    "read: %d bytes (reported binlog position %d), %d records\n"
    "written: %d bytes, %d records\n",
    VAR_0, FUNC_1(), VAR_1, VAR_5, VAR_6);
  FUNC_0 (VAR_4, "skipped_change_value: %d bytes.\n", VAR_3);
  FUNC_0 (VAR_4, "skipped_change_flags: %d bytes.\n", VAR_2);
}

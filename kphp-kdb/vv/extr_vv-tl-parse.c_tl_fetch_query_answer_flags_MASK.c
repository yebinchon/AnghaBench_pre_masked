
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_query_header {int flags; void* binlog_time; void* binlog_pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 void* FUNC_2 () ;
 int FUNC_3 (int ,char*,int) ;

int FUNC_4 (struct tl_query_header *VAR_4) {
  int VAR_5 = FUNC_1 ();
  if (FUNC_0 ()) {
    return -1;
  }
  if (VAR_4->flags & VAR_5) {
    FUNC_3 (VAR_0, "Duplicate flags in header 0x%08x", VAR_4->flags & VAR_5);
    return -1;
  }
  if (VAR_5 & ~VAR_3) {
    FUNC_3 (VAR_0, "Unsupported flags in header 0x%08x", (~VAR_3) & VAR_5);
    return -1;
  }
  VAR_4->flags |= VAR_5;
  if (VAR_5 & VAR_1) {
    VAR_4->binlog_pos = FUNC_2 ();
    if (FUNC_0 ()) {
      return -1;
    }
  }
  if (VAR_5 & VAR_2) {
    VAR_4->binlog_time = FUNC_2 ();
    if (FUNC_0 ()) {
      return -1;
    }
  }
  return 0;
}

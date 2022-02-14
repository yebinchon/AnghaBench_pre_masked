
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int disk_read_time; } ;
struct TYPE_4__ {TYPE_1__ structured; } ;


 long long VAR_0 ;
 int VAR_1 ;
 long long VAR_2 ;
 long long VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 () ;
 long long FUNC_3 (int ,long long,int ) ;
 int FUNC_4 (char*,long long,int) ;
 int FUNC_5 (int ,char*,int) ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_6 (char *VAR_8, long long VAR_9, int VAR_10) {
  FUNC_0 (VAR_10 > 0);
  FUNC_0 (VAR_9 + VAR_10 <= VAR_3);
  if (VAR_7 >= 4) {
    FUNC_1 (VAR_6, "get_binlog_data: pos = %lld, len = %d\n", VAR_9, VAR_10);
  }
  if (VAR_3 - VAR_9 + VAR_0 <= VAR_2) {
    if (VAR_7 >= 4) {
      FUNC_1 (VAR_6, "copying from buffer\n");
    }
    FUNC_4 (VAR_8, VAR_2 - (VAR_3 - VAR_9), VAR_10);
  } else {
    if (VAR_7 >= 4) {
      FUNC_1 (VAR_6, "reading from file\n");
    }

    VAR_5->structured.disk_read_time -= FUNC_2 ();
    FUNC_0 (FUNC_3 (VAR_1, VAR_9, VAR_4) == VAR_9);
    FUNC_0 (FUNC_5 (VAR_1, VAR_8, VAR_10) == VAR_10);
    VAR_5->structured.disk_read_time += FUNC_2 ();
  }
  if (VAR_7 >= 4) {
    FUNC_1 (VAR_6, "copied data successfully\n");
  }
  return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stat {long long st_size; } ;
struct TYPE_3__ {int last_binlog_update; } ;
struct TYPE_4__ {TYPE_1__ structured; } ;


 int VAR_0 ;
 long long VAR_1 ;
 int VAR_2 ;
 long long VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct stat*) ;
 int FUNC_2 () ;
 int FUNC_3 (int,int ,long long) ;
 int FUNC_4 () ;
 int FUNC_5 (long long) ;
 int FUNC_6 (long long) ;

void FUNC_7 (void) {
  struct stat VAR_5;
  FUNC_1 (VAR_0, &VAR_5);
  long long VAR_6 = VAR_1;
  VAR_1 = VAR_5.st_size;
  FUNC_0 (VAR_1 < VAR_3);
  if (VAR_1 != VAR_6) {
    FUNC_3 (1, VAR_2, VAR_1);
    FUNC_6 (VAR_6);
    FUNC_5 (VAR_6);
    VAR_4->structured.last_binlog_update = FUNC_2 ();
    FUNC_4 ();
  }
}

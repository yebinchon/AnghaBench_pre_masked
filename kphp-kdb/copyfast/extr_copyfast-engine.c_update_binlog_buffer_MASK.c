
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int disk_read_time; } ;
struct TYPE_4__ {TYPE_1__ structured; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 long long VAR_4 ;
 scalar_t__ VAR_5 ;
 long long VAR_6 ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,long long) ;
 scalar_t__ FUNC_2 () ;
 long long FUNC_3 (int ,long long,int ) ;
 int FUNC_4 (scalar_t__,scalar_t__,long long) ;
 long long FUNC_5 (int ,scalar_t__,long long) ;
 int VAR_9 ;
 int VAR_10 ;

void FUNC_6 (long long VAR_11) {
  FUNC_0 (VAR_6 > VAR_11);
  FUNC_0 (VAR_5 == VAR_3);
  long long VAR_12 = VAR_6 - VAR_11;
  if (VAR_6 - VAR_11 > VAR_4) {
    VAR_8->structured.disk_read_time -= FUNC_2 ();
    FUNC_0 (FUNC_3 (VAR_2, VAR_6 - VAR_4, VAR_7) == VAR_6 - VAR_4);
    FUNC_0 (FUNC_5 (VAR_2, VAR_0, VAR_4) == VAR_4);
    VAR_8->structured.disk_read_time += FUNC_2 ();
    if (VAR_10 >= 4) {
      FUNC_1 (VAR_9, "read %lld bytes of replicating file\n", (long long)VAR_4);
    }
    VAR_5 = VAR_0 + VAR_4;
    VAR_3 = VAR_5;
  } else {
    if (VAR_5 + VAR_12 > VAR_1) {
      FUNC_4 (VAR_0, VAR_5 - (VAR_4 - VAR_12), VAR_4 - VAR_12);
      VAR_8->structured.disk_read_time -= FUNC_2 ();
      VAR_5 = VAR_0 + (VAR_4 - VAR_12);
      VAR_3 = VAR_0 + (VAR_4 - VAR_12);
      VAR_8->structured.disk_read_time += FUNC_2 ();
    }
    FUNC_0 (FUNC_3 (VAR_2, VAR_6 - VAR_12, VAR_7) == VAR_6 - VAR_12);
    FUNC_0 (FUNC_5 (VAR_2, VAR_5, VAR_12) == VAR_12);
    VAR_5 += VAR_12;
    VAR_3 += VAR_12;
    if (VAR_10 >= 4) {
      FUNC_1 (VAR_9, "read %lld bytes of replicating file\n", VAR_12);
    }
  }
}

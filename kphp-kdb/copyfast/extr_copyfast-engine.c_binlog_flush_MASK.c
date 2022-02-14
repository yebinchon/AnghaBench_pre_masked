
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int disk_write_time; } ;
struct TYPE_4__ {TYPE_1__ structured; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,scalar_t__) ;

int FUNC_6 (int VAR_8) {
  if (VAR_4 != VAR_2) {
    FUNC_0 (VAR_4 > VAR_2);
    VAR_7->structured.disk_write_time -= FUNC_2 ();
    FUNC_0 (FUNC_3 (VAR_1, VAR_5 - (VAR_4 - VAR_2), VAR_6) == VAR_5 - (VAR_4 - VAR_2));
    FUNC_0 (FUNC_5 (VAR_1, VAR_2, VAR_4 - VAR_2) == VAR_4 - VAR_2);
    FUNC_0 (FUNC_1 (VAR_1) >= 0);
    VAR_7->structured.disk_write_time += FUNC_2 ();
    VAR_2 = VAR_4;
  }
  if (VAR_4 > VAR_0 + VAR_3) {
    FUNC_4 (VAR_0, VAR_4 - VAR_3, VAR_3);
    VAR_4 = VAR_0 + VAR_3;
    VAR_2 = VAR_4;
  }
  return 0;
}

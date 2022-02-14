
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int aio_fildes; } ;
struct TYPE_6__ {int abs_filename; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__ VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int ,char*,int ,int ) ;

int FUNC_5 (void) {
  if (VAR_1.aio_fildes < 0) {
    return 0;
  }
  int VAR_3 = FUNC_0 (&VAR_1);
  if (VAR_3 == VAR_0) {
    return 1;
  }
  int VAR_4 = FUNC_1 (&VAR_1);
  if (VAR_4 < 0) {
    FUNC_4 (0, "aio_fsync (%s) fails. %s\n", VAR_2->abs_filename, FUNC_2 (VAR_4));
    FUNC_3 (VAR_2, 0);
  } else {
    FUNC_3 (VAR_2, 1);
  }
  VAR_1.aio_fildes = -1;
  return 0;
}

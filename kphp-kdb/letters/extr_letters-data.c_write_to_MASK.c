
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_4__ {TYPE_1__* data; } ;
struct TYPE_3__ {int drive_r; } ;


 int FUNC_0 (int) ;
 int * VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (char*,int,int ,int) ;
 int ** VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int ,void const*,int) ;

void FUNC_3 (int VAR_4, const void *VAR_5, int VAR_6) {

  FUNC_0 (FUNC_2 (VAR_0[2 + VAR_4], VAR_5, VAR_6) == (ssize_t)VAR_6);
  if (VAR_3) {
    FUNC_1 ("write %9d bytes  to  position %12lld in buffer %d\n", VAR_6, VAR_1.data[VAR_4].drive_r, VAR_4);
  }
  VAR_2[VAR_4][4]++;
}

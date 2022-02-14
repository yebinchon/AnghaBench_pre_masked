
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ fd; } ;


 char* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (char*,int,int) ;
 int VAR_4 ;

void FUNC_3 (void) {
  VAR_1->fd = FUNC_2 (VAR_0, VAR_3 | VAR_2, 0600);
  if (VAR_1->fd < 0) {
    FUNC_1 (VAR_4, "can not open file for replication (error %m)\n");
    FUNC_1 (VAR_4, "file %s\n", VAR_0);
    FUNC_0 (1);
  }
}

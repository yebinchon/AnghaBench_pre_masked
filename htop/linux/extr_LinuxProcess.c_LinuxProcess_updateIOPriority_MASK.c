
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pid; } ;
struct TYPE_5__ {int ioPriority; TYPE_1__ super; } ;
typedef TYPE_2__ LinuxProcess ;
typedef int IOPriority ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;

IOPriority FUNC_1(LinuxProcess* VAR_2) {
   IOPriority VAR_3 = 0;




   VAR_2->ioPriority = VAR_3;
   return VAR_3;
}

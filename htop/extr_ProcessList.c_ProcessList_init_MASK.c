
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uid_t ;
typedef int UsersTable ;
struct TYPE_4__ {int topologyOk; int following; int topology; scalar_t__ cpuCount; void* processes2; int userId; int * pidWhiteList; int * usersTable; int processTable; void* processes; } ;
typedef TYPE_1__ ProcessList ;
typedef int ObjectClass ;
typedef int Hashtable ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 void* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

ProcessList* FUNC_4(ProcessList* VAR_1, ObjectClass* VAR_2, UsersTable* VAR_3, Hashtable* VAR_4, uid_t VAR_5) {
   VAR_1->processes = FUNC_1(VAR_2, 1, VAR_0);
   VAR_1->processTable = FUNC_0(140, 0);
   VAR_1->usersTable = VAR_3;
   VAR_1->pidWhiteList = VAR_4;
   VAR_1->userId = VAR_5;


   VAR_1->processes2 = FUNC_1(VAR_2, 1, VAR_0);


   VAR_1->cpuCount = 0;
   VAR_1->following = -1;

   return VAR_1;
}

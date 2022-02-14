
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adb_request {int complete; int (* done ) (struct adb_request*) ;int next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adb_request*) ;

__attribute__((used)) static void FUNC_1(struct adb_request *VAR_2, int VAR_3)
{
 VAR_2->complete = 1;
 VAR_1 = VAR_2->next;
 if (VAR_2->done)
  (*VAR_2->done)(VAR_2);
 VAR_0 = VAR_3;
}

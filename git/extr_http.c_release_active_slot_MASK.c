
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct active_request_slot {int * curl; } ;


 int FUNC_0 (struct active_request_slot*) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 () ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct active_request_slot*) ;

__attribute__((used)) static void FUNC_4(struct active_request_slot *VAR_2)
{
 FUNC_0(VAR_2);
 if (VAR_2->curl) {
  FUNC_3(VAR_2);
  if (VAR_0 > VAR_1) {
   FUNC_1(VAR_2->curl);
   VAR_2->curl = ((void*)0);
   VAR_0--;
  }
 }



}

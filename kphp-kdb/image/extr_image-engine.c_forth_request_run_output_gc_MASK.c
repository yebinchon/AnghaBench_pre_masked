
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct forth_request {scalar_t__ timeout; struct forth_request* next; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct forth_request*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct forth_request VAR_3 ;

__attribute__((used)) static void FUNC_1 (void) {
  struct forth_request *VAR_4, *VAR_5;
  for (VAR_4 = VAR_3.next; VAR_4 != &VAR_3; VAR_4 = VAR_5) {
    if (VAR_2 <= VAR_4->timeout) {
      break;
    }
    VAR_5 = VAR_4->next;
    FUNC_0 (VAR_4);
  }
  for (VAR_4 = VAR_3.next; VAR_0 > VAR_1 && VAR_4 != &VAR_3; VAR_4 = VAR_5) {
    VAR_5 = VAR_4->next;
    FUNC_0 (VAR_4);
  }
}

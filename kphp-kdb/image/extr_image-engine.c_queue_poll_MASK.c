
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct forth_request {struct forth_request* next; } ;


 int FUNC_0 (struct forth_request*) ;
 int FUNC_1 (struct forth_request*,struct forth_request*) ;
 struct forth_request VAR_0 ;
 struct forth_request VAR_1 ;

__attribute__((used)) static struct forth_request *FUNC_2 () {
  struct forth_request *VAR_2 = VAR_1.next;
  if (VAR_2 == &VAR_1) {
    VAR_2 = VAR_0.next;
    if (VAR_2 == &VAR_0) {
      return ((void*)0);
    }
    FUNC_0 (VAR_2);
  }
  FUNC_1 (&VAR_1, VAR_2);
  return VAR_2;
}

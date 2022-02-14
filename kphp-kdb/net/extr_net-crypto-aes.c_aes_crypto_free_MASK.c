
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {scalar_t__ crypto; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

int FUNC_1 (struct connection *VAR_1) {
  if (VAR_1->crypto) {
    FUNC_0 (VAR_1->crypto);
    VAR_1->crypto = 0;
    --VAR_0;
  }
  return 0;
}

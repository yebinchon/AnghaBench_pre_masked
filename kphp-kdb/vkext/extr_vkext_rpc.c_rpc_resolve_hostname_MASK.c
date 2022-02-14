
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {scalar_t__ h_addrtype; int h_length; scalar_t__ h_addr; int h_addr_list; } ;


 scalar_t__ VAR_0 ;
 struct hostent* FUNC_0 (char const*) ;
 int FUNC_1 (int) ;

unsigned FUNC_2 (const char *VAR_1) {
  struct hostent *VAR_2;
  if (!(VAR_2 = FUNC_0 (VAR_1)) || VAR_2->h_addrtype != VAR_0 || VAR_2->h_length != 4 || !VAR_2->h_addr_list || !VAR_2->h_addr) {
    return 0;
  }
  return FUNC_1 (*((int *) VAR_2->h_addr));
}

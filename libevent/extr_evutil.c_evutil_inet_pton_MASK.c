
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int s_addr; } ;
struct in6_addr {int* s6_addr; } ;
typedef int ev_uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int,char const*,void*) ;
 int FUNC_4 (int*,int*,int) ;
 int FUNC_5 (int*,int ,int) ;
 int FUNC_6 (char const*,char*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,char*) ;
 char* FUNC_7 (char const*,char) ;
 int FUNC_8 (char const*) ;
 long FUNC_9 (char const*,char**,int) ;

int
FUNC_10(int VAR_2, const char *VAR_3, void *VAR_4)
{



 if (VAR_2 == VAR_0) {
  unsigned VAR_5,VAR_6,VAR_7,VAR_8;
  char VAR_9;
  struct in_addr *VAR_10 = VAR_4;
  if (FUNC_6(VAR_3, "%u.%u.%u.%u%c", &VAR_5,&VAR_6,&VAR_7,&VAR_8,&VAR_9) != 4)
   return 0;
  if (VAR_5 > 255) return 0;
  if (VAR_6 > 255) return 0;
  if (VAR_7 > 255) return 0;
  if (VAR_8 > 255) return 0;
  VAR_10->s_addr = FUNC_2((VAR_5<<24) | (VAR_6<<16) | (VAR_7<<8) | VAR_8);
  return 1;
 } else {
  return -1;
 }

}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int s_addr; } ;
struct in6_addr {int* s6_addr; } ;
typedef scalar_t__ ev_uint8_t ;
typedef int ev_uint32_t ;
typedef int ev_uint16_t ;
typedef int buf ;
typedef scalar_t__ a ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char*,unsigned int,...) ;
 char const* FUNC_1 (int,void const*,char*,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,size_t) ;
 size_t FUNC_4 (char*) ;

const char *
FUNC_5(int VAR_2, const void *VAR_3, char *VAR_4, size_t VAR_5)
{



 if (VAR_2 == VAR_0) {
  const struct in_addr *VAR_6 = VAR_3;
  const ev_uint32_t VAR_7 = FUNC_2(VAR_6->s_addr);
  int VAR_8;
  VAR_8 = FUNC_0(VAR_4, VAR_5, "%d.%d.%d.%d",
      (int)(ev_uint8_t)((VAR_7>>24)&0xff),
      (int)(ev_uint8_t)((VAR_7>>16)&0xff),
      (int)(ev_uint8_t)((VAR_7>>8 )&0xff),
      (int)(ev_uint8_t)((VAR_7 )&0xff));
  if (VAR_8<0||(size_t)VAR_8>=VAR_5)
   return ((void*)0);
  else
   return VAR_4;
 } else {
  return ((void*)0);
 }

}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {int* s6_addr; } ;
struct TYPE_4__ {int s_addr; } ;
struct TYPE_6__ {TYPE_2__ v6; TYPE_1__ v4; } ;
struct cidr {int family; int prefix; TYPE_3__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cidr* FUNC_0 (char const*) ;
 struct cidr* FUNC_1 (char const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,char const*,char*,char*) ;
 int FUNC_4 (int) ;
 struct cidr* FUNC_5 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (char const*,char) ;
 int FUNC_7 (char const*,char**,int ) ;

__attribute__((used)) static struct cidr * FUNC_8(const char *VAR_3, const char *VAR_4, int VAR_5)
{
 char *VAR_6;
 struct cidr *VAR_7;

 uint8_t VAR_8;
 uint32_t VAR_9 = FUNC_7(VAR_4, &VAR_6, 0);

 if ((VAR_6 > VAR_4) && (*VAR_6 == 0))
 {
  VAR_7 = FUNC_5(sizeof(struct cidr));

  if (!VAR_7)
   return ((void*)0);

  if (VAR_5 == VAR_0)
  {
   VAR_7->family = VAR_0;
   VAR_7->prefix = VAR_9;
   VAR_7->addr.v4.s_addr = FUNC_4(VAR_9);
  }
  else
  {
   VAR_7->family = VAR_1;
   VAR_7->prefix = VAR_9;

   for (VAR_8 = 0; VAR_8 <= 15; VAR_8++)
   {
    VAR_7->addr.v6.s6_addr[15-VAR_8] = VAR_9 % 256;
    VAR_9 >>= 8;
   }
  }

  return VAR_7;
 }

 if (FUNC_6(VAR_4, ':'))
  VAR_7 = FUNC_1(VAR_4);
 else
  VAR_7 = FUNC_0(VAR_4);

 if (!VAR_7)
  return ((void*)0);

 if (VAR_7->family != VAR_5)
 {
  FUNC_3(VAR_2, "attempt to '%s' %s with %s address\n",
    VAR_3,
    (VAR_5 == VAR_0) ? "ipv4" : "ipv6",
    (VAR_5 != VAR_0) ? "ipv4" : "ipv6");
  FUNC_2(4);
 }

 return VAR_7;
}

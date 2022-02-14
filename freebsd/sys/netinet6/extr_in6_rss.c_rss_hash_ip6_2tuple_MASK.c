
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef size_t u_int ;
struct in6_addr {int dummy; } ;


 int FUNC_0 (struct in6_addr const*,int *,int) ;
 int FUNC_1 (size_t,int *) ;

uint32_t
FUNC_2(const struct in6_addr *VAR_0, const struct in6_addr *VAR_1)
{
 uint8_t VAR_2[sizeof(*VAR_0) + sizeof(*VAR_1)];
 u_int VAR_3;

 VAR_3 = 0;
 FUNC_0(VAR_0, &VAR_2[VAR_3], sizeof(*VAR_0));
 VAR_3 += sizeof(*VAR_0);
 FUNC_0(VAR_1, &VAR_2[VAR_3], sizeof(*VAR_1));
 VAR_3 += sizeof(*VAR_1);
 return (FUNC_1(VAR_3, VAR_2));
}

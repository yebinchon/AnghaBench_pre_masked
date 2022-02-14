
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct in6_addr {int dummy; } ;
typedef struct in6_addr const u_short ;
typedef size_t u_int ;
typedef int srcport ;
typedef int dstport ;


 int FUNC_0 (struct in6_addr const*,int *,int) ;
 int FUNC_1 (size_t,int *) ;

uint32_t
FUNC_2(const struct in6_addr *VAR_0, u_short VAR_1,
    const struct in6_addr *VAR_2, u_short VAR_3)
{
 uint8_t VAR_4[sizeof(*VAR_0) + sizeof(*VAR_2) + sizeof(VAR_1) +
     sizeof(VAR_3)];
 u_int VAR_5;

 VAR_5 = 0;
 FUNC_0(VAR_0, &VAR_4[VAR_5], sizeof(*VAR_0));
 VAR_5 += sizeof(*VAR_0);
 FUNC_0(VAR_2, &VAR_4[VAR_5], sizeof(*VAR_2));
 VAR_5 += sizeof(*VAR_2);
 FUNC_0(&VAR_1, &VAR_4[VAR_5], sizeof(VAR_1));
 VAR_5 += sizeof(VAR_1);
 FUNC_0(&VAR_3, &VAR_4[VAR_5], sizeof(VAR_3));
 VAR_5 += sizeof(VAR_3);
 return (FUNC_1(VAR_5, VAR_4));
}

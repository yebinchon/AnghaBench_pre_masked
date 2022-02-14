
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
struct mbuf {int dummy; } ;
struct ip6_hbh {int ip6h_len; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct mbuf*,int *,int,int *,int *) ;
 int VAR_1 ;
 struct mbuf* FUNC_2 (struct mbuf*,int) ;
 scalar_t__ FUNC_3 (struct mbuf*,int ) ;

__attribute__((used)) static int
FUNC_4(u_int32_t *VAR_2, u_int32_t *VAR_3,
    struct mbuf **VAR_4, int *VAR_5)
{
 struct mbuf *VAR_6 = *VAR_4;
 int VAR_7 = *VAR_5, VAR_8;
 struct ip6_hbh *VAR_9;


 VAR_6 = FUNC_2(VAR_6, VAR_7 + sizeof(*VAR_9));
 if (VAR_6 == ((void*)0)) {
  FUNC_0(VAR_1);
  *VAR_4 = ((void*)0);
  return (-1);
 }
 VAR_9 = (struct ip6_hbh *)(FUNC_3(VAR_6, VAR_0) + VAR_7);
 VAR_8 = (VAR_9->ip6h_len + 1) << 3;

 VAR_6 = FUNC_2(VAR_6, VAR_7 + VAR_8);
 if (VAR_6 == ((void*)0)) {
  FUNC_0(VAR_1);
  *VAR_4 = ((void*)0);
  return (-1);
 }
 VAR_9 = (struct ip6_hbh *)(FUNC_3(VAR_6, VAR_0) + VAR_7);
 VAR_7 += VAR_8;
 VAR_8 -= sizeof(struct ip6_hbh);
 if (FUNC_1(VAR_6, (u_int8_t *)VAR_9 + sizeof(struct ip6_hbh),
    VAR_8, VAR_3, VAR_2) < 0) {
  *VAR_4 = ((void*)0);
  return (-1);
 }

 *VAR_5 = VAR_7;
 *VAR_4 = VAR_6;
 return (0);
}

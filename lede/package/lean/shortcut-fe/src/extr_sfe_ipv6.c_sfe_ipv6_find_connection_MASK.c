
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sfe_ipv6_connection {scalar_t__ src_port; scalar_t__ dest_port; scalar_t__ protocol; struct sfe_ipv6_connection* next; int dest_ip; int src_ip; } ;
struct sfe_ipv6_addr {int dummy; } ;
struct sfe_ipv6 {struct sfe_ipv6_connection** conn_hash; } ;
typedef scalar_t__ __be16 ;


 scalar_t__ FUNC_0 (int ,struct sfe_ipv6_addr*) ;
 unsigned int FUNC_1 (scalar_t__,struct sfe_ipv6_addr*,scalar_t__,struct sfe_ipv6_addr*,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline struct sfe_ipv6_connection *FUNC_3(struct sfe_ipv6 *VAR_0, u32 VAR_1,
           struct sfe_ipv6_addr *VAR_2, __be16 VAR_3,
           struct sfe_ipv6_addr *VAR_4, __be16 VAR_5)
{
 struct sfe_ipv6_connection *VAR_6;
 unsigned int VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 VAR_6 = VAR_0->conn_hash[VAR_7];




 if (FUNC_2(!VAR_6)) {
  return ((void*)0);
 }




 if ((VAR_6->src_port == VAR_3)
     && (VAR_6->dest_port == VAR_5)
     && (FUNC_0(VAR_6->src_ip, VAR_2))
     && (FUNC_0(VAR_6->dest_ip, VAR_4))
     && (VAR_6->protocol == VAR_1)) {
  return VAR_6;
 }




 do {
  VAR_6 = VAR_6->next;
 } while (VAR_6 && (VAR_6->src_port != VAR_3
   || VAR_6->dest_port != VAR_5
   || !FUNC_0(VAR_6->src_ip, VAR_2)
   || !FUNC_0(VAR_6->dest_ip, VAR_4)
   || VAR_6->protocol != VAR_1));





 return VAR_6;
}

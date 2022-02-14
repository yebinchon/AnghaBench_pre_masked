
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sfe_ipv4_connection {scalar_t__ src_port; scalar_t__ dest_port; scalar_t__ src_ip; scalar_t__ dest_ip; scalar_t__ protocol; struct sfe_ipv4_connection* next; } ;
struct sfe_ipv4 {struct sfe_ipv4_connection** conn_hash; } ;
typedef scalar_t__ __be32 ;
typedef scalar_t__ __be16 ;


 unsigned int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline struct sfe_ipv4_connection *FUNC_2(struct sfe_ipv4 *VAR_0, u32 VAR_1,
             __be32 VAR_2, __be16 VAR_3,
             __be32 VAR_4, __be16 VAR_5)
{
 struct sfe_ipv4_connection *VAR_6;
 unsigned int VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 VAR_6 = VAR_0->conn_hash[VAR_7];




 if (FUNC_1(!VAR_6)) {
  return ((void*)0);
 }




 if ((VAR_6->src_port == VAR_3)
     && (VAR_6->dest_port == VAR_5)
     && (VAR_6->src_ip == VAR_2)
     && (VAR_6->dest_ip == VAR_4)
     && (VAR_6->protocol == VAR_1)) {
  return VAR_6;
 }




 do {
  VAR_6 = VAR_6->next;
 } while (VAR_6 && (VAR_6->src_port != VAR_3
   || VAR_6->dest_port != VAR_5
   || VAR_6->src_ip != VAR_2
   || VAR_6->dest_ip != VAR_4
   || VAR_6->protocol != VAR_1));





 return VAR_6;
}

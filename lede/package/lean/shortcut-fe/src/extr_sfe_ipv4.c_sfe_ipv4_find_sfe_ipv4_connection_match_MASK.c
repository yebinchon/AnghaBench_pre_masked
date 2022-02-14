
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sfe_ipv4_connection_match {scalar_t__ match_src_port; scalar_t__ match_dest_port; scalar_t__ match_src_ip; scalar_t__ match_dest_ip; scalar_t__ match_protocol; struct sfe_ipv4_connection_match* prev; struct sfe_ipv4_connection_match* next; struct net_device* match_dev; } ;
struct sfe_ipv4 {int connection_match_hash_reorders; struct sfe_ipv4_connection_match** conn_match_hash; int connection_match_hash_hits; } ;
struct net_device {int dummy; } ;
typedef scalar_t__ __be32 ;
typedef scalar_t__ __be16 ;


 unsigned int FUNC_0 (struct net_device*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static struct sfe_ipv4_connection_match *
FUNC_2(struct sfe_ipv4 *VAR_0, struct net_device *VAR_1, u8 VAR_2,
     __be32 VAR_3, __be16 VAR_4,
     __be32 VAR_5, __be16 VAR_6)
{
 struct sfe_ipv4_connection_match *VAR_7;
 struct sfe_ipv4_connection_match *VAR_8;
 unsigned int VAR_9;

 VAR_9 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 VAR_7 = VAR_0->conn_match_hash[VAR_9];




 if (FUNC_1(!VAR_7)) {
  return ((void*)0);
 }




 if ((VAR_7->match_src_port == VAR_4)
     && (VAR_7->match_dest_port == VAR_6)
     && (VAR_7->match_src_ip == VAR_3)
     && (VAR_7->match_dest_ip == VAR_5)
     && (VAR_7->match_protocol == VAR_2)
     && (VAR_7->match_dev == VAR_1)) {
  VAR_0->connection_match_hash_hits++;
  return VAR_7;
 }






 VAR_8 = VAR_7;
 do {
  VAR_7 = VAR_7->next;
 } while (VAR_7 && (VAR_7->match_src_port != VAR_4
   || VAR_7->match_dest_port != VAR_6
   || VAR_7->match_src_ip != VAR_3
   || VAR_7->match_dest_ip != VAR_5
   || VAR_7->match_protocol != VAR_2
   || VAR_7->match_dev != VAR_1));




 if (FUNC_1(!VAR_7)) {
  return ((void*)0);
 }




 if (VAR_7->next) {
  VAR_7->next->prev = VAR_7->prev;
 }
 VAR_7->prev->next = VAR_7->next;
 VAR_7->prev = ((void*)0);
 VAR_7->next = VAR_8;
 VAR_8->prev = VAR_7;
 VAR_0->conn_match_hash[VAR_9] = VAR_7;
 VAR_0->connection_match_hash_reorders++;

 return VAR_7;
}

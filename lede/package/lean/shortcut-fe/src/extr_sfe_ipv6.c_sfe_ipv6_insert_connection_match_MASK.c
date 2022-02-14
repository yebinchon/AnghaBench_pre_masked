
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfe_ipv6_connection_match {struct sfe_ipv6_connection_match* next; struct sfe_ipv6_connection_match* prev; int match_dest_port; int match_dest_ip; int match_src_port; int match_src_ip; int match_protocol; int match_dev; } ;
struct sfe_ipv6 {struct sfe_ipv6_connection_match** conn_match_hash; } ;


 unsigned int FUNC_0 (int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct sfe_ipv6 *VAR_0,
          struct sfe_ipv6_connection_match *VAR_1)
{
 struct sfe_ipv6_connection_match **VAR_2;
 struct sfe_ipv6_connection_match *VAR_3;
 unsigned int VAR_4
  = FUNC_0(VAR_1->match_dev, VAR_1->match_protocol,
           VAR_1->match_src_ip, VAR_1->match_src_port,
           VAR_1->match_dest_ip, VAR_1->match_dest_port);

 VAR_2 = &VAR_0->conn_match_hash[VAR_4];
 VAR_3 = *VAR_2;
 VAR_1->prev = ((void*)0);
 if (VAR_3) {
  VAR_3->prev = VAR_1;
 }

 VAR_1->next = VAR_3;
 *VAR_2 = VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sfe_ipv4_debug_xml_write_state {int state; } ;
struct sfe_ipv4 {unsigned int num_connections; int lock; int connection_match_hash_reorders64; int connection_match_hash_hits64; int connection_flushes64; int connection_destroy_misses64; int connection_destroy_requests64; int connection_create_collisions64; int connection_create_requests64; int packets_not_forwarded64; int packets_forwarded64; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (struct sfe_ipv4*) ;
 int FUNC_2 (char*,int ,char*,unsigned int,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static bool FUNC_5(struct sfe_ipv4 *VAR_1, char *VAR_2, char *VAR_3, size_t *VAR_4,
       int *VAR_5, struct sfe_ipv4_debug_xml_write_state *VAR_6)
{
 int VAR_7;
 unsigned int VAR_8;
 u64 VAR_9;
 u64 VAR_10;
 u64 VAR_11;
 u64 VAR_12;
 u64 VAR_13;
 u64 VAR_14;
 u64 VAR_15;
 u64 VAR_16;
 u64 VAR_17;

 FUNC_3(&VAR_1->lock);
 FUNC_1(VAR_1);

 VAR_8 = VAR_1->num_connections;
 VAR_9 = VAR_1->packets_forwarded64;
 VAR_10 = VAR_1->packets_not_forwarded64;
 VAR_11 = VAR_1->connection_create_requests64;
 VAR_12 = VAR_1->connection_create_collisions64;
 VAR_13 = VAR_1->connection_destroy_requests64;
 VAR_14 = VAR_1->connection_destroy_misses64;
 VAR_15 = VAR_1->connection_flushes64;
 VAR_16 = VAR_1->connection_match_hash_hits64;
 VAR_17 = VAR_1->connection_match_hash_reorders64;
 FUNC_4(&VAR_1->lock);

 VAR_7 = FUNC_2(VAR_3, VAR_0, "\t<stats "
         "num_connections=\"%u\" "
         "pkts_forwarded=\"%llu\" pkts_not_forwarded=\"%llu\" "
         "create_requests=\"%llu\" create_collisions=\"%llu\" "
         "destroy_requests=\"%llu\" destroy_misses=\"%llu\" "
         "flushes=\"%llu\" "
         "hash_hits=\"%llu\" hash_reorders=\"%llu\" />\n",
         VAR_8,
         VAR_9,
         VAR_10,
         VAR_11,
         VAR_12,
         VAR_13,
         VAR_14,
         VAR_15,
         VAR_16,
         VAR_17);
 if (FUNC_0(VAR_2 + *VAR_5, VAR_3, VAR_0)) {
  return 0;
 }

 *VAR_4 -= VAR_7;
 *VAR_5 += VAR_7;

 VAR_6->state++;
 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfe_ipv4 {scalar_t__* exception_events; int * exception_events64; scalar_t__ packets_not_forwarded; int packets_not_forwarded64; scalar_t__ packets_forwarded; int packets_forwarded64; scalar_t__ connection_flushes; int connection_flushes64; scalar_t__ connection_match_hash_reorders; int connection_match_hash_reorders64; scalar_t__ connection_match_hash_hits; int connection_match_hash_hits64; scalar_t__ connection_destroy_misses; int connection_destroy_misses64; scalar_t__ connection_destroy_requests; int connection_destroy_requests64; scalar_t__ connection_create_collisions; int connection_create_collisions64; scalar_t__ connection_create_requests; int connection_create_requests64; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct sfe_ipv4 *VAR_1)
{
 int VAR_2;

 VAR_1->connection_create_requests64 += VAR_1->connection_create_requests;
 VAR_1->connection_create_requests = 0;
 VAR_1->connection_create_collisions64 += VAR_1->connection_create_collisions;
 VAR_1->connection_create_collisions = 0;
 VAR_1->connection_destroy_requests64 += VAR_1->connection_destroy_requests;
 VAR_1->connection_destroy_requests = 0;
 VAR_1->connection_destroy_misses64 += VAR_1->connection_destroy_misses;
 VAR_1->connection_destroy_misses = 0;
 VAR_1->connection_match_hash_hits64 += VAR_1->connection_match_hash_hits;
 VAR_1->connection_match_hash_hits = 0;
 VAR_1->connection_match_hash_reorders64 += VAR_1->connection_match_hash_reorders;
 VAR_1->connection_match_hash_reorders = 0;
 VAR_1->connection_flushes64 += VAR_1->connection_flushes;
 VAR_1->connection_flushes = 0;
 VAR_1->packets_forwarded64 += VAR_1->packets_forwarded;
 VAR_1->packets_forwarded = 0;
 VAR_1->packets_not_forwarded64 += VAR_1->packets_not_forwarded;
 VAR_1->packets_not_forwarded = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_1->exception_events64[VAR_2] += VAR_1->exception_events[VAR_2];
  VAR_1->exception_events[VAR_2] = 0;
 }
}

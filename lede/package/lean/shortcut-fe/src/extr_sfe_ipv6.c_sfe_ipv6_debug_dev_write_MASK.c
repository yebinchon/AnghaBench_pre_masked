
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfe_ipv6 {int lock; scalar_t__ connection_match_hash_reorders64; scalar_t__ connection_match_hash_hits64; scalar_t__ connection_flushes64; scalar_t__ connection_destroy_misses64; scalar_t__ connection_destroy_requests64; scalar_t__ connection_create_collisions64; scalar_t__ connection_create_requests64; scalar_t__ packets_not_forwarded64; scalar_t__ packets_forwarded64; } ;
struct file {int dummy; } ;
typedef size_t ssize_t ;
typedef int loff_t ;


 struct sfe_ipv6 VAR_0 ;
 int FUNC_0 (struct sfe_ipv6*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static ssize_t FUNC_3(struct file *VAR_1, const char *VAR_2, size_t VAR_3, loff_t *VAR_4)
{
 struct sfe_ipv6 *VAR_5 = &VAR_0;

 FUNC_1(&VAR_5->lock);
 FUNC_0(VAR_5);

 VAR_5->packets_forwarded64 = 0;
 VAR_5->packets_not_forwarded64 = 0;
 VAR_5->connection_create_requests64 = 0;
 VAR_5->connection_create_collisions64 = 0;
 VAR_5->connection_destroy_requests64 = 0;
 VAR_5->connection_destroy_misses64 = 0;
 VAR_5->connection_flushes64 = 0;
 VAR_5->connection_match_hash_hits64 = 0;
 VAR_5->connection_match_hash_reorders64 = 0;
 FUNC_2(&VAR_5->lock);

 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ block_size; scalar_t__ bucket_size; scalar_t__ nr_in_set; } ;
struct cache_set {TYPE_2__ sb; } ;
struct TYPE_3__ {scalar_t__ block_size; scalar_t__ bucket_size; scalar_t__ nr_in_set; } ;
struct cache {TYPE_1__ sb; } ;



__attribute__((used)) static bool FUNC_0(struct cache *VAR_0, struct cache_set *VAR_1)
{
 return VAR_0->sb.block_size == VAR_1->sb.block_size &&
  VAR_0->sb.bucket_size == VAR_1->sb.bucket_size &&
  VAR_0->sb.nr_in_set == VAR_1->sb.nr_in_set;
}

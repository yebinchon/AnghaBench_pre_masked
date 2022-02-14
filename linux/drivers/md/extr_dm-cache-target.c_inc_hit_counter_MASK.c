
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int write_hit; int read_hit; } ;
struct cache {TYPE_1__ stats; } ;
struct bio {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct bio*) ;

__attribute__((used)) static void FUNC_2(struct cache *VAR_1, struct bio *VAR_2)
{
 FUNC_0(FUNC_1(VAR_2) == VAR_0 ?
     &VAR_1->stats.read_hit : &VAR_1->stats.write_hit);
}

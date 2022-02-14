
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cache {TYPE_1__* set; } ;
struct bio {int bi_status; struct cache* bi_private; } ;
struct TYPE_2__ {int sb_write; } ;


 int FUNC_0 (struct cache*,int ,int ,char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct bio *VAR_0)
{
 struct cache *VAR_1 = VAR_0->bi_private;


 FUNC_0(VAR_1, VAR_0->bi_status, 0,
       "writing superblock");
 FUNC_1(&VAR_1->set->sb_write);
}

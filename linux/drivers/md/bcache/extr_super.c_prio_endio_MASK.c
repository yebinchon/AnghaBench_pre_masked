
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache {int prio; int set; } ;
struct bio {int bi_status; struct cache* bi_private; } ;


 int FUNC_0 (struct bio*,int ) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct bio *VAR_0)
{
 struct cache *VAR_1 = VAR_0->bi_private;

 FUNC_1(VAR_0->bi_status, VAR_1->set, "accessing priorities");
 FUNC_0(VAR_0, VAR_1->set);
 FUNC_2(&VAR_1->prio);
}

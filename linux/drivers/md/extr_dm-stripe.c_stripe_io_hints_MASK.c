
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_c {unsigned int chunk_size; unsigned int stripes; } ;
struct queue_limits {int dummy; } ;
struct dm_target {struct stripe_c* private; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct queue_limits*,unsigned int) ;
 int FUNC_1 (struct queue_limits*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct dm_target *VAR_1,
       struct queue_limits *VAR_2)
{
 struct stripe_c *VAR_3 = VAR_1->private;
 unsigned VAR_4 = VAR_3->chunk_size << VAR_0;

 FUNC_0(VAR_2, VAR_4);
 FUNC_1(VAR_2, VAR_4 * VAR_3->stripes);
}

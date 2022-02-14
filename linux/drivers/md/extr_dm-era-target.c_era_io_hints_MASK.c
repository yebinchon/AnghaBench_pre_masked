
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct queue_limits {int io_opt; } ;
struct era {int sectors_per_block; } ;
struct dm_target {struct era* private; } ;


 int VAR_0 ;
 int FUNC_0 (struct queue_limits*,int ) ;
 int FUNC_1 (struct queue_limits*,int) ;
 scalar_t__ FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct dm_target *VAR_1, struct queue_limits *VAR_2)
{
 struct era *VAR_3 = VAR_1->private;
 uint64_t VAR_4 = VAR_2->io_opt >> VAR_0;





 if (VAR_4 < VAR_3->sectors_per_block ||
     FUNC_2(VAR_4, VAR_3->sectors_per_block)) {
  FUNC_0(VAR_2, 0);
  FUNC_1(VAR_2, VAR_3->sectors_per_block << VAR_0);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct queue_limits {int io_opt; } ;
struct dm_target {struct clone* private; } ;
struct clone {int region_size; } ;


 int VAR_0 ;
 int FUNC_0 (struct queue_limits*,int) ;
 int FUNC_1 (struct queue_limits*,int) ;
 int FUNC_2 (struct clone*) ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (struct clone*,struct queue_limits*) ;

__attribute__((used)) static void FUNC_5(struct dm_target *VAR_1, struct queue_limits *VAR_2)
{
 struct clone *VAR_3 = VAR_1->private;
 u64 VAR_4 = VAR_2->io_opt >> VAR_0;





 if (VAR_4 < VAR_3->region_size ||
     FUNC_3(VAR_4, VAR_3->region_size)) {
  FUNC_0(VAR_2, VAR_3->region_size << VAR_0);
  FUNC_1(VAR_2, VAR_3->region_size << VAR_0);
 }

 FUNC_2(VAR_3);
 FUNC_4(VAR_3, VAR_2);
}

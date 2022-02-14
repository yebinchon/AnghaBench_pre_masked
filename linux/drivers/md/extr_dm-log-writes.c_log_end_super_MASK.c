
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct log_writes_c {int super_done; } ;
struct bio {struct log_writes_c* bi_private; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct bio*) ;

__attribute__((used)) static void FUNC_2(struct bio *VAR_0)
{
 struct log_writes_c *VAR_1 = VAR_0->bi_private;

 FUNC_0(&VAR_1->super_done);
 FUNC_1(VAR_0);
}

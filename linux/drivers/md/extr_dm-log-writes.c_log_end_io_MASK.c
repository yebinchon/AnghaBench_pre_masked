
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct log_writes_c {int logging_enabled; int blocks_lock; } ;
struct bio {scalar_t__ bi_status; struct log_writes_c* bi_private; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct log_writes_c*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct bio *VAR_0)
{
 struct log_writes_c *VAR_1 = VAR_0->bi_private;

 if (VAR_0->bi_status) {
  unsigned long VAR_2;

  FUNC_0("Error writing log block, error=%d", VAR_0->bi_status);
  FUNC_4(&VAR_1->blocks_lock, VAR_2);
  VAR_1->logging_enabled = 0;
  FUNC_5(&VAR_1->blocks_lock, VAR_2);
 }

 FUNC_1(VAR_0);
 FUNC_3(VAR_1);
 FUNC_2(VAR_0);
}

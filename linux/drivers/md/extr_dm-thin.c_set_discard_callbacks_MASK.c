
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pool_c {int dummy; } ;
struct pool {int process_prepared_discard; int process_discard_cell; int process_prepared_discard_pt2; TYPE_1__* ti; } ;
struct TYPE_2__ {struct pool_c* private; } ;


 scalar_t__ FUNC_0 (struct pool_c*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_1(struct pool *VAR_5)
{
 struct pool_c *VAR_6 = VAR_5->ti->private;

 if (FUNC_0(VAR_6)) {
  VAR_5->process_discard_cell = VAR_1;
  VAR_5->process_prepared_discard = VAR_3;
  VAR_5->process_prepared_discard_pt2 = VAR_4;
 } else {
  VAR_5->process_discard_cell = VAR_0;
  VAR_5->process_prepared_discard = VAR_2;
 }
}

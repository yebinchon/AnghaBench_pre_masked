
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct speed_down_verdict_arg {scalar_t__ since; int * nr_errors; int xfer_ok; } ;
struct ata_ering_entry {int eflags; scalar_t__ timestamp; int err_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct ata_ering_entry *VAR_1, void *VAR_2)
{
 struct speed_down_verdict_arg *VAR_3 = VAR_2;
 int VAR_4;

 if ((VAR_1->eflags & VAR_0) || (VAR_1->timestamp < VAR_3->since))
  return -1;

 VAR_4 = FUNC_0(VAR_1->eflags, VAR_1->err_mask,
          &VAR_3->xfer_ok);
 VAR_3->nr_errors[VAR_4]++;

 return 0;
}

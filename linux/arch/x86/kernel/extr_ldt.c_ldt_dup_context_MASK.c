
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; struct ldt_struct* ldt; } ;
struct mm_struct {TYPE_1__ context; } ;
struct ldt_struct {int nr_entries; int entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ldt_struct* FUNC_0 (int) ;
 int FUNC_1 (struct ldt_struct*) ;
 int FUNC_2 (struct mm_struct*) ;
 int FUNC_3 (struct ldt_struct*) ;
 int FUNC_4 (struct mm_struct*,struct ldt_struct*,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct mm_struct *VAR_2, struct mm_struct *VAR_3)
{
 struct ldt_struct *VAR_4;
 int VAR_5 = 0;

 if (!VAR_2)
  return 0;

 FUNC_6(&VAR_2->context.lock);
 if (!VAR_2->context.ldt)
  goto out_unlock;

 VAR_4 = FUNC_0(VAR_2->context.ldt->nr_entries);
 if (!VAR_4) {
  VAR_5 = -VAR_0;
  goto out_unlock;
 }

 FUNC_5(VAR_4->entries, VAR_2->context.ldt->entries,
        VAR_4->nr_entries * VAR_1);
 FUNC_1(VAR_4);

 VAR_5 = FUNC_4(VAR_3, VAR_4, 0);
 if (VAR_5) {
  FUNC_2(VAR_3);
  FUNC_3(VAR_4);
  goto out_unlock;
 }
 VAR_3->context.ldt = VAR_4;

out_unlock:
 FUNC_7(&VAR_2->context.lock);
 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct dm_integrity_c {int commit_work; int commit_wq; } ;


 int VAR_0 ;
 int FUNC_0 (struct dm_integrity_c*) ;
 struct dm_integrity_c* FUNC_1 (int ,struct timer_list*,int ) ;
 struct dm_integrity_c* VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_2)
{
 struct dm_integrity_c *VAR_3 = FUNC_1(VAR_3, VAR_2, VAR_0);

 if (FUNC_2(!FUNC_0(VAR_3)))
  FUNC_3(VAR_3->commit_wq, &VAR_3->commit_work);
}

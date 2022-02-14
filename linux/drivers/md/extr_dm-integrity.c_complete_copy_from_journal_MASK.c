
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct journal_io {int range; struct journal_completion* comp; } ;
struct journal_completion {struct dm_integrity_c* ic; } ;
struct dm_integrity_c {int journal_io_mempool; } ;


 int VAR_0 ;
 int FUNC_0 (struct journal_completion*) ;
 int FUNC_1 (struct dm_integrity_c*,char*,int ) ;
 int FUNC_2 (struct journal_io*,int *) ;
 int FUNC_3 (struct dm_integrity_c*,int *) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_1, void *VAR_2)
{
 struct journal_io *VAR_3 = VAR_2;
 struct journal_completion *VAR_4 = VAR_3->comp;
 struct dm_integrity_c *VAR_5 = VAR_4->ic;
 FUNC_3(VAR_5, &VAR_3->range);
 FUNC_2(VAR_3, &VAR_5->journal_io_mempool);
 if (FUNC_4(VAR_1 != 0))
  FUNC_1(VAR_5, "copying from journal", -VAR_0);
 FUNC_0(VAR_4);
}

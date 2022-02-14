
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_map_entries_tailq {int dummy; } ;
struct dmar_domain {int unload_entries; } ;


 int FUNC_0 (struct dmar_domain*) ;
 int FUNC_1 (struct dmar_domain*) ;
 scalar_t__ FUNC_2 (struct dmar_map_entries_tailq*) ;
 int FUNC_3 (struct dmar_map_entries_tailq*) ;
 int FUNC_4 (int *,struct dmar_map_entries_tailq*,int ,int ) ;
 int VAR_0 ;
 int FUNC_5 (struct dmar_domain*,struct dmar_map_entries_tailq*,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_6(void *VAR_2, int VAR_3)
{
 struct dmar_domain *VAR_4;
 struct dmar_map_entries_tailq VAR_5;

 VAR_4 = VAR_2;
 FUNC_3(&VAR_5);

 for (;;) {
  FUNC_0(VAR_4);
  FUNC_4(&VAR_4->unload_entries, &VAR_5, VAR_1,
      VAR_0);
  FUNC_1(VAR_4);
  if (FUNC_2(&VAR_5))
   break;
  FUNC_5(VAR_4, &VAR_5, 1);
 }
}

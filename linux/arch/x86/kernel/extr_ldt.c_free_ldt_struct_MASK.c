
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ldt_struct {int nr_entries; scalar_t__ entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct ldt_struct*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct ldt_struct *VAR_2)
{
 if (FUNC_2(!VAR_2))
  return;

 FUNC_3(VAR_2->entries, VAR_2->nr_entries);
 if (VAR_2->nr_entries * VAR_0 > VAR_1)
  FUNC_4(VAR_2->entries);
 else
  FUNC_0((unsigned long)VAR_2->entries);
 FUNC_1(VAR_2);
}

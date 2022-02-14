
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tp_entry {int dummy; } ;
struct bridge_if {struct tp_entry* f_tpa; } ;


 int FUNC_0 (int *,struct tp_entry*,int ) ;
 struct tp_entry* FUNC_1 (struct tp_entry*) ;
 int FUNC_2 (struct tp_entry*) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_3(struct tp_entry *VAR_2, struct bridge_if *VAR_3)
{
 if (VAR_3->f_tpa == VAR_2)
  VAR_3->f_tpa = FUNC_1(VAR_2);

 FUNC_0(&VAR_1, VAR_2, VAR_0);
 FUNC_2(VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tp_entry {scalar_t__ sysindex; } ;
struct tp_entries {int dummy; } ;
struct bridge_if {scalar_t__ sysindex; struct tp_entry* f_tpa; } ;


 struct tp_entry* FUNC_0 (struct tp_entry*,int ) ;
 int FUNC_1 (struct tp_entries*,struct tp_entry*,int ) ;
 int FUNC_2 (struct tp_entry*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(struct tp_entries *VAR_1,
 struct bridge_if *VAR_2)
{
 struct tp_entry *VAR_3;

 while (VAR_2->f_tpa != ((void*)0) && VAR_2->sysindex == VAR_2->f_tpa->sysindex) {
  VAR_3 = FUNC_0(VAR_2->f_tpa, VAR_0);
  FUNC_1(VAR_1, VAR_2->f_tpa, VAR_0);
  FUNC_2(VAR_2->f_tpa);
  VAR_2->f_tpa = VAR_3;
 }
}

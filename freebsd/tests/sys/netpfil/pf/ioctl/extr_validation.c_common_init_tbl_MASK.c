
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfr_table {scalar_t__ pfrt_fback; scalar_t__ pfrt_flags; int pfrt_name; int pfrt_anchor; } ;


 int FUNC_0 (struct pfr_table*,int) ;
 int FUNC_1 (int ,char*) ;

void
FUNC_2(struct pfr_table *VAR_0)
{
 FUNC_0(VAR_0, sizeof(struct pfr_table));
 FUNC_1(VAR_0->pfrt_anchor, "anchor");
 FUNC_1(VAR_0->pfrt_name, "name");
 VAR_0->pfrt_flags = 0;
 VAR_0->pfrt_fback = 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sort_list_item {int str; int ka; } ;
struct TYPE_2__ {scalar_t__ complex_sort; int sflag; } ;


 int FUNC_0 (int ,int ,char*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int *,size_t) ;
 int FUNC_2 (char*,int) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;

int
FUNC_4(struct sort_list_item **VAR_3, struct sort_list_item **VAR_4,
    size_t VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(&((*VAR_3)->ka), &((*VAR_4)->ka), VAR_5);

 if (VAR_0) {
  if (VAR_5)
   FUNC_2("; offset=%d", (int) VAR_5);
  FUNC_0(VAR_2, ((*VAR_3)->str), "; s1=<", ">");
  FUNC_0(VAR_2, ((*VAR_4)->str), ", s2=<", ">");
  FUNC_2("; cmp1=%d\n", VAR_6);
 }

 if (VAR_6)
  return (VAR_6);

 if (!(VAR_1.sflag) && VAR_1.complex_sort) {
  VAR_6 = FUNC_3(((*VAR_3)->str), ((*VAR_4)->str));
  if (VAR_0)
   FUNC_2("; cmp2=%d\n", VAR_6);
 }

 return (VAR_6);
}

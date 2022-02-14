
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sort_list_item {struct bwstring* str; int ka; } ;
struct keys_array {int dummy; } ;
struct bwstring {int dummy; } ;
struct TYPE_2__ {scalar_t__ complex_sort; int sflag; } ;


 int FUNC_0 (int ,struct bwstring*,char*,char*) ;
 int FUNC_1 (struct bwstring*,struct keys_array*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct keys_array*,int *,int ) ;
 struct keys_array* FUNC_3 () ;
 int FUNC_4 (struct bwstring*,struct keys_array*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct keys_array*) ;
 int FUNC_7 (struct sort_list_item*) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (struct bwstring*,struct bwstring*) ;

int
FUNC_9(struct bwstring *VAR_3, struct sort_list_item **VAR_4)
{
 struct keys_array *VAR_5;
 int VAR_6 = 0;

 VAR_5 = FUNC_3();

 FUNC_4(VAR_3, VAR_5);

 FUNC_7(*VAR_4);

 if (VAR_0) {
  FUNC_0(VAR_2, VAR_3, "; s1=<", ">");
  FUNC_0(VAR_2, (*VAR_4)->str, ", s2=<", ">");
 }

 VAR_6 = FUNC_2(VAR_5, &((*VAR_4)->ka), 0);

 if (VAR_0)
  FUNC_5("; cmp1=%d", VAR_6);

 FUNC_1(VAR_3, VAR_5);
 FUNC_6(VAR_5);

 if ((VAR_6 == 0) && !(VAR_1.sflag) && VAR_1.complex_sort) {
  VAR_6 = FUNC_8(VAR_3, ((*VAR_4)->str));
  if (VAR_0)
   FUNC_5("; cmp2=%d", VAR_6);
 }

 if (VAR_0)
  FUNC_5("\n");

 return (VAR_6);
}

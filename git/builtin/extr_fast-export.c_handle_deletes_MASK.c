
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct refspec_item {char* dst; scalar_t__* src; } ;
struct TYPE_2__ {int nr; struct refspec_item* items; } ;


 int VAR_0 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (char*,char*,char*) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_2(void)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_1.nr; VAR_2++) {
  struct refspec_item *VAR_3 = &VAR_1.items[VAR_2];
  if (*VAR_3->src)
   continue;

  FUNC_1("reset %s\nfrom %s\n\n",
    VAR_3->dst, FUNC_0(&VAR_0));
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* str; struct TYPE_5__* link; } ;
typedef TYPE_1__* List ;


 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static List FUNC_1(char *VAR_0, List VAR_1) {
 List VAR_2 = FUNC_0(sizeof *VAR_2);

 VAR_2->str = VAR_0;
 if (VAR_1) {
  VAR_2->link = VAR_1->link;
  VAR_1->link = VAR_2;
 } else
  VAR_2->link = VAR_2;
 return VAR_2;
}

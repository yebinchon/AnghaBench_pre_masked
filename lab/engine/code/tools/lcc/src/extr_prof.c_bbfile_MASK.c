
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ x; struct TYPE_13__* link; } ;
struct TYPE_9__ {char* p; } ;
struct TYPE_10__ {TYPE_1__ v; } ;
struct TYPE_11__ {TYPE_2__ c; } ;
struct TYPE_12__ {TYPE_3__ u; } ;
typedef TYPE_4__* Symbol ;
typedef TYPE_5__* List ;


 TYPE_5__* FUNC_0 (int ,TYPE_5__*) ;
 TYPE_5__* VAR_0 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(char *VAR_1) {
 if (VAR_1) {
  List VAR_2;
  int VAR_3 = 1;
  if ((VAR_2 = VAR_0) != ((void*)0))
   do {
    VAR_2 = VAR_2->link;
    if (((Symbol)VAR_2->x)->u.c.v.p == VAR_1)
     return VAR_3;
    VAR_3++;
   } while (VAR_2 != VAR_0);
  VAR_0 = FUNC_0(FUNC_1(VAR_1), VAR_0);
  return VAR_3;
 }
 return 0;
}

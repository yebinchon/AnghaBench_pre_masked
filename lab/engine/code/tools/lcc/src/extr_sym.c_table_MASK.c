
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* Table ;
struct TYPE_5__ {int level; int all; struct TYPE_5__* previous; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;

Table FUNC_1(Table VAR_1, int VAR_2) {
 Table VAR_3;

 FUNC_0(VAR_3, VAR_0);
 VAR_3->previous = VAR_1;
 VAR_3->level = VAR_2;
 if (VAR_1)
  VAR_3->all = VAR_1->all;
 return VAR_3;
}

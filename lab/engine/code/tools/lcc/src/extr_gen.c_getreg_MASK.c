
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* regnode; } ;
struct TYPE_12__ {TYPE_2__ x; } ;
struct TYPE_10__ {int * vbl; int set; int mask; } ;
typedef TYPE_3__* Symbol ;
typedef int Node ;


 TYPE_3__* FUNC_0 (TYPE_3__*,unsigned int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ) ;
 TYPE_3__* FUNC_3 (TYPE_3__*,unsigned int*,int ) ;

__attribute__((used)) static Symbol FUNC_4(Symbol VAR_0, unsigned VAR_1[], Node VAR_2) {
 Symbol VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3 == ((void*)0)) {
  VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_2);
  FUNC_1(VAR_3 && VAR_3->x.regnode);
  FUNC_2(VAR_3->x.regnode->mask, VAR_3->x.regnode->set, VAR_2);
  VAR_3 = FUNC_0(VAR_0, VAR_1);
 }
 FUNC_1(VAR_3 && VAR_3->x.regnode);
 VAR_3->x.regnode->vbl = ((void*)0);
 return VAR_3;
}

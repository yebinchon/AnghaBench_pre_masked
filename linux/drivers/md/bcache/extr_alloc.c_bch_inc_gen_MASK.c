
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct cache {TYPE_1__* set; } ;
struct bucket {int gen; } ;
struct TYPE_2__ {scalar_t__ need_gc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bucket*) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;

uint8_t FUNC_3(struct cache *VAR_1, struct bucket *VAR_2)
{
 uint8_t VAR_3 = ++VAR_2->gen;

 VAR_1->set->need_gc = FUNC_2(VAR_1->set->need_gc, FUNC_1(VAR_2));
 FUNC_0(VAR_1->set->need_gc > VAR_0);

 return VAR_3;
}

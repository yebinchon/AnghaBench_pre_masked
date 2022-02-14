
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache {int sb; int invalidate_needs_gc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;



 int FUNC_2 (struct cache*) ;
 int FUNC_3 (struct cache*) ;
 int FUNC_4 (struct cache*) ;

__attribute__((used)) static void FUNC_5(struct cache *VAR_0)
{
 FUNC_0(VAR_0->invalidate_needs_gc);

 switch (FUNC_1(&VAR_0->sb)) {
 case 129:
  FUNC_3(VAR_0);
  break;
 case 130:
  FUNC_2(VAR_0);
  break;
 case 128:
  FUNC_4(VAR_0);
  break;
 }
}

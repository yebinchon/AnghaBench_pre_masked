
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct topa {scalar_t__ last; } ;
struct topa_page {struct topa topa; } ;
struct page {int dummy; } ;
typedef int gfp_t ;
struct TYPE_2__ {int base; int end; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct topa*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct page* FUNC_1 (int,int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 struct topa_page* FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;

__attribute__((used)) static struct topa *FUNC_6(int VAR_3, gfp_t VAR_4)
{
 int VAR_5 = FUNC_2(VAR_3);
 struct topa_page *VAR_6;
 struct page *VAR_7;

 VAR_7 = FUNC_1(VAR_5, VAR_4 | VAR_2, 0);
 if (!VAR_7)
  return ((void*)0);

 VAR_6 = FUNC_4(VAR_7);
 VAR_6->topa.last = 0;





 if (!FUNC_3(VAR_0)) {
  FUNC_0(&VAR_6->topa, 1)->base = FUNC_5(VAR_7) >> VAR_1;
  FUNC_0(&VAR_6->topa, 1)->end = 1;
 }

 return &VAR_6->topa;
}

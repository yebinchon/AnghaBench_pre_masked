
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {scalar_t__ b_xflags; int b_wcred; int b_rcred; int b_dep; int b_kvasize; int * b_kvabase; } ;


 int FUNC_0 (struct buf*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(void *VAR_3, int VAR_4, int VAR_5)
{
 struct buf *VAR_6 = VAR_3;

 VAR_6->b_kvabase = (void *)FUNC_2(VAR_1);
 if (VAR_6->b_kvabase == ((void*)0))
  return (VAR_0);
 VAR_6->b_kvasize = VAR_1;
 FUNC_0(VAR_6);
 FUNC_1(&VAR_6->b_dep);
 VAR_6->b_rcred = VAR_6->b_wcred = VAR_2;
 VAR_6->b_xflags = 0;

 return (0);
}

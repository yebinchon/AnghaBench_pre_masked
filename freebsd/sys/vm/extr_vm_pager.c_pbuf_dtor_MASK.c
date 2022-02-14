
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {scalar_t__ b_rcred; scalar_t__ b_wcred; } ;


 int FUNC_0 (struct buf*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1, int VAR_2, void *VAR_3)
{
 struct buf *VAR_4 = VAR_1;

 if (VAR_4->b_rcred != VAR_0) {
  FUNC_1(VAR_4->b_rcred);
  VAR_4->b_rcred = VAR_0;
 }
 if (VAR_4->b_wcred != VAR_0) {
  FUNC_1(VAR_4->b_wcred);
  VAR_4->b_wcred = VAR_0;
 }

 FUNC_0(VAR_4);
}

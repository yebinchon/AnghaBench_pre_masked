
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_wc {int dummy; } ;
struct ib_cq {int dummy; } ;
struct c4iw_cq {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct c4iw_cq*,struct ib_wc*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct c4iw_cq* FUNC_3 (struct ib_cq*) ;

int FUNC_4(struct ib_cq *VAR_2, int VAR_3, struct ib_wc *VAR_4)
{
 struct c4iw_cq *VAR_5;
 unsigned long VAR_6;
 int VAR_7;
 int VAR_8 = 0;

 VAR_5 = FUNC_3(VAR_2);

 FUNC_1(&VAR_5->lock, VAR_6);
 for (VAR_7 = 0; VAR_7 < VAR_3; ++VAR_7) {
  do {
   VAR_8 = FUNC_0(VAR_5, VAR_4 + VAR_7);
  } while (VAR_8 == -VAR_0);
  if (VAR_8)
   break;
 }
 FUNC_2(&VAR_5->lock, VAR_6);
 return !VAR_8 || VAR_8 == -VAR_1 ? VAR_7 : VAR_8;
}

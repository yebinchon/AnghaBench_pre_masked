
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siw_cq {int dummy; } ;
struct ib_wc {int dummy; } ;
struct ib_cq {int dummy; } ;


 int FUNC_0 (struct siw_cq*,struct ib_wc*) ;
 struct siw_cq* FUNC_1 (struct ib_cq*) ;

int FUNC_2(struct ib_cq *VAR_0, int VAR_1, struct ib_wc *VAR_2)
{
 struct siw_cq *VAR_3 = FUNC_1(VAR_0);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (!FUNC_0(VAR_3, VAR_2))
   break;
  VAR_2++;
 }
 return VAR_4;
}

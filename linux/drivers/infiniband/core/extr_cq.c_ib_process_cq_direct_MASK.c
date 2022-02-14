
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_wc {int dummy; } ;
struct ib_cq {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_cq*,int,struct ib_wc*,int) ;

int FUNC_1(struct ib_cq *VAR_1, int VAR_2)
{
 struct ib_wc VAR_3[VAR_0];

 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_0);
}

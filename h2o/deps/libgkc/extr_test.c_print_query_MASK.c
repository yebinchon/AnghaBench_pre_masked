
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gkc_summary {int dummy; } ;


 int FUNC_0 (int ,char*,double,double) ;
 double FUNC_1 (struct gkc_summary*,double) ;
 int VAR_0 ;

void FUNC_2(struct gkc_summary *VAR_1, double VAR_2)
{
 double VAR_3 = FUNC_1(VAR_1, VAR_2);
 FUNC_0(VAR_0, "queried: %.02f, found: %.02f\n", VAR_2, VAR_3);
}

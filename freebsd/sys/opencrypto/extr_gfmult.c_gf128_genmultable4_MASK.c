
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gf128table4 {int * tbls; } ;
struct gf128 {int dummy; } ;


 int FUNC_0 (struct gf128,int *) ;
 struct gf128 FUNC_1 (struct gf128,int *) ;

void
FUNC_2(struct gf128 VAR_0, struct gf128table4 *VAR_1)
{
 struct gf128 VAR_2, VAR_3, VAR_4;

 FUNC_0(VAR_0, &VAR_1->tbls[0]);

 VAR_2 = FUNC_1(VAR_0, &VAR_1->tbls[0]);

 FUNC_0(VAR_2, &VAR_1->tbls[1]);

 VAR_3 = FUNC_1(VAR_0, &VAR_1->tbls[1]);
 FUNC_0(VAR_3, &VAR_1->tbls[2]);

 VAR_4 = FUNC_1(VAR_2, &VAR_1->tbls[1]);
 FUNC_0(VAR_4, &VAR_1->tbls[3]);
}

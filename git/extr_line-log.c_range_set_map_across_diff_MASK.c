
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct range_set {int dummy; } ;
struct diff_ranges {int parent; int target; } ;


 struct range_set VAR_0 ;
 int FUNC_0 (struct diff_ranges*,struct diff_ranges*,struct range_set*) ;
 int FUNC_1 (struct diff_ranges*) ;
 int FUNC_2 (struct range_set*,struct range_set*,int *) ;
 int FUNC_3 (struct range_set*) ;
 int FUNC_4 (struct range_set*,struct range_set*,struct diff_ranges*) ;
 int FUNC_5 (struct range_set*,struct range_set*,int *) ;
 struct diff_ranges* FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct range_set *VAR_1,
          struct range_set *VAR_2,
          struct diff_ranges *VAR_3,
          struct diff_ranges **VAR_4)
{
 struct diff_ranges *VAR_5 = FUNC_6(sizeof(*VAR_5));
 struct range_set VAR_6 = VAR_0;
 struct range_set VAR_7 = VAR_0;

 FUNC_1(VAR_5);
 FUNC_0(VAR_5, VAR_3, VAR_2);
 FUNC_2(&VAR_6, VAR_2, &VAR_5->target);
 FUNC_4(&VAR_7, &VAR_6, VAR_3);
 FUNC_5(VAR_1, &VAR_7, &VAR_5->parent);
 FUNC_3(&VAR_6);
 FUNC_3(&VAR_7);

 *VAR_4 = VAR_5;
}

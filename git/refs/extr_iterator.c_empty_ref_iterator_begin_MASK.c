
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_iterator {int dummy; } ;
struct empty_ref_iterator {struct ref_iterator base; } ;


 int FUNC_0 (struct ref_iterator*,int *,int) ;
 int VAR_0 ;
 struct empty_ref_iterator* FUNC_1 (int,int) ;

struct ref_iterator *FUNC_2(void)
{
 struct empty_ref_iterator *VAR_1 = FUNC_1(1, sizeof(*VAR_1));
 struct ref_iterator *VAR_2 = &VAR_1->base;

 FUNC_0(VAR_2, &VAR_0, 1);
 return VAR_2;
}

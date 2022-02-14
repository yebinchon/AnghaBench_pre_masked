
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_iterator {int dummy; } ;
struct merge_ref_iterator {scalar_t__ iter1; scalar_t__ iter0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ref_iterator*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct ref_iterator *VAR_2)
{
 struct merge_ref_iterator *VAR_3 =
  (struct merge_ref_iterator *)VAR_2;
 int VAR_4 = VAR_0;

 if (VAR_3->iter0) {
  if (FUNC_1(VAR_3->iter0) != VAR_0)
   VAR_4 = VAR_1;
 }
 if (VAR_3->iter1) {
  if (FUNC_1(VAR_3->iter1) != VAR_0)
   VAR_4 = VAR_1;
 }
 FUNC_0(VAR_2);
 return VAR_4;
}

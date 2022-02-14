
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_iterator {int ordered; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct ref_iterator*) ;
 struct ref_iterator* FUNC_2 (int,struct ref_iterator*,struct ref_iterator*,int ,int *) ;
 int VAR_0 ;
 int FUNC_3 (struct ref_iterator*) ;

struct ref_iterator *FUNC_4(
  struct ref_iterator *VAR_1, struct ref_iterator *VAR_2)
{





 if (FUNC_1(VAR_1)) {
  FUNC_3(VAR_1);
  return VAR_2;
 } else if (FUNC_1(VAR_2)) {
  FUNC_3(VAR_2);
  return VAR_1;
 } else if (!VAR_1->ordered || !VAR_2->ordered) {
  FUNC_0("overlay_ref_iterator requires ordered inputs");
 }

 return FUNC_2(1, VAR_1, VAR_2,
     VAR_0, ((void*)0));
}

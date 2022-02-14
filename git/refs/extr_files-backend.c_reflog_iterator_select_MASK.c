
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_iterator {int refname; } ;
typedef enum iterator_selection { ____Placeholder_iterator_selection } iterator_selection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static enum iterator_selection FUNC_1(
 struct ref_iterator *VAR_5,
 struct ref_iterator *VAR_6,
 void *VAR_7)
{
 if (VAR_5) {





  return VAR_1;
 } else if (VAR_6) {
  if (FUNC_0(VAR_6->refname) == VAR_4)
   return VAR_2;





  return VAR_3;
 } else
  return VAR_0;
}

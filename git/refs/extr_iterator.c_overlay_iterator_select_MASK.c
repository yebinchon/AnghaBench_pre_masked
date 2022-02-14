
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
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static enum iterator_selection FUNC_1(
  struct ref_iterator *VAR_4, struct ref_iterator *VAR_5,
  void *VAR_6)
{
 int VAR_7;

 if (!VAR_5)
  return VAR_4 ? VAR_0 : VAR_3;
 else if (!VAR_4)
  return VAR_2;

 VAR_7 = FUNC_0(VAR_4->refname, VAR_5->refname);

 if (VAR_7 < 0)
  return VAR_0;
 else if (VAR_7 > 0)
  return VAR_2;
 else
  return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_filter {scalar_t__ kind; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char const*) ;

__attribute__((used)) static int FUNC_1(struct ref_filter *VAR_3, const char *VAR_4)
{
 if (VAR_3->kind == VAR_0 ||
     VAR_3->kind == VAR_1 ||
     VAR_3->kind == VAR_2)
  return VAR_3->kind;
 return FUNC_0(VAR_4);
}

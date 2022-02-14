
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct refname_atom {scalar_t__ option; int rstrip; int lstrip; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char const* FUNC_0 (char const*,int ) ;
 char const* FUNC_1 (char const*,int ) ;
 char const* FUNC_2 (char const*,int ) ;
 int VAR_3 ;
 char const* FUNC_3 (char const*) ;

__attribute__((used)) static const char *FUNC_4(struct refname_atom *VAR_4, const char *VAR_5)
{
 if (VAR_4->option == VAR_2)
  return FUNC_2(VAR_5, VAR_3);
 else if (VAR_4->option == VAR_0)
  return FUNC_0(VAR_5, VAR_4->lstrip);
 else if (VAR_4->option == VAR_1)
  return FUNC_1(VAR_5, VAR_4->rstrip);
 else
  return FUNC_3(VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_mfilter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct in_mfilter*,int const,int const) ;
 struct in_mfilter* FUNC_1 (int,int ,int const) ;

struct in_mfilter *
FUNC_2(const int VAR_1, const int VAR_2, const int VAR_3)
{
 struct in_mfilter *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0, VAR_1);
 if (VAR_4 != ((void*)0))
  FUNC_0(VAR_4, VAR_2, VAR_3);

 return (VAR_4);
}

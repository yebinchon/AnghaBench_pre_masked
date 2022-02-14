
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raid_type {int const level; int const algorithm; } ;


 int FUNC_0 (struct raid_type*) ;
 scalar_t__ FUNC_1 (struct raid_type*,int const) ;
 struct raid_type* VAR_0 ;

__attribute__((used)) static struct raid_type *FUNC_2(const int VAR_1, const int VAR_2)
{
 struct raid_type *VAR_3 = VAR_0 + FUNC_0(VAR_0);

 while (VAR_3-- > VAR_0) {

  if (VAR_3->level == VAR_1 &&
      (FUNC_1(VAR_3, VAR_2) || VAR_3->algorithm == VAR_2))
   return VAR_3;
 }

 return ((void*)0);
}

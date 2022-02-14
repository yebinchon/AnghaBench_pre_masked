
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ timestamp_t ;
struct commit {int dummy; } ;
struct author_date_slab {int dummy; } ;


 scalar_t__* FUNC_0 (struct author_date_slab*,struct commit const*) ;

int FUNC_1(const void *VAR_0, const void *VAR_1,
       void *VAR_2)
{
 const struct commit *VAR_3 = VAR_0, *VAR_4 = VAR_1;
 struct author_date_slab *VAR_5 = VAR_2;
 timestamp_t VAR_6 = *(FUNC_0(VAR_5, VAR_3));
 timestamp_t VAR_7 = *(FUNC_0(VAR_5, VAR_4));


 if (VAR_6 < VAR_7)
  return 1;
 else if (VAR_6 > VAR_7)
  return -1;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct flag_desc {char const* name; scalar_t__ flag; } ;


 struct flag_desc* VAR_0 ;

__attribute__((used)) static const char *
FUNC_0(uint32_t VAR_1)
{
 struct flag_desc * VAR_2 = VAR_0;
 while (VAR_2->name) {
  if (VAR_2->flag == VAR_1)
   return VAR_2->name;
  VAR_2++;
 }

 return "UNKNOWN";
}

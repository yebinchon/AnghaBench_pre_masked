
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ramxlat {int id; int enc; } ;


 int VAR_0 ;

__attribute__((used)) static inline int
FUNC_0(const struct ramxlat *VAR_1, int VAR_2)
{
 while (VAR_1->id >= 0) {
  if (VAR_1->id == VAR_2)
   return VAR_1->enc;
  VAR_1++;
 }
 return -VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct adt7475_data {int config5; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct adt7475_data *VAR_1, u16 VAR_2)
{
 if (VAR_1->config5 & VAR_0) {
  if (VAR_2 >= 512)
   return (VAR_2 - 1024) * 250;
  else
   return VAR_2 * 250;
 } else
  return (VAR_2 - 256) * 250;
}

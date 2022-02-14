
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct dw_i3c_master {int maxdevs; scalar_t__* addrs; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct dw_i3c_master *VAR_1, u8 VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->maxdevs; VAR_3++) {
  if (VAR_2 == VAR_1->addrs[VAR_3])
   return VAR_3;
 }

 return -VAR_0;
}

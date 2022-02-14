
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extcon_dev {int max_supported; unsigned int const* supported_cable; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct extcon_dev *VAR_1, const unsigned int VAR_2)
{
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_1->max_supported; VAR_3++) {
  if (VAR_1->supported_cable[VAR_3] == VAR_2)
   return VAR_3;
 }

 return -VAR_0;
}

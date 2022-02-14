
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extcon_dev {unsigned int const* supported_cable; scalar_t__ max_supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct extcon_dev* FUNC_0 (int ) ;
 int VAR_2 ;
 struct extcon_dev* FUNC_1 (int,int ) ;

struct extcon_dev *FUNC_2(const unsigned int *VAR_3)
{
 struct extcon_dev *VAR_4;

 if (!VAR_3)
  return FUNC_0(-VAR_0);

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_2);
 if (!VAR_4)
  return FUNC_0(-VAR_1);

 VAR_4->max_supported = 0;
 VAR_4->supported_cable = VAR_3;

 return VAR_4;
}

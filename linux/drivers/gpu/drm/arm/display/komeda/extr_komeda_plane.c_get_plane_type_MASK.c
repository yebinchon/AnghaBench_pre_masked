
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct komeda_kms_dev {int dummy; } ;
struct komeda_component {scalar_t__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static u32 FUNC_0(struct komeda_kms_dev *VAR_3,
     struct komeda_component *VAR_4)
{
 bool VAR_5 = (VAR_4->id == VAR_2);

 return VAR_5 ? VAR_1 : VAR_0;
}

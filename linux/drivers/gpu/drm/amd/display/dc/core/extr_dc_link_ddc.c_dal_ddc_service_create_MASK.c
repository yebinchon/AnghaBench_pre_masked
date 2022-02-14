
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ddc_service_init_data {int dummy; } ;
struct ddc_service {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ddc_service*,struct ddc_service_init_data*) ;
 struct ddc_service* FUNC_1 (int,int ) ;

struct ddc_service *FUNC_2(
 struct ddc_service_init_data *VAR_1)
{
 struct ddc_service *VAR_2;

 VAR_2 = FUNC_1(sizeof(struct ddc_service), VAR_0);

 if (!VAR_2)
  return ((void*)0);

 FUNC_0(VAR_2, VAR_1);
 return VAR_2;
}

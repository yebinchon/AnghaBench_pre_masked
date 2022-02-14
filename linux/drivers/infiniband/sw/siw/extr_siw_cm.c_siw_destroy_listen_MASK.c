
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iw_cm_id {int * provider_data; int device; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct iw_cm_id*) ;

int FUNC_3(struct iw_cm_id *VAR_0)
{
 if (!VAR_0->provider_data) {
  FUNC_1(VAR_0->device, "no cep(s)\n");
  return 0;
 }
 FUNC_2(VAR_0);
 FUNC_0(VAR_0->provider_data);
 VAR_0->provider_data = ((void*)0);

 return 0;
}

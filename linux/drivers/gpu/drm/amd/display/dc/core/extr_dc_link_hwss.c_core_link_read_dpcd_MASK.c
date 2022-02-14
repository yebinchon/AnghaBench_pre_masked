
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct dc_link {int ctx; int aux_access_disabled; } ;
typedef enum dc_status { ____Placeholder_dc_status } dc_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct dc_link*,int ,int *,int ) ;

enum dc_status FUNC_1(
 struct dc_link *VAR_2,
 uint32_t VAR_3,
 uint8_t *VAR_4,
 uint32_t VAR_5)
{
 if (!VAR_2->aux_access_disabled &&
   !FUNC_0(VAR_2->ctx,
   VAR_2, VAR_3, VAR_4, VAR_5)) {
  return VAR_0;
 }

 return VAR_1;
}

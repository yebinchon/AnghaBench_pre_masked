
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct dc_link_settings {int dummy; } ;
struct dc_link {int reported_link_cap; int verified_link_cap; } ;
typedef enum dc_connection_type { ____Placeholder_dc_connection_type } dc_connection_type ;


 int FUNC_0 (struct dc_link*,int*) ;
 scalar_t__ FUNC_1 (struct dc_link*,int *,int*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int) ;

bool FUNC_4(
 struct dc_link *VAR_0,
 struct dc_link_settings *VAR_1,
 int VAR_2)
{
 uint8_t VAR_3 = 0;
 bool VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  int VAR_5 = 0;
  enum dc_connection_type VAR_6;

  FUNC_2(&VAR_0->verified_link_cap, 0,
    sizeof(struct dc_link_settings));
  if (!FUNC_0(VAR_0, &VAR_6)) {
   break;
  } else if (FUNC_1(VAR_0,
    &VAR_0->reported_link_cap,
    &VAR_5) && VAR_5 == 0) {
   VAR_4 = 1;
   break;
  }
  FUNC_3(10);
 }
 return VAR_4;
}

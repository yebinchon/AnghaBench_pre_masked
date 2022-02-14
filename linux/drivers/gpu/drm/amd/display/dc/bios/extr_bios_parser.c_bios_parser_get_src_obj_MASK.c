
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef int uint16_t ;
struct graphics_object_id {int dummy; } ;
struct dc_bios {int dummy; } ;
struct bios_parser {int dummy; } ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
typedef int ATOM_OBJECT ;


 struct bios_parser* FUNC_0 (struct dc_bios*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int * FUNC_2 (struct bios_parser*,struct graphics_object_id) ;
 size_t FUNC_3 (struct bios_parser*,int *,int **) ;
 struct graphics_object_id FUNC_4 (int ) ;

__attribute__((used)) static enum bp_result FUNC_5(struct dc_bios *VAR_2,
 struct graphics_object_id VAR_3, uint32_t VAR_4,
 struct graphics_object_id *VAR_5)
{
 uint32_t VAR_6;
 uint16_t *VAR_7;
 ATOM_OBJECT *VAR_8;
 struct bios_parser *VAR_9 = FUNC_0(VAR_2);

 if (!VAR_5)
  return VAR_0;

 VAR_8 = FUNC_2(VAR_9, VAR_3);

 if (!VAR_8) {
  FUNC_1();
  return VAR_0;
 }

 VAR_6 = FUNC_3(VAR_9, VAR_8, &VAR_7);

 if (VAR_6 <= VAR_4)
  return VAR_0;

 *VAR_5 = FUNC_4(VAR_7[VAR_4]);

 return VAR_1;
}

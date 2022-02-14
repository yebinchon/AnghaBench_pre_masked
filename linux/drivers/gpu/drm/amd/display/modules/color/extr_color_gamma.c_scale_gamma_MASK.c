
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct pwl_float_data {void* b; void* g; void* r; } ;
struct fixed31_32 {int dummy; } ;
struct dividers {int divider3; int divider2; int divider1; } ;
struct TYPE_2__ {int * blue; int * green; int * red; } ;
struct dc_gamma {int num_entries; TYPE_1__ entries; } ;


 void* FUNC_0 (int ,struct fixed31_32) ;
 struct fixed31_32 FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct fixed31_32 const,int ) ;
 void* FUNC_3 (void*,int ) ;

__attribute__((used)) static void FUNC_4(struct pwl_float_data *VAR_0,
  const struct dc_gamma *VAR_1,
  struct dividers VAR_2)
{
 const struct fixed31_32 VAR_3 = FUNC_1(0xFFFF);
 const struct fixed31_32 VAR_4 = FUNC_1(0xFF00);
 struct fixed31_32 VAR_5 = VAR_4;
 uint32_t VAR_6;
 struct pwl_float_data *VAR_7 = VAR_0;
 struct pwl_float_data *VAR_8 = VAR_7 + VAR_1->num_entries - 1;

 VAR_6 = 0;

 do {
  if (FUNC_2(VAR_4, VAR_1->entries.red[VAR_6]) ||
   FUNC_2(VAR_4, VAR_1->entries.green[VAR_6]) ||
   FUNC_2(VAR_4, VAR_1->entries.blue[VAR_6])) {
   VAR_5 = VAR_3;
   break;
  }
  ++VAR_6;
 } while (VAR_6 != VAR_1->num_entries);

 VAR_6 = 0;

 do {
  VAR_7->r = FUNC_0(
   VAR_1->entries.red[VAR_6], VAR_5);
  VAR_7->g = FUNC_0(
   VAR_1->entries.green[VAR_6], VAR_5);
  VAR_7->b = FUNC_0(
   VAR_1->entries.blue[VAR_6], VAR_5);

  ++VAR_7;
  ++VAR_6;
 } while (VAR_6 != VAR_1->num_entries);

 VAR_7->r = FUNC_3(VAR_8->r,
   VAR_2.divider1);
 VAR_7->g = FUNC_3(VAR_8->g,
   VAR_2.divider1);
 VAR_7->b = FUNC_3(VAR_8->b,
   VAR_2.divider1);

 ++VAR_7;

 VAR_7->r = FUNC_3(VAR_8->r,
   VAR_2.divider2);
 VAR_7->g = FUNC_3(VAR_8->g,
   VAR_2.divider2);
 VAR_7->b = FUNC_3(VAR_8->b,
   VAR_2.divider2);

 ++VAR_7;

 VAR_7->r = FUNC_3(VAR_8->r,
   VAR_2.divider3);
 VAR_7->g = FUNC_3(VAR_8->g,
   VAR_2.divider3);
 VAR_7->b = FUNC_3(VAR_8->b,
   VAR_2.divider3);
}

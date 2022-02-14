
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct pwl_float_data {void* b; void* g; void* r; } ;
struct fixed31_32 {int dummy; } ;
struct dividers {int dummy; } ;
struct TYPE_2__ {struct fixed31_32* blue; struct fixed31_32* green; struct fixed31_32* red; } ;
struct dc_gamma {size_t num_entries; TYPE_1__ entries; } ;


 struct fixed31_32 FUNC_0 (struct fixed31_32,struct fixed31_32) ;
 void* FUNC_1 (struct fixed31_32,struct fixed31_32) ;
 scalar_t__ FUNC_2 (struct fixed31_32,struct fixed31_32) ;
 int FUNC_3 (void*,int) ;
 struct fixed31_32 FUNC_4 (struct fixed31_32) ;
 struct fixed31_32 VAR_0 ;
 void* FUNC_5 (int ,void*) ;
 struct fixed31_32 VAR_1 ;

__attribute__((used)) static void FUNC_6(struct pwl_float_data *VAR_2,
  const struct dc_gamma *VAR_3,
  struct dividers VAR_4)
{
 uint32_t VAR_5;
 struct fixed31_32 VAR_6 = VAR_1;
 struct fixed31_32 VAR_7 = VAR_0;

 struct fixed31_32 VAR_8 = VAR_1;
 struct fixed31_32 VAR_9 = VAR_1;

 for (VAR_5 = 0 ; VAR_5 < VAR_3->num_entries; VAR_5++) {
  if (FUNC_2(VAR_3->entries.red[VAR_5], VAR_6))
   VAR_6 = VAR_3->entries.red[VAR_5];

  if (FUNC_2(VAR_3->entries.green[VAR_5], VAR_6))
   VAR_6 = VAR_3->entries.green[VAR_5];

  if (FUNC_2(VAR_3->entries.blue[VAR_5], VAR_6))
   VAR_6 = VAR_3->entries.blue[VAR_5];

  if (FUNC_2(VAR_7, VAR_3->entries.red[VAR_5]))
   VAR_7 = VAR_3->entries.red[VAR_5];

  if (FUNC_2(VAR_7, VAR_3->entries.green[VAR_5]))
   VAR_7 = VAR_3->entries.green[VAR_5];

  if (FUNC_2(VAR_7, VAR_3->entries.blue[VAR_5]))
   VAR_7 = VAR_3->entries.blue[VAR_5];
 }

 if (FUNC_2(VAR_6, VAR_1))
  VAR_8 = FUNC_4(VAR_6);

 VAR_9 = FUNC_0(VAR_6, VAR_7);

 for (VAR_5 = 0 ; VAR_5 < VAR_3->num_entries; VAR_5++) {
  VAR_2[VAR_5].r = FUNC_1(
   FUNC_0(
    VAR_3->entries.red[VAR_5], VAR_8), VAR_9);
  VAR_2[VAR_5].g = FUNC_1(
   FUNC_0(
    VAR_3->entries.green[VAR_5], VAR_8), VAR_9);
  VAR_2[VAR_5].b = FUNC_1(
   FUNC_0(
    VAR_3->entries.blue[VAR_5], VAR_8), VAR_9);

 }

 VAR_2[VAR_5].r = FUNC_5(FUNC_3(
    VAR_2[VAR_5-1].r, 2), VAR_2[VAR_5-2].r);
 VAR_2[VAR_5].g = FUNC_5(FUNC_3(
    VAR_2[VAR_5-1].g, 2), VAR_2[VAR_5-2].g);
 VAR_2[VAR_5].b = FUNC_5(FUNC_3(
    VAR_2[VAR_5-1].b, 2), VAR_2[VAR_5-2].b);
 ++VAR_5;
 VAR_2[VAR_5].r = FUNC_5(FUNC_3(
    VAR_2[VAR_5-1].r, 2), VAR_2[VAR_5-2].r);
 VAR_2[VAR_5].g = FUNC_5(FUNC_3(
    VAR_2[VAR_5-1].g, 2), VAR_2[VAR_5-2].g);
 VAR_2[VAR_5].b = FUNC_5(FUNC_3(
    VAR_2[VAR_5-1].b, 2), VAR_2[VAR_5-2].b);
}

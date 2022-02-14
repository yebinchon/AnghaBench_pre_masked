
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
struct send_context {int dummy; } ;
struct pio_vl_map {size_t mask; struct pio_map_elem** map; } ;
struct pio_map_elem {size_t mask; struct send_context** ksc; } ;
struct hfi1_devdata {TYPE_1__* vld; int pio_map; } ;
struct TYPE_2__ {struct send_context* sc; } ;


 size_t VAR_0 ;
 struct pio_vl_map* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;

struct send_context *FUNC_4(struct hfi1_devdata *VAR_1,
      u32 VAR_2, u8 VAR_3)
{
 struct pio_vl_map *VAR_4;
 struct pio_map_elem *VAR_5;
 struct send_context *VAR_6;






 if (FUNC_3(VAR_3 >= VAR_0)) {
  VAR_6 = ((void*)0);
  goto done;
 }

 FUNC_1();
 VAR_4 = FUNC_0(VAR_1->pio_map);
 if (FUNC_3(!VAR_4)) {
  FUNC_2();
  return VAR_1->vld[0].sc;
 }
 VAR_5 = VAR_4->map[VAR_3 & VAR_4->mask];
 VAR_6 = VAR_5->ksc[VAR_2 & VAR_5->mask];
 FUNC_2();

done:
 VAR_6 = !VAR_6 ? VAR_1->vld[0].sc : VAR_6;
 return VAR_6;
}

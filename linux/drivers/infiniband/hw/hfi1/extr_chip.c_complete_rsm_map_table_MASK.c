
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsm_map_table {int * map; } ;
struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct hfi1_devdata*,int ) ;
 int FUNC_1 (struct hfi1_devdata*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct hfi1_devdata *VAR_3,
       struct rsm_map_table *VAR_4)
{
 int VAR_5;

 if (VAR_4) {

  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
   FUNC_1(VAR_3, VAR_2 + (8 * VAR_5), VAR_4->map[VAR_5]);


  FUNC_0(VAR_3, VAR_1);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rsm_map_table {scalar_t__ used; int map; } ;
struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hfi1_devdata*) ;
 struct rsm_map_table* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static struct rsm_map_table *FUNC_3(struct hfi1_devdata *VAR_1)
{
 struct rsm_map_table *VAR_2;
 u8 VAR_3 = FUNC_0(VAR_1) ? 0 : 0xff;

 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);
 if (VAR_2) {
  FUNC_2(VAR_2->map, VAR_3, sizeof(VAR_2->map));
  VAR_2->used = 0;
 }

 return VAR_2;
}

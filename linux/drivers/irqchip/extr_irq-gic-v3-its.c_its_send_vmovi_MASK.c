
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct its_vlpi_map {int db_enabled; int vpe; } ;
struct TYPE_3__ {struct its_vlpi_map* vlpi_maps; } ;
struct its_device {int its; TYPE_1__ event_map; } ;
struct TYPE_4__ {size_t event_id; int db_enabled; struct its_device* dev; int vpe; } ;
struct its_cmd_desc {TYPE_2__ its_vmovi_cmd; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct its_cmd_desc*) ;

__attribute__((used)) static void FUNC_1(struct its_device *VAR_1, u32 VAR_2)
{
 struct its_vlpi_map *VAR_3 = &VAR_1->event_map.vlpi_maps[VAR_2];
 struct its_cmd_desc VAR_4;

 VAR_4.its_vmovi_cmd.vpe = VAR_3->vpe;
 VAR_4.its_vmovi_cmd.dev = VAR_1;
 VAR_4.its_vmovi_cmd.event_id = VAR_2;
 VAR_4.its_vmovi_cmd.db_enabled = VAR_3->db_enabled;

 FUNC_0(VAR_1->its, VAR_0, &VAR_4);
}

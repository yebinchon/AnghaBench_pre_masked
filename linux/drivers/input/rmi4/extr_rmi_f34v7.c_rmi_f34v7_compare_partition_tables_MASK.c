
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ui_firmware; scalar_t__ ui_config; scalar_t__ dp_config; scalar_t__ guest_code; } ;
struct TYPE_7__ {TYPE_2__ phyaddr; } ;
struct TYPE_5__ {scalar_t__ ui_firmware; scalar_t__ ui_config; scalar_t__ dp_config; scalar_t__ guest_code; } ;
struct TYPE_8__ {int new_partition_table; TYPE_3__ img; TYPE_1__ phyaddr; scalar_t__ has_guest_code; scalar_t__ has_display_cfg; } ;
struct f34_data {TYPE_4__ v7; } ;



__attribute__((used)) static void FUNC_0(struct f34_data *VAR_0)
{
 if (VAR_0->v7.phyaddr.ui_firmware != VAR_0->v7.img.phyaddr.ui_firmware) {
  VAR_0->v7.new_partition_table = 1;
  return;
 }

 if (VAR_0->v7.phyaddr.ui_config != VAR_0->v7.img.phyaddr.ui_config) {
  VAR_0->v7.new_partition_table = 1;
  return;
 }

 if (VAR_0->v7.has_display_cfg &&
     VAR_0->v7.phyaddr.dp_config != VAR_0->v7.img.phyaddr.dp_config) {
  VAR_0->v7.new_partition_table = 1;
  return;
 }

 if (VAR_0->v7.has_guest_code &&
     VAR_0->v7.phyaddr.guest_code != VAR_0->v7.img.phyaddr.guest_code) {
  VAR_0->v7.new_partition_table = 1;
  return;
 }

 VAR_0->v7.new_partition_table = 0;
}

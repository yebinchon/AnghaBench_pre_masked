
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cyapa_tsg_bin_image_head {int head_size; int family_id; int silicon_id_hi; } ;
struct cyapa {int gen; int platform_ver; } ;




 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct cyapa *VAR_1,
  struct cyapa_tsg_bin_image_head *VAR_2)
{
 if (VAR_2->head_size != 0x0C && VAR_2->head_size != 0x12)
  return -VAR_0;

 switch (VAR_1->gen) {
 case 128:
  if (VAR_2->family_id != 0x9B ||
      VAR_2->silicon_id_hi != 0x0B)
   return -VAR_0;
  break;
 case 129:

  if (VAR_1->platform_ver < 2) {
   if (VAR_2->head_size == 0x0C)
    break;
   return -VAR_0;
  }

  if (VAR_2->family_id != 0x91 ||
      VAR_2->silicon_id_hi != 0x02)
   return -VAR_0;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct vbva_report_input_mapping {void* cy; void* cx; void* y; void* x; } ;
struct gen_pool {int dummy; } ;
typedef void* s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vbva_report_input_mapping* FUNC_0 (struct gen_pool*,int,int ,int ) ;
 int FUNC_1 (struct gen_pool*,struct vbva_report_input_mapping*) ;
 int FUNC_2 (struct gen_pool*,struct vbva_report_input_mapping*) ;

int FUNC_3(struct gen_pool *VAR_3, s32 VAR_4, s32 VAR_5,
          u32 VAR_6, u32 VAR_7)
{
 struct vbva_report_input_mapping *VAR_8;

 VAR_8 = FUNC_0(VAR_3, sizeof(*VAR_8), VAR_1,
          VAR_2);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->x = VAR_4;
 VAR_8->y = VAR_5;
 VAR_8->cx = VAR_6;
 VAR_8->cy = VAR_7;

 FUNC_2(VAR_3, VAR_8);
 FUNC_1(VAR_3, VAR_8);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct vbva_cursor_position {int report_position; void* y; void* x; } ;
struct gen_pool {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vbva_cursor_position* FUNC_0 (struct gen_pool*,int,int ,int ) ;
 int FUNC_1 (struct gen_pool*,struct vbva_cursor_position*) ;
 int FUNC_2 (struct gen_pool*,struct vbva_cursor_position*) ;

int FUNC_3(struct gen_pool *VAR_3, bool VAR_4,
     u32 VAR_5, u32 VAR_6, u32 *VAR_7, u32 *VAR_8)
{
 struct vbva_cursor_position *VAR_9;

 VAR_9 = FUNC_0(VAR_3, sizeof(*VAR_9), VAR_1,
          VAR_2);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->report_position = VAR_4;
 VAR_9->x = VAR_5;
 VAR_9->y = VAR_6;

 FUNC_2(VAR_3, VAR_9);

 *VAR_7 = VAR_9->x;
 *VAR_8 = VAR_9->y;

 FUNC_1(VAR_3, VAR_9);

 return 0;
}

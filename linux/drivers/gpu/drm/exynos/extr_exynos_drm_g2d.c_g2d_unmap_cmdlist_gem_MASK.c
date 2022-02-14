
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g2d_data {int dummy; } ;
struct g2d_buf_info {int map_nr; int* reg_types; scalar_t__* types; int ** obj; struct g2d_buf_desc* descs; } ;
struct g2d_cmdlist_node {struct g2d_buf_info buf_info; } ;
struct g2d_buf_desc {int dummy; } ;
struct drm_file {int dummy; } ;
typedef enum g2d_reg_type { ____Placeholder_g2d_reg_type } g2d_reg_type ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (struct g2d_data*,void*,int) ;
 int FUNC_2 (struct g2d_buf_desc*,int,int) ;

__attribute__((used)) static void FUNC_3(struct g2d_data *VAR_2,
      struct g2d_cmdlist_node *VAR_3,
      struct drm_file *VAR_4)
{
 struct g2d_buf_info *VAR_5 = &VAR_3->buf_info;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5->map_nr; VAR_6++) {
  struct g2d_buf_desc *VAR_7;
  enum g2d_reg_type VAR_8;
  void *VAR_9;

  VAR_8 = VAR_5->reg_types[VAR_6];

  VAR_7 = &VAR_5->descs[VAR_8];
  VAR_9 = VAR_5->obj[VAR_8];

  if (VAR_5->types[VAR_8] == VAR_0)
   FUNC_0(VAR_9);
  else
   FUNC_1(VAR_2, VAR_9, 0);

  VAR_5->reg_types[VAR_6] = VAR_1;
  VAR_5->obj[VAR_8] = ((void*)0);
  VAR_5->types[VAR_8] = 0;
  FUNC_2(VAR_7, 0x00, sizeof(*VAR_7));
 }

 VAR_5->map_nr = 0;
}

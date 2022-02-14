
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g2d_data {int dev; } ;
struct g2d_buf_info {struct g2d_buf_desc* descs; int * types; } ;
struct g2d_cmdlist_node {struct g2d_buf_info buf_info; struct g2d_cmdlist* cmdlist; } ;
struct g2d_cmdlist {int last; int* data; } ;
struct g2d_buf_desc {int stride; unsigned long format; unsigned long left_x; unsigned long top_y; unsigned long right_x; unsigned long bottom_y; } ;
typedef enum g2d_reg_type { ____Placeholder_g2d_reg_type } g2d_reg_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,unsigned long) ;
 int FUNC_1 (struct g2d_data*,int) ;

__attribute__((used)) static int FUNC_2(struct g2d_data *VAR_6,
    struct g2d_cmdlist_node *VAR_7,
    int VAR_8, bool VAR_9)
{
 struct g2d_cmdlist *VAR_10 = VAR_7->cmdlist;
 int VAR_11;
 int VAR_12;
 int VAR_13;

 for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {
  struct g2d_buf_info *VAR_14 = &VAR_7->buf_info;
  struct g2d_buf_desc *VAR_15;
  enum g2d_reg_type VAR_16;
  unsigned long VAR_17;

  VAR_12 = VAR_10->last - 2 * (VAR_13 + 1);

  VAR_11 = VAR_10->data[VAR_12] & ~0xfffff000;
  if (VAR_11 < VAR_5 || VAR_11 > VAR_4)
   goto err;
  if (VAR_11 % 4)
   goto err;

  switch (VAR_11) {
  case 133:
  case 130:
  case 141:
  case 138:
  case 134:
  case 135:
   if (!VAR_9)
    goto err;

   VAR_16 = FUNC_1(VAR_6, VAR_11);


   if ((VAR_10->data[VAR_12] & ~0x7fffffff) >> 31) {
    VAR_14->types[VAR_16] = VAR_1;
    VAR_10->data[VAR_12] &= ~VAR_3;
   } else
    VAR_14->types[VAR_16] = VAR_0;
   break;
  case 128:
  case 136:
   if (VAR_9)
    goto err;

   VAR_16 = FUNC_1(VAR_6, VAR_11);

   VAR_15 = &VAR_14->descs[VAR_16];
   VAR_15->stride = VAR_10->data[VAR_12 + 1];
   break;
  case 132:
  case 140:
   if (VAR_9)
    goto err;

   VAR_16 = FUNC_1(VAR_6, VAR_11);

   VAR_15 = &VAR_14->descs[VAR_16];
   VAR_17 = VAR_10->data[VAR_12 + 1];

   VAR_15->format = VAR_17 & 0xf;
   break;
  case 131:
  case 139:
   if (VAR_9)
    goto err;

   VAR_16 = FUNC_1(VAR_6, VAR_11);

   VAR_15 = &VAR_14->descs[VAR_16];
   VAR_17 = VAR_10->data[VAR_12 + 1];

   VAR_15->left_x = VAR_17 & 0x1fff;
   VAR_15->top_y = (VAR_17 & 0x1fff0000) >> 16;
   break;
  case 129:
  case 137:
   if (VAR_9)
    goto err;

   VAR_16 = FUNC_1(VAR_6, VAR_11);

   VAR_15 = &VAR_14->descs[VAR_16];
   VAR_17 = VAR_10->data[VAR_12 + 1];

   VAR_15->right_x = VAR_17 & 0x1fff;
   VAR_15->bottom_y = (VAR_17 & 0x1fff0000) >> 16;
   break;
  default:
   if (VAR_9)
    goto err;
   break;
  }
 }

 return 0;

err:
 FUNC_0(VAR_6->dev, "Bad register offset: 0x%lx\n", VAR_10->data[VAR_12]);
 return -VAR_2;
}

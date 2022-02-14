
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vbva_conf32 {int value; int index; } ;
struct gen_pool {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct vbva_conf32* FUNC_0 (struct gen_pool*,int,int ,int ) ;
 int FUNC_1 (struct gen_pool*,struct vbva_conf32*) ;
 int FUNC_2 (struct gen_pool*,struct vbva_conf32*) ;

int FUNC_3(struct gen_pool *VAR_4, u32 VAR_5, u32 *VAR_6)
{
 struct vbva_conf32 *VAR_7;

 VAR_7 = FUNC_0(VAR_4, sizeof(*VAR_7), VAR_1,
          VAR_3);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->index = VAR_5;
 VAR_7->value = VAR_2;

 FUNC_2(VAR_4, VAR_7);

 *VAR_6 = VAR_7->value;

 FUNC_1(VAR_4, VAR_7);

 return 0;
}

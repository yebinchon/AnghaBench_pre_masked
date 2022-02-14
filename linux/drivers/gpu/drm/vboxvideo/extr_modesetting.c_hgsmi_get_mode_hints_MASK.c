
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vbva_query_mode_hints {unsigned int hints_queried_count; int hint_structure_guest_size; scalar_t__ rc; } ;
struct vbva_modehint {int dummy; } ;
struct gen_pool {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 struct vbva_query_mode_hints* FUNC_1 (struct gen_pool*,int,int ,int ) ;
 int FUNC_2 (struct gen_pool*,struct vbva_query_mode_hints*) ;
 int FUNC_3 (struct gen_pool*,struct vbva_query_mode_hints*) ;
 int FUNC_4 (struct vbva_modehint*,int *,size_t) ;

int FUNC_5(struct gen_pool *VAR_6, unsigned int VAR_7,
    struct vbva_modehint *VAR_8)
{
 struct vbva_query_mode_hints *VAR_9;
 size_t VAR_10;

 if (FUNC_0(!VAR_8))
  return -VAR_0;

 VAR_10 = VAR_7 * sizeof(struct vbva_modehint);
 VAR_9 = FUNC_1(VAR_6, sizeof(*VAR_9) + VAR_10, VAR_3,
          VAR_4);
 if (!VAR_9)
  return -VAR_2;

 VAR_9->hints_queried_count = VAR_7;
 VAR_9->hint_structure_guest_size = sizeof(struct vbva_modehint);
 VAR_9->rc = VAR_5;

 FUNC_3(VAR_6, VAR_9);

 if (VAR_9->rc < 0) {
  FUNC_2(VAR_6, VAR_9);
  return -VAR_1;
 }

 FUNC_4(VAR_8, ((u8 *)VAR_9) + sizeof(struct vbva_query_mode_hints), VAR_10);
 FUNC_2(VAR_6, VAR_9);

 return 0;
}

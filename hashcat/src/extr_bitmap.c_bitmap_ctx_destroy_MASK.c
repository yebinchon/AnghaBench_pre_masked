
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* bitmap_ctx; } ;
typedef TYPE_1__ hashcat_ctx_t ;
struct TYPE_6__ {int enabled; int bitmap_s2_d; int bitmap_s2_c; int bitmap_s2_b; int bitmap_s2_a; int bitmap_s1_d; int bitmap_s1_c; int bitmap_s1_b; int bitmap_s1_a; } ;
typedef TYPE_2__ bitmap_ctx_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

void FUNC_2 (hashcat_ctx_t *VAR_0)
{
  bitmap_ctx_t *VAR_1 = VAR_0->bitmap_ctx;

  if (VAR_1->enabled == 0) return;

  FUNC_0 (VAR_1->bitmap_s1_a);
  FUNC_0 (VAR_1->bitmap_s1_b);
  FUNC_0 (VAR_1->bitmap_s1_c);
  FUNC_0 (VAR_1->bitmap_s1_d);
  FUNC_0 (VAR_1->bitmap_s2_a);
  FUNC_0 (VAR_1->bitmap_s2_b);
  FUNC_0 (VAR_1->bitmap_s2_c);
  FUNC_0 (VAR_1->bitmap_s2_d);

  FUNC_1 (VAR_1, 0, sizeof (bitmap_ctx_t));
}

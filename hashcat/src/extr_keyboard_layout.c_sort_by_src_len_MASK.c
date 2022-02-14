
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ src_len; } ;
typedef TYPE_1__ keyboard_layout_mapping_t ;



__attribute__((used)) static int FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  const keyboard_layout_mapping_t *VAR_2 = (const keyboard_layout_mapping_t *) VAR_0;
  const keyboard_layout_mapping_t *VAR_3 = (const keyboard_layout_mapping_t *) VAR_1;

  return VAR_2->src_len < VAR_3->src_len;
}

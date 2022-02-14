
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_8__ {int salt_len; scalar_t__ salt_buf; } ;
typedef TYPE_2__ salt_t ;
struct TYPE_9__ {int css_cnt; TYPE_1__* css_buf; } ;
typedef TYPE_3__ mask_ctx_t ;
struct TYPE_10__ {TYPE_3__* mask_ctx; } ;
typedef TYPE_4__ hashcat_ctx_t ;
struct TYPE_7__ {int cs_len; int * cs_buf; } ;



__attribute__((used)) static int FUNC_0 (hashcat_ctx_t *VAR_0, salt_t *VAR_1)
{
  mask_ctx_t *VAR_2 = VAR_0->mask_ctx;

  u32 VAR_3 = VAR_1->salt_len;
  u8 *VAR_4 = (u8 *) VAR_1->salt_buf;

  if ((VAR_2->css_cnt + VAR_3) > 256) return -1;

  for (u32 VAR_5 = 0, VAR_6 = VAR_2->css_cnt; VAR_5 < VAR_3; VAR_5++, VAR_6++)
  {
    VAR_2->css_buf[VAR_6].cs_buf[0] = VAR_4[VAR_5];
    VAR_2->css_buf[VAR_6].cs_len = 1;

    VAR_2->css_cnt++;
  }

  return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; scalar_t__ result; int offset; } ;
struct vbva_enable_ex {TYPE_1__ base; scalar_t__ screen_id; } ;
struct vbva_buf_ctx {int buffer_offset; } ;
struct gen_pool {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct vbva_enable_ex* FUNC_0 (struct gen_pool*,int,int ,int ) ;
 int FUNC_1 (struct gen_pool*,struct vbva_enable_ex*) ;
 int FUNC_2 (struct gen_pool*,struct vbva_enable_ex*) ;

__attribute__((used)) static bool FUNC_3(struct vbva_buf_ctx *VAR_7,
        struct gen_pool *VAR_8, s32 VAR_9, bool VAR_10)
{
 struct vbva_enable_ex *VAR_11;
 bool VAR_12;

 VAR_11 = FUNC_0(VAR_8, sizeof(*VAR_11), VAR_0, VAR_1);
 if (!VAR_11)
  return 0;

 VAR_11->base.flags = VAR_10 ? VAR_4 : VAR_3;
 VAR_11->base.offset = VAR_7->buffer_offset;
 VAR_11->base.result = VAR_6;
 if (VAR_9 >= 0) {
  VAR_11->base.flags |= VAR_5 | VAR_2;
  VAR_11->screen_id = VAR_9;
 }

 FUNC_2(VAR_8, VAR_11);

 if (VAR_10)
  VAR_12 = VAR_11->base.result >= 0;
 else
  VAR_12 = 1;

 FUNC_1(VAR_8, VAR_11);

 return VAR_12;
}

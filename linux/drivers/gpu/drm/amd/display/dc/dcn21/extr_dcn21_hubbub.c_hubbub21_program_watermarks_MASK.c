
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hubbub {TYPE_3__* ctx; } ;
struct dcn_watermark_set {int dummy; } ;
struct dcn20_hubbub {int dummy; } ;
struct TYPE_6__ {TYPE_2__* dc; } ;
struct TYPE_4__ {int disable_stutter; } ;
struct TYPE_5__ {TYPE_1__ debug; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int,int ,int) ;
 struct dcn20_hubbub* FUNC_3 (struct hubbub*) ;
 int FUNC_4 (struct hubbub*,int) ;
 int FUNC_5 (struct hubbub*,struct dcn_watermark_set*,unsigned int,int) ;
 int FUNC_6 (struct hubbub*,struct dcn_watermark_set*,unsigned int,int) ;
 int FUNC_7 (struct hubbub*,struct dcn_watermark_set*,unsigned int,int) ;

void FUNC_8(
  struct hubbub *VAR_6,
  struct dcn_watermark_set *VAR_7,
  unsigned int VAR_8,
  bool VAR_9)
{
 struct dcn20_hubbub *VAR_10 = FUNC_3(VAR_6);

 FUNC_7(VAR_6, VAR_7, VAR_8, VAR_9);
 FUNC_6(VAR_6, VAR_7, VAR_8, VAR_9);
 FUNC_5(VAR_6, VAR_7, VAR_8, VAR_9);
 FUNC_0(VAR_5, 0,
   VAR_5, 60 * VAR_8);
 FUNC_2(VAR_0,
   VAR_3, 0x1FF,
   VAR_4, 0xA);
 FUNC_1(VAR_1,
   VAR_2, 0xF);

 FUNC_4(VAR_6, !VAR_6->ctx->dc->debug.disable_stutter);
}

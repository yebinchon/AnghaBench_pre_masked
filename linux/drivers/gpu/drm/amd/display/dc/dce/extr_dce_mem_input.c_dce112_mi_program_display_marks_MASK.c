
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct mem_input {TYPE_3__* ctx; } ;
struct dce_watermarks {int d_mark; int c_mark; int b_mark; int a_mark; } ;
struct dce_mem_input {int dummy; } ;
struct TYPE_6__ {TYPE_2__* dc; } ;
struct TYPE_4__ {scalar_t__ disable_stutter; } ;
struct TYPE_5__ {TYPE_1__ debug; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct dce_mem_input* FUNC_1 (struct mem_input*) ;
 int FUNC_2 (struct dce_mem_input*,int,int ) ;
 int FUNC_3 (struct dce_mem_input*,int,int ) ;
 int FUNC_4 (struct dce_mem_input*,int,int ,int) ;

__attribute__((used)) static void FUNC_5(struct mem_input *VAR_3,
 struct dce_watermarks VAR_4,
 struct dce_watermarks VAR_5,
 struct dce_watermarks VAR_6,
 struct dce_watermarks VAR_7,
 uint32_t VAR_8)
{
 struct dce_mem_input *VAR_9 = FUNC_1(VAR_3);
 uint32_t VAR_10 = VAR_3->ctx->dc->debug.disable_stutter ? 0 : 1;

 FUNC_4(VAR_9, 0,
   VAR_7.a_mark, VAR_8);
 FUNC_4(VAR_9, 1,
   VAR_7.b_mark, VAR_8);
 FUNC_4(VAR_9, 2,
   VAR_7.c_mark, VAR_8);
 FUNC_4(VAR_9, 3,
   VAR_7.d_mark, VAR_8);

 FUNC_0(VAR_0,
  VAR_1, VAR_10,
  VAR_2, 1);
 FUNC_2(VAR_9, 0, VAR_4.a_mark);
 FUNC_2(VAR_9, 1, VAR_4.b_mark);
 FUNC_2(VAR_9, 2, VAR_4.c_mark);
 FUNC_2(VAR_9, 3, VAR_4.d_mark);

 FUNC_3(VAR_9, 0, VAR_5.a_mark);
 FUNC_3(VAR_9, 1, VAR_5.b_mark);
 FUNC_3(VAR_9, 2, VAR_5.c_mark);
 FUNC_3(VAR_9, 3, VAR_5.d_mark);
}

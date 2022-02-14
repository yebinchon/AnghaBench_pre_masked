
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef unsigned int u16 ;
struct TYPE_3__ {unsigned int hactive; unsigned int vactive; } ;
struct dsi_data {unsigned int update_channel; unsigned int line_buffer_size; int te_timer; scalar_t__ te_enabled; int output; int framedone_timeout_work; TYPE_2__* dss; int pix_fmt; TYPE_1__ vm; } ;
struct TYPE_4__ {int dispc; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned int const) ;
 int FUNC_2 (char*,unsigned int,unsigned int) ;
 int FUNC_3 (int ,int,int,int) ;
 int FUNC_4 (unsigned int,int,int ) ;
 int VAR_2 ;
 int FUNC_5 (struct dsi_data*,int ,int ,int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct dsi_data*) ;
 int FUNC_9 (struct dsi_data*,unsigned int const,int ) ;
 int FUNC_10 (struct dsi_data*,unsigned int const) ;
 int FUNC_11 (struct dsi_data*,unsigned int const,int ,unsigned int,int ) ;
 int FUNC_12 (struct dsi_data*,int ,int ) ;
 int FUNC_13 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_14 (int *,scalar_t__) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_17(struct dsi_data *VAR_4)
{
 unsigned int VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10;
 u32 VAR_11;
 int VAR_12;
 const unsigned VAR_13 = VAR_4->update_channel;
 const unsigned int VAR_14 = VAR_4->line_buffer_size;
 u16 VAR_15 = VAR_4->vm.hactive;
 u16 VAR_16 = VAR_4->vm.vactive;

 FUNC_2("dsi_update_screen_dispc(%dx%d)\n", VAR_15, VAR_16);

 FUNC_9(VAR_4, VAR_13, VAR_1);

 VAR_5 = FUNC_7(VAR_4->pix_fmt) / 8;
 VAR_6 = VAR_15 * VAR_5;
 VAR_7 = VAR_6 * VAR_16;




 if (VAR_7 < VAR_14)
  VAR_9 = VAR_7;
 else
  VAR_9 = (VAR_14) / VAR_6 * VAR_6;

 VAR_10 = VAR_9 + 1;
 VAR_8 = (VAR_7 / VAR_9) * VAR_10;

 if (VAR_7 % VAR_9)
  VAR_8 += (VAR_7 % VAR_9) + 1;

 VAR_11 = FUNC_4(VAR_8, 23, 0);
 FUNC_12(VAR_4, FUNC_1(VAR_13), VAR_11);

 FUNC_11(VAR_4, VAR_13, VAR_2,
  VAR_10, 0);

 if (VAR_4->te_enabled)
  VAR_11 = FUNC_3(VAR_11, 1, 30, 30);
 else
  VAR_11 = FUNC_3(VAR_11, 1, 31, 31);
 FUNC_12(VAR_4, FUNC_1(VAR_13), VAR_11);







 FUNC_6(VAR_4->dss->dispc);

 FUNC_8(VAR_4);

 VAR_12 = FUNC_16(&VAR_4->framedone_timeout_work,
  FUNC_15(250));
 FUNC_0(VAR_12 == 0);

 FUNC_13(&VAR_4->output);

 if (VAR_4->te_enabled) {


  FUNC_5(VAR_4, VAR_0, 0, 15, 15);

  FUNC_10(VAR_4, VAR_13);




 }
}

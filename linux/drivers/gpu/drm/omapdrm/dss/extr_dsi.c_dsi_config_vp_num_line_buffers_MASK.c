
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videomode {int hactive; } ;
struct dsi_data {scalar_t__ mode; int line_buffer_size; struct videomode vm; int pix_fmt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct dsi_data*,int ,int,int,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct dsi_data *VAR_2)
{
 int VAR_3;

 if (VAR_2->mode == VAR_1) {
  int VAR_4 = FUNC_1(VAR_2->pix_fmt);
  const struct videomode *VAR_5 = &VAR_2->vm;




  if (VAR_2->line_buffer_size <= VAR_5->hactive * VAR_4 / 8)
   VAR_3 = 0;
  else
   VAR_3 = 2;
 } else {

  VAR_3 = 2;
 }


 FUNC_0(VAR_2, VAR_0, VAR_3, 13, 12);
}

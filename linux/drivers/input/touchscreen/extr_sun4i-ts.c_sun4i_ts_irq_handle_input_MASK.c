
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sun4i_ts_data {int ignore_fifo_data; int input; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct sun4i_ts_data *VAR_6, u32 VAR_7)
{
 u32 VAR_8, VAR_9;

 if (VAR_7 & VAR_3) {
  VAR_8 = FUNC_3(VAR_6->base + VAR_4);
  VAR_9 = FUNC_3(VAR_6->base + VAR_4);

  if (!VAR_6->ignore_fifo_data) {
   FUNC_0(VAR_6->input, VAR_0, VAR_8);
   FUNC_0(VAR_6->input, VAR_1, VAR_9);





   FUNC_1(VAR_6->input, VAR_2, 1);
   FUNC_2(VAR_6->input);
  } else {
   VAR_6->ignore_fifo_data = 0;
  }
 }

 if (VAR_7 & VAR_5) {
  VAR_6->ignore_fifo_data = 1;
  FUNC_1(VAR_6->input, VAR_2, 0);
  FUNC_2(VAR_6->input);
 }
}

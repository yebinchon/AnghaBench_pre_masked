
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct dce_hwseq {int dummy; } ;
struct clock_source {scalar_t__ id; scalar_t__ dp_clk_src; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,scalar_t__,unsigned int) ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,scalar_t__,int ,int ) ;

void FUNC_4(struct dce_hwseq *VAR_10,
  struct clock_source *VAR_11,
  unsigned int VAR_12)
{
 if (VAR_11->id == VAR_1 || VAR_11->dp_clk_src) {
  FUNC_2(VAR_7[VAR_12],
    VAR_4, 1);

 } else if (VAR_11->id >= VAR_0) {
  uint32_t VAR_13 = VAR_11->id - VAR_0;

  FUNC_3(VAR_5[VAR_12],
    VAR_6, VAR_13,
    VAR_8, 0);

  FUNC_2(VAR_7[VAR_12],
    VAR_4, 0);

 } else if (VAR_11->id <= VAR_3) {
  uint32_t VAR_14 = VAR_11->id - VAR_2;

  FUNC_3(VAR_7[VAR_12],
    VAR_9, VAR_14,
    VAR_4, 0);

  if (FUNC_1(VAR_5[VAR_12]))
   FUNC_2(VAR_5[VAR_12],
     VAR_8, 1);
 } else {
  FUNC_0("Unknown clock source. clk_src id: %d, TG_inst: %d",
         VAR_11->id, VAR_12);
 }
}

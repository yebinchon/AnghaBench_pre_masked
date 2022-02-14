
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edt_reg_addr {scalar_t__ reg_threshold; scalar_t__ reg_gain; scalar_t__ reg_offset; scalar_t__ reg_offset_x; scalar_t__ reg_offset_y; scalar_t__ reg_report_rate; scalar_t__ reg_num_x; scalar_t__ reg_num_y; } ;
struct edt_ft5x06_ts_data {scalar_t__ version; int num_x; int num_y; void* report_rate; void* offset_y; void* offset_x; void* offset; void* gain; void* threshold; struct edt_reg_addr reg_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (struct edt_ft5x06_ts_data*,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct edt_ft5x06_ts_data *VAR_4)
{
 struct edt_reg_addr *VAR_5 = &VAR_4->reg_addr;

 VAR_4->threshold = FUNC_0(VAR_4,
           VAR_5->reg_threshold);
 VAR_4->gain = FUNC_0(VAR_4, VAR_5->reg_gain);
 if (VAR_5->reg_offset != VAR_3)
  VAR_4->offset =
   FUNC_0(VAR_4, VAR_5->reg_offset);
 if (VAR_5->reg_offset_x != VAR_3)
  VAR_4->offset_x = FUNC_0(VAR_4,
      VAR_5->reg_offset_x);
 if (VAR_5->reg_offset_y != VAR_3)
  VAR_4->offset_y = FUNC_0(VAR_4,
      VAR_5->reg_offset_y);
 if (VAR_5->reg_report_rate != VAR_3)
  VAR_4->report_rate = FUNC_0(VAR_4,
      VAR_5->reg_report_rate);
 if (VAR_4->version == VAR_0 ||
     VAR_4->version == VAR_1 ||
     VAR_4->version == VAR_2) {
  VAR_4->num_x = FUNC_0(VAR_4,
        VAR_5->reg_num_x);
  VAR_4->num_y = FUNC_0(VAR_4,
        VAR_5->reg_num_y);
 } else {
  VAR_4->num_x = -1;
  VAR_4->num_y = -1;
 }
}

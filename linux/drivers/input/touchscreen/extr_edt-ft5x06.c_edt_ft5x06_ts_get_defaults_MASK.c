
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct edt_reg_addr {int reg_offset_y; int reg_offset_x; int reg_offset; int reg_gain; int reg_threshold; } ;
struct edt_ft5x06_ts_data {void* offset_y; void* offset_x; void* offset; void* gain; void* threshold; struct edt_reg_addr reg_addr; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,void**) ;
 int FUNC_1 (struct edt_ft5x06_ts_data*,int ,void*) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0,
           struct edt_ft5x06_ts_data *VAR_1)
{
 struct edt_reg_addr *VAR_2 = &VAR_1->reg_addr;
 u32 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, "threshold", &VAR_3);
 if (!VAR_4) {
  FUNC_1(VAR_1, VAR_2->reg_threshold, VAR_3);
  VAR_1->threshold = VAR_3;
 }

 VAR_4 = FUNC_0(VAR_0, "gain", &VAR_3);
 if (!VAR_4) {
  FUNC_1(VAR_1, VAR_2->reg_gain, VAR_3);
  VAR_1->gain = VAR_3;
 }

 VAR_4 = FUNC_0(VAR_0, "offset", &VAR_3);
 if (!VAR_4) {
  FUNC_1(VAR_1, VAR_2->reg_offset, VAR_3);
  VAR_1->offset = VAR_3;
 }

 VAR_4 = FUNC_0(VAR_0, "offset-x", &VAR_3);
 if (!VAR_4) {
  FUNC_1(VAR_1, VAR_2->reg_offset_x, VAR_3);
  VAR_1->offset_x = VAR_3;
 }

 VAR_4 = FUNC_0(VAR_0, "offset-y", &VAR_3);
 if (!VAR_4) {
  FUNC_1(VAR_1, VAR_2->reg_offset_y, VAR_3);
  VAR_1->offset_y = VAR_3;
 }
}

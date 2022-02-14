
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct dsi_data {int module_id; int syscon; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct dsi_data *VAR_10, unsigned int VAR_11)
{
 u32 VAR_12, VAR_13;
 u32 VAR_14, VAR_15;

 if (VAR_10->module_id == 0) {
  VAR_12 = VAR_1;
  VAR_13 = VAR_2;
  VAR_14 = VAR_3;
  VAR_15 = VAR_4;
 } else if (VAR_10->module_id == 1) {
  VAR_12 = VAR_5;
  VAR_13 = VAR_6;
  VAR_14 = VAR_7;
  VAR_15 = VAR_8;
 } else {
  return -VAR_0;
 }

 return FUNC_0(VAR_10->syscon, VAR_9,
  VAR_12 | VAR_14,
  (VAR_11 << VAR_13) | (VAR_11 << VAR_15));
}

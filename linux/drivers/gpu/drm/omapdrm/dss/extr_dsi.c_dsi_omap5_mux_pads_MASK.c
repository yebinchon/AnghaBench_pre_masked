
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct dsi_data {int module_id; int syscon; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int ,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct dsi_data *VAR_5, unsigned int VAR_6)
{
 u32 VAR_7;

 if (VAR_5->module_id == 0)
  VAR_7 = VAR_1;
 else if (VAR_5->module_id == 1)
  VAR_7 = VAR_2;
 else
  return -VAR_0;

 return FUNC_0(VAR_5->syscon, VAR_3,
  VAR_4 << VAR_7,
  VAR_6 << VAR_7);
}

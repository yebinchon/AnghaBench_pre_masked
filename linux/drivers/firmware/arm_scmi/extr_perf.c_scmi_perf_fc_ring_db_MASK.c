
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct scmi_fc_db_info {int width; int mask; int addr; int set; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct scmi_fc_db_info *VAR_0)
{
 if (!VAR_0 || !VAR_0->addr)
  return;

 if (VAR_0->width == 1)
  FUNC_0(8);
 else if (VAR_0->width == 2)
  FUNC_0(16);
 else if (VAR_0->width == 4)
  FUNC_0(32);
 else



 {
  u64 VAR_1 = 0;

  if (VAR_0->mask)
   VAR_1 = FUNC_1(VAR_0->addr) & VAR_0->mask;
  FUNC_2(VAR_0->set, VAR_0->addr);
 }

}

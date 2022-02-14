
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct host1x_firewall {scalar_t__ words; int offset; scalar_t__ reg; scalar_t__ count; } ;


 int VAR_0 ;
 int FUNC_0 (struct host1x_firewall*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct host1x_firewall *VAR_1)
{
 u32 VAR_2 = VAR_1->count;
 u32 VAR_3 = VAR_1->reg;
 int VAR_4;

 while (VAR_2) {
  if (VAR_1->words == 0)
   return -VAR_0;

  VAR_4 = FUNC_0(VAR_1, VAR_3);
  if (VAR_4 < 0)
   return VAR_4;

  VAR_3++;
  VAR_1->words--;
  VAR_1->offset++;
  VAR_2--;
 }

 return 0;
}

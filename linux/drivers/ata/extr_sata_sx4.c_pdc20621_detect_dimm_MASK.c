
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ata_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ata_host*,int ,int,int*) ;

__attribute__((used)) static int FUNC_1(struct ata_host *VAR_2)
{
 u32 VAR_3 = 0;
 if (FUNC_0(VAR_2, VAR_0,
        VAR_1, &VAR_3)) {
  if (VAR_3 == 100)
   return 100;
 } else
  return 0;

 if (FUNC_0(VAR_2, VAR_0, 9, &VAR_3)) {
  if (VAR_3 <= 0x75)
   return 133;
 } else
  return 0;

 return 0;
}

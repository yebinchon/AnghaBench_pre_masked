
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ata_device {int* id; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u32 FUNC_0(const struct ata_device *VAR_3)
{

 if (VAR_3->id[VAR_1] & 2) {
  u16 VAR_4 = VAR_3->id[VAR_0];

  if (VAR_4) {

   if (VAR_4 > 240)
    return 3 << VAR_2;
   return 7 << VAR_2;
  }
 }
 return 3 << VAR_2;
}

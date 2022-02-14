
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_2__ {int * fixed_ranges; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static u8 FUNC_0(u64 VAR_2, u64 VAR_3)
{
 int VAR_4;

 if (VAR_2 >= 0x100000)
  return VAR_0;


 if (VAR_2 < 0x80000) {
  VAR_4 = 0;
  VAR_4 += (VAR_2 >> 16);
  return VAR_1.fixed_ranges[VAR_4];

 } else if (VAR_2 < 0xC0000) {
  VAR_4 = 1 * 8;
  VAR_4 += ((VAR_2 - 0x80000) >> 14);
  return VAR_1.fixed_ranges[VAR_4];
 }


 VAR_4 = 3 * 8;
 VAR_4 += ((VAR_2 - 0xC0000) >> 12);
 return VAR_1.fixed_ranges[VAR_4];
}

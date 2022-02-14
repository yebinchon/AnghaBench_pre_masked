
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct malidp_hw_device {int min_line_size; int max_line_size; int* rotation_memory; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct malidp_hw_device*,int ) ;

__attribute__((used)) static int FUNC_1(struct malidp_hw_device *VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_4, VAR_1);
 u8 VAR_6 = (VAR_5 >> 4) & 0x3, VAR_7;

 VAR_4->min_line_size = 4;

 switch (VAR_6) {
 case 0:
 case 2:

  VAR_4->max_line_size = 0;
  return -VAR_0;
 case 1:
  VAR_4->max_line_size = VAR_3;

  VAR_7 = 128;
  break;
 case 3:
  VAR_4->max_line_size = 2560;

  VAR_7 = 80;
 }

 VAR_4->rotation_memory[0] = VAR_4->rotation_memory[1] = VAR_7 * VAR_2;
 return 0;
}

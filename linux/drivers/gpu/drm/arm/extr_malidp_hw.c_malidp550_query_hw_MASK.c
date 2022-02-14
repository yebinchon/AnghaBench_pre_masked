
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
 int VAR_4 ;
 int FUNC_0 (struct malidp_hw_device*,int ) ;

__attribute__((used)) static int FUNC_1(struct malidp_hw_device *VAR_5)
{
 u32 VAR_6 = FUNC_0(VAR_5, VAR_1);
 u8 VAR_7 = (VAR_6 >> 4) & 0x3, VAR_8;

 VAR_5->min_line_size = 2;

 switch (VAR_7) {
 case 0:
  VAR_5->max_line_size = VAR_3;

  VAR_8 = 64;
  break;
 case 1:
  VAR_5->max_line_size = VAR_4;

  VAR_8 = 128;
  break;
 case 2:
  VAR_5->max_line_size = 1280;

  VAR_8 = 40;
  break;
 case 3:

  VAR_5->max_line_size = 0;
  return -VAR_0;
 }

 VAR_5->rotation_memory[0] = VAR_5->rotation_memory[1] = VAR_8 * VAR_2;
 return 0;
}

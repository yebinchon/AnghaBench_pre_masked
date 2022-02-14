
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
 int FUNC_0 (struct malidp_hw_device*,int ) ;

__attribute__((used)) static int FUNC_1(struct malidp_hw_device *VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_3, VAR_0);

 u8 VAR_5 = VAR_4 & 0x10 ? 2 : 1;

 VAR_3->min_line_size = 2;
 VAR_3->max_line_size = VAR_2 * VAR_5;
 VAR_3->rotation_memory[0] = VAR_1 * 64 * VAR_5;
 VAR_3->rotation_memory[1] = 0;

 return 0;
}

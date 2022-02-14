
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fpga_manager {struct a10_fpga_priv* priv; } ;
struct a10_fpga_priv {int fpga_data_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct fpga_manager *VAR_2, const char *VAR_3,
      size_t VAR_4)
{
 struct a10_fpga_priv *VAR_5 = VAR_2->priv;
 u32 *VAR_6 = (u32 *)VAR_3;
 size_t VAR_7 = 0;

 if (VAR_4 <= 0)
  return -VAR_1;


 while (VAR_4 >= sizeof(u32)) {
  FUNC_0(VAR_6[VAR_7++], VAR_5->fpga_data_addr);
  VAR_4 -= sizeof(u32);
 }


 switch (VAR_4) {
 case 3:
  FUNC_0(VAR_6[VAR_7++] & 0x00ffffff, VAR_5->fpga_data_addr);
  break;
 case 2:
  FUNC_0(VAR_6[VAR_7++] & 0x0000ffff, VAR_5->fpga_data_addr);
  break;
 case 1:
  FUNC_0(VAR_6[VAR_7++] & 0x000000ff, VAR_5->fpga_data_addr);
  break;
 case 0:
  break;
 default:

  return -VAR_0;
 }

 return 0;
}

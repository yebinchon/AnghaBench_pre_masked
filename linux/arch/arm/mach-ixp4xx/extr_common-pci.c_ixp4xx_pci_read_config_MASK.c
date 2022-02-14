
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_bus {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int,int) ;
 int* VAR_4 ;
 int FUNC_3 (int ,unsigned int,int) ;
 scalar_t__ FUNC_4 (int,int,int*) ;
 int FUNC_5 (char*,int,...) ;

__attribute__((used)) static int FUNC_6(struct pci_bus *VAR_5, unsigned int VAR_6, int VAR_7, int VAR_8, u32 *VAR_9)
{
 u32 VAR_10, VAR_11, VAR_12, VAR_13;
 u8 VAR_14 = VAR_5->number;

 FUNC_5("read_config from %d size %d dev %d:%d:%d\n", VAR_7, VAR_8,
  VAR_14, FUNC_1(VAR_6), FUNC_0(VAR_6));

 *VAR_9 = 0xffffffff;
 VAR_10 = VAR_7 % 4;
 VAR_11 = FUNC_2(VAR_10, VAR_8);
 if (VAR_11 == 0xffffffff)
  return VAR_1;

 VAR_12 = FUNC_3(VAR_14, VAR_6, VAR_7);
 if (FUNC_4(VAR_12, VAR_11 | VAR_0, &VAR_13))
  return VAR_2;

 *VAR_9 = (VAR_13 >> (8*VAR_10)) & VAR_4[VAR_8];
 FUNC_5("read_config_byte read %#x\n", *VAR_9);
 return VAR_3;
}

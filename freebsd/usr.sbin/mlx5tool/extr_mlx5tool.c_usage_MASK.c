
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(void)
{

 FUNC_1(VAR_0,
     "Usage: mlx5tool -d pci<d:b:s:f> [-w -o dump.file | -r |"
     " -e | -f fw.mfa2 | -z]\n");
 FUNC_1(VAR_0, "\t-w - write firmware dump to the specified file\n");
 FUNC_1(VAR_0, "\t-r - reset dump\n");
 FUNC_1(VAR_0, "\t-E - get eeprom info\n");
 FUNC_1(VAR_0, "\t-e - force dump\n");
 FUNC_1(VAR_0, "\t-f fw.img - flash firmware from fw.img\n");
 FUNC_1(VAR_0, "\t-z - initiate firmware reset\n");
 FUNC_0(1);
}

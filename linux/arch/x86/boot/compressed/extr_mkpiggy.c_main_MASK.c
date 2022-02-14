
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int olen ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (scalar_t__*,int,int,int *) ;
 scalar_t__ FUNC_4 (int *,long,int ) ;
 long FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (scalar_t__*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,...) ;
 int VAR_1 ;

int FUNC_9(int VAR_2, char *VAR_3[])
{
 uint32_t VAR_4;
 long VAR_5;
 FILE *VAR_6 = ((void*)0);
 int VAR_7 = 1;

 if (VAR_2 < 2) {
  FUNC_2(VAR_1, "Usage: %s compressed_file\n", VAR_3[0]);
  goto bail;
 }



 VAR_6 = FUNC_1(VAR_3[1], "r");
 if (!VAR_6) {
  FUNC_7(VAR_3[1]);
  goto bail;
 }


 if (FUNC_4(VAR_6, -4L, VAR_0)) {
  FUNC_7(VAR_3[1]);
 }

 if (FUNC_3(&VAR_4, sizeof(VAR_4), 1, VAR_6) != 1) {
  FUNC_7(VAR_3[1]);
  goto bail;
 }

 VAR_5 = FUNC_5(VAR_6);
 VAR_4 = FUNC_6(&VAR_4);

 FUNC_8(".section \".rodata..compressed\",\"a\",@progbits\n");
 FUNC_8(".globl z_input_len\n");
 FUNC_8("z_input_len = %lu\n", VAR_5);
 FUNC_8(".globl z_output_len\n");
 FUNC_8("z_output_len = %lu\n", (unsigned long)VAR_4);

 FUNC_8(".globl input_data, input_data_end\n");
 FUNC_8("input_data:\n");
 FUNC_8(".incbin \"%s\"\n", VAR_3[1]);
 FUNC_8("input_data_end:\n");

 VAR_7 = 0;
bail:
 if (VAR_6)
  FUNC_0(VAR_6);
 return VAR_7;
}

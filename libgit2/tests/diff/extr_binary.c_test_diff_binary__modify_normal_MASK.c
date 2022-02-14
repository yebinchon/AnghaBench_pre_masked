
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_diff_options ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,int *,char const*) ;

void FUNC_2(void)
{
 git_diff_options VAR_2 = VAR_0;
 const char *VAR_3 =
  "diff --git a/binary.bin b/binary.bin\n" "index bd474b2..9ac35ff 100644\n" "Binary files a/binary.bin and b/binary.bin differ\n";



 VAR_1 = FUNC_0("diff_format_email");
 FUNC_1(
  "897d3af16ca9e420cd071b1c4541bd2b91d04c8c",
  "8d7523f6fcb2404257889abe0d96f093d9f524f9",
  &VAR_2,
  VAR_3);
}

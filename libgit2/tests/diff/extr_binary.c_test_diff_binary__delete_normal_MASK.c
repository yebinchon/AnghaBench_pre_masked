
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
  "diff --git a/binary.bin b/binary.bin\n" "deleted file mode 100644\n" "index bd474b2..0000000\n" "Binary files a/binary.bin and /dev/null differ\n";




 VAR_1 = FUNC_0("diff_format_email");
 FUNC_1(
  "897d3af16ca9e420cd071b1c4541bd2b91d04c8c",
  "873806f6f27e631eb0b23e4b56bea2bfac14a373",
  &VAR_2,
  VAR_3);
}

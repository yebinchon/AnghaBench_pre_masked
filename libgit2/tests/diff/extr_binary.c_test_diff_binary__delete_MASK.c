
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id_abbrev; int flags; } ;
typedef TYPE_1__ git_diff_options ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int FUNC_1 (char*,char*,TYPE_1__*,char const*) ;

void FUNC_2(void)
{
 git_diff_options VAR_4 = VAR_0;
 const char *VAR_5 =
  "diff --git a/binary.bin b/binary.bin\n" "deleted file mode 100644\n" "index bd474b2519cc15eab801ff851cc7d50f0dee49a1..0000000000000000000000000000000000000000\n" "GIT binary patch\n" "literal 0\n" "Hc$@<O00001\n" "\n" "literal 3\n" "Kc${Nk-~s>u4FC%O\n" "\n";
 VAR_4.flags = VAR_1;
 VAR_4.id_abbrev = VAR_2;

 VAR_3 = FUNC_0("diff_format_email");
 FUNC_1(
  "897d3af16ca9e420cd071b1c4541bd2b91d04c8c",
  "873806f6f27e631eb0b23e4b56bea2bfac14a373",
  &VAR_4,
  VAR_5);
}

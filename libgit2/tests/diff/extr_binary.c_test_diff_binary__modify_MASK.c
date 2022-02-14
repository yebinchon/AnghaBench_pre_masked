
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ git_diff_options ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (char*,char*,TYPE_1__*,char const*) ;

void FUNC_2(void)
{
 git_diff_options VAR_3 = VAR_0;
 const char *VAR_4 =
  "diff --git a/binary.bin b/binary.bin\n" "index bd474b2519cc15eab801ff851cc7d50f0dee49a1..9ac35ff15cd8864aeafd889e4826a3150f0b06c4 100644\n" "GIT binary patch\n" "literal 5\n" "Mc${NkU}WL~000&M4gdfE\n" "\n" "literal 3\n" "Kc${Nk-~s>u4FC%O\n" "\n";
 VAR_3.flags = VAR_1;

 VAR_2 = FUNC_0("diff_format_email");
 FUNC_1(
  "897d3af16ca9e420cd071b1c4541bd2b91d04c8c",
  "8d7523f6fcb2404257889abe0d96f093d9f524f9",
  &VAR_3,
  VAR_4);
}

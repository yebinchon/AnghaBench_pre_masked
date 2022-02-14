
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jump_entry {int dummy; } ;
struct insn {int dummy; } ;


 scalar_t__ FUNC_0 (struct jump_entry*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,unsigned char*,...) ;

__attribute__((used)) static void FUNC_3(struct jump_entry *VAR_0, struct insn *VAR_1,
      struct insn *VAR_2)
{
 unsigned char *VAR_3 = (unsigned char *)FUNC_0(VAR_0);
 unsigned char *VAR_4 = (unsigned char *)VAR_1;
 unsigned char *VAR_5 = (unsigned char *)VAR_2;

 FUNC_2("Jump label code mismatch at %pS [%p]\n", VAR_3, VAR_3);
 FUNC_2("Found:    %6ph\n", VAR_3);
 FUNC_2("Expected: %6ph\n", VAR_4);
 FUNC_2("New:      %6ph\n", VAR_5);
 FUNC_1("Corrupted kernel text");
}

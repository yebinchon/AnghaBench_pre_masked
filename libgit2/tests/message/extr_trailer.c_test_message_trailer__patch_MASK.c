
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* member_0; char* member_1; } ;
typedef TYPE_1__ git_message_trailer ;


 int FUNC_0 (char*,TYPE_1__*) ;

void FUNC_1(void)
{
 git_message_trailer VAR_0[] = {
  {"Key", "value"},
  {((void*)0), ((void*)0)},
 };

 FUNC_0(
  "Message\n"
  "\n"
  "Key: value\n"
  "\n"
  "---\n"
  "More: stuff\n"
 , VAR_0);
}

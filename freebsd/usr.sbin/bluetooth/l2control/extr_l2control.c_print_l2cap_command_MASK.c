
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_command {char* command; } ;


 int FUNC_0 (int ,char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct l2cap_command *VAR_1)
{
 struct l2cap_command *VAR_2 = ((void*)0);

 for (VAR_2 = VAR_1; VAR_2->command != ((void*)0); VAR_2++)
  FUNC_0(VAR_0, "\t%s\n", VAR_2->command);
}

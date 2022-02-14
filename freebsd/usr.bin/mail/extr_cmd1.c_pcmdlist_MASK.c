
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd {char* c_name; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;

int
FUNC_2(void)
{
 extern const struct cmd VAR_0[];
 const struct cmd *VAR_1;
 int VAR_2;

 FUNC_0("Commands are:\n");
 for (VAR_2 = 0, VAR_1 = VAR_0; VAR_1->c_name != ((void*)0); VAR_1++) {
  VAR_2 += FUNC_1(VAR_1->c_name) + 2;
  if (VAR_2 > 72) {
   FUNC_0("\n");
   VAR_2 = FUNC_1(VAR_1->c_name) + 2;
  }
  if ((VAR_1+1)->c_name != ((void*)0))
   FUNC_0("%s, ", VAR_1->c_name);
  else
   FUNC_0("%s\n", VAR_1->c_name);
 }
 return (0);
}

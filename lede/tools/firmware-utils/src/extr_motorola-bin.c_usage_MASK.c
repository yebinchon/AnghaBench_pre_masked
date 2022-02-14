
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct model {char digit; char* name; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 struct model* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(const char *VAR_2)
{
 const struct model *VAR_3;

 FUNC_1(VAR_1, "Error: %s\n", VAR_2);
 FUNC_1(VAR_1, "Usage: motorola-bin -device|--strip infile outfile\n");
 FUNC_1(VAR_1, "Known devices: ");

 for (VAR_3 = VAR_0; VAR_3->digit != '\0'; VAR_3++)
  FUNC_1(VAR_1, " %c - %s", VAR_3->digit, VAR_3->name);

 FUNC_1(VAR_1, "\n");
 FUNC_0(1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printer {char* printer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct printer*,char*,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct printer*,char*,int ) ;

void
FUNC_4(struct printer *VAR_2)
{
 int VAR_3;
 char VAR_4[VAR_0];

 FUNC_0(VAR_2, VAR_4, sizeof VAR_4);
 FUNC_1("%s:\n", VAR_2->printer);

 VAR_3 = FUNC_2(VAR_1, VAR_4);

 if (VAR_3 >= 0)
  FUNC_3(VAR_2, "printing disabled\n", 0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printer {char* printer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct printer*,char*,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (scalar_t__,char*) ;
 int FUNC_3 (struct printer*,int ,int) ;

void
FUNC_4(struct printer *VAR_4)
{
 int VAR_5;
 char VAR_6[VAR_0];

 FUNC_0(VAR_4, VAR_6, sizeof VAR_6);
 FUNC_1("%s:\n", VAR_4->printer);

 VAR_5 = FUNC_2(VAR_1+VAR_2, VAR_6);
 if (VAR_5 >= 0)
  FUNC_3(VAR_4, VAR_3, 1);
}

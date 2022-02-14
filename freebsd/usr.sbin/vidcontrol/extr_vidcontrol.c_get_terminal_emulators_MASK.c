
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct term_info {char* ti_name; char* ti_desc; } ;


 scalar_t__ FUNC_0 (int,struct term_info*) ;
 int FUNC_1 (char*,int,char*,char*,char*) ;

__attribute__((used)) static void
FUNC_2(void)
{
 struct term_info VAR_0;
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < 10; VAR_1++) {
  if (FUNC_0(VAR_1, &VAR_0) == 0)
   break;
  FUNC_1("%d: %s (%s)%s\n", VAR_1, VAR_0.ti_name, VAR_0.ti_desc,
      VAR_1 == 0 ? " (active)" : "");
 }
}

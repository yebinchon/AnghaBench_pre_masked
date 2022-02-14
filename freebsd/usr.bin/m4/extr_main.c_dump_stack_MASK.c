
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct position {char* name; int line; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct position *VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  if (VAR_4 == VAR_0) {
   FUNC_0(VAR_1, "   ...\n");
   break;
  }
  FUNC_0(VAR_1, "   %s at line %d\n",
   VAR_2[VAR_4].name, VAR_2[VAR_4].line);
 }
}

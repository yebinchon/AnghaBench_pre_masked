
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; char* desc; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(int VAR_2, char *VAR_3[])
{
 int VAR_4;

 if (VAR_2 != 1) {
  VAR_4 = 1;
  while (VAR_4 < VAR_2)
   VAR_0 ^= FUNC_0(VAR_3[VAR_4++]);
 }
 FUNC_2("The following debugging is enabled: %s\n", FUNC_1(VAR_0));

 FUNC_2("\nThe following debugs are available:\n");
 VAR_4 = 0;
 while (VAR_1[VAR_4].name != ((void*)0)) {
  FUNC_2("\t%s\t%s\n", VAR_1[VAR_4].name, VAR_1[VAR_4].desc);
  VAR_4++;
 }
}

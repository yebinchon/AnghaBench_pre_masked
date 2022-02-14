
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mkimg_scheme {char* name; char* description; } ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*,char const*,char*) ;
 int FUNC_2 (char) ;
 struct mkimg_scheme* FUNC_3 (struct mkimg_scheme*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(int VAR_1)
{
 struct mkimg_scheme *VAR_2;
 const char *VAR_3;

 if (VAR_1) {
  FUNC_0(VAR_0, "    schemes:\n");
  VAR_2 = ((void*)0);
  while ((VAR_2 = FUNC_3(VAR_2)) != ((void*)0)) {
   FUNC_0(VAR_0, "\t%s\t-  %s\n", VAR_2->name,
       VAR_2->description);
  }
 } else {
  VAR_3 = "";
  VAR_2 = ((void*)0);
  while ((VAR_2 = FUNC_3(VAR_2)) != ((void*)0)) {
   FUNC_1("%s%s", VAR_3, VAR_2->name);
   VAR_3 = " ";
  }
  FUNC_2('\n');
 }
}

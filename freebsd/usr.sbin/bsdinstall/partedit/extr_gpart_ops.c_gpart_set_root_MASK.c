
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;


 int FUNC_0 (struct gctl_req*) ;
 struct gctl_req* FUNC_1 () ;
 char* FUNC_2 (struct gctl_req*) ;
 int FUNC_3 (struct gctl_req*,char*,int,char const*) ;
 int FUNC_4 (char*,char*,char const*) ;

void
FUNC_5(const char *VAR_0, const char *VAR_1)
{
 struct gctl_req *VAR_2;
 const char *VAR_3;

 VAR_2 = FUNC_1();
 FUNC_3(VAR_2, "class", -1, "PART");
 FUNC_3(VAR_2, "arg0", -1, VAR_0);
 FUNC_3(VAR_2, "flags", -1, "C");
 FUNC_3(VAR_2, "verb", -1, "set");
 FUNC_3(VAR_2, "attrib", -1, VAR_1);

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 != ((void*)0) && VAR_3[0] != '\0')
  FUNC_4("Error", "Error setting parameter on disk:",
      VAR_3);
 FUNC_0(VAR_2);
}

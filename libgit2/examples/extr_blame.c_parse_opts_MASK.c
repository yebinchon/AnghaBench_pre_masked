
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opts {int M; int C; int F; char* commitspec; char* path; int end_line; int start_line; } ;


 int FUNC_0 (scalar_t__,char*,int *) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (char*,char*,char*,char*) ;
 scalar_t__ FUNC_3 (char*,char*,int *,int *) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int *) ;

__attribute__((used)) static void FUNC_7(struct opts *VAR_0, int VAR_1, char *VAR_2[])
{
 int VAR_3;
 char *VAR_4[3] = {0};

 if (VAR_1 < 2) FUNC_6(((void*)0), ((void*)0));

 for (VAR_3=1; VAR_3<VAR_1; VAR_3++) {
  char *VAR_5 = VAR_2[VAR_3];

  if (VAR_5[0] != '-') {
   int VAR_6=0;
   while (VAR_4[VAR_6] && VAR_6 < 3) ++VAR_6;
   if (VAR_6 >= 3)
    FUNC_6("Invalid argument set", ((void*)0));
   VAR_4[VAR_6] = VAR_5;
  }
  else if (!FUNC_5(VAR_5, "--"))
   continue;
  else if (!FUNC_4(VAR_5, "-M"))
   VAR_0->M = 1;
  else if (!FUNC_4(VAR_5, "-C"))
   VAR_0->C = 1;
  else if (!FUNC_4(VAR_5, "-F"))
   VAR_0->F = 1;
  else if (!FUNC_4(VAR_5, "-L")) {
   VAR_3++; VAR_5 = VAR_2[VAR_3];
   if (VAR_3 >= VAR_1) FUNC_1("Not enough arguments to -L", ((void*)0));
   FUNC_0(FUNC_3(VAR_5, "%d,%d", &VAR_0->start_line, &VAR_0->end_line)-2, "-L format error", ((void*)0));
  }
  else {

   if (VAR_0->commitspec) FUNC_1("Only one commit spec allowed", ((void*)0));
   VAR_0->commitspec = VAR_5;
  }
 }


 if (!VAR_4[0]) FUNC_6("Please specify a path", ((void*)0));
 VAR_0->path = VAR_4[0];
 if (VAR_4[1]) {

  VAR_0->path = VAR_4[1];
  VAR_0->commitspec = VAR_4[0];
 }
 if (VAR_4[2]) {

  char VAR_7[128] = {0};
  VAR_0->path = VAR_4[2];
  FUNC_2(VAR_7, "%s..%s", VAR_4[0], VAR_4[1]);
  VAR_0->commitspec = VAR_7;
 }
}

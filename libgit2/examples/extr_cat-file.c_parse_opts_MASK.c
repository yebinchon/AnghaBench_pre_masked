
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opts {char* rev; int verbose; int action; int dir; } ;
struct args_info {int pos; } ;


 struct args_info VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct args_info*,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static void FUNC_3(struct opts *VAR_5, int VAR_6, char *VAR_7[])
{
 struct args_info VAR_8 = VAR_0;

 for (VAR_8.pos = 1; VAR_8.pos < VAR_6; ++VAR_8.pos) {
  char *VAR_9 = VAR_7[VAR_8.pos];

  if (VAR_9[0] != '-') {
   if (VAR_5->rev != ((void*)0))
    FUNC_2("Only one rev should be provided", ((void*)0));
   else
    VAR_5->rev = VAR_9;
  }
  else if (!FUNC_1(VAR_9, "-t"))
   VAR_5->action = VAR_4;
  else if (!FUNC_1(VAR_9, "-s"))
   VAR_5->action = VAR_3;
  else if (!FUNC_1(VAR_9, "-e"))
   VAR_5->action = VAR_1;
  else if (!FUNC_1(VAR_9, "-p"))
   VAR_5->action = VAR_2;
  else if (!FUNC_1(VAR_9, "-q"))
   VAR_5->verbose = 0;
  else if (!FUNC_1(VAR_9, "-v"))
   VAR_5->verbose = 1;
  else if (!FUNC_1(VAR_9, "--help") || !FUNC_1(VAR_9, "-h"))
   FUNC_2(((void*)0), ((void*)0));
  else if (!FUNC_0(&VAR_5->dir, &VAR_8, "--git-dir"))
   FUNC_2("Unknown option", VAR_9);
 }

 if (!VAR_5->action || !VAR_5->rev)
  FUNC_2(((void*)0), ((void*)0));

}

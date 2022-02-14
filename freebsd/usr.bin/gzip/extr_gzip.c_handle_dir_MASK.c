
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fts_info; int fts_statp; int fts_path; } ;
typedef TYPE_1__ FTSENT ;
typedef int FTS ;







 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char**,int,int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static void
FUNC_6(char *VAR_2)
{
 char *VAR_3[2];
 FTS *VAR_4;
 FTSENT *VAR_5;

 VAR_3[0] = VAR_2;
 VAR_3[1] = 0;
 VAR_4 = FUNC_1(VAR_3, VAR_1 | VAR_0, ((void*)0));
 if (VAR_4 == ((void*)0)) {
  FUNC_5("couldn't fts_open %s", VAR_2);
  return;
 }

 while ((VAR_5 = FUNC_2(VAR_4))) {
  switch(VAR_5->fts_info) {
  case 133:
  case 131:
   continue;

  case 132:
  case 130:
  case 128:
   FUNC_4("%s", VAR_5->fts_path);
   continue;
  case 129:
   FUNC_3(VAR_5->fts_path, VAR_5->fts_statp);
  }
 }
 (void)FUNC_0(VAR_4);
}

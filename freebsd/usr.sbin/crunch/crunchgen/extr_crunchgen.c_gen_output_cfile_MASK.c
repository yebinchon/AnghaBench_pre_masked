
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* str; struct TYPE_4__* next; } ;
typedef TYPE_1__ strlst_t ;
struct TYPE_5__ {char* ident; char* name; TYPE_1__* links; struct TYPE_5__* next; } ;
typedef TYPE_2__ prog_t ;
typedef int FILE ;


 char* VAR_0 ;
 int VAR_1 ;
 char** VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,char*,...) ;
 int VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 TYPE_2__* VAR_7 ;
 int FUNC_3 (char*,int,char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*) ;

void
FUNC_6(void)
{
 char **VAR_8;
 FILE *VAR_9;
 prog_t *VAR_10;
 strlst_t *VAR_11;
 char VAR_12[VAR_1];

 FUNC_3(VAR_12, VAR_1, "generating %s", VAR_6);
 FUNC_4(VAR_12);

 if((VAR_9 = FUNC_1(VAR_6, "w")) == ((void*)0)) {
  FUNC_5("%s", VAR_6);
  VAR_4 = 1;
  return;
 }

 FUNC_2(VAR_9,
     "/* %s - generated from %s by crunchgen %s */\n",
     VAR_6, VAR_5, VAR_0);

 FUNC_2(VAR_9, "#define EXECNAME \"%s\"\n", VAR_3);
 for (VAR_8 = VAR_2; *VAR_8 != ((void*)0); VAR_8++)
  FUNC_2(VAR_9, "%s\n", *VAR_8);

 for (VAR_10 = VAR_7; VAR_10 != ((void*)0); VAR_10 = VAR_10->next)
  FUNC_2(VAR_9, "extern int _crunched_%s_stub();\n", VAR_10->ident);

 FUNC_2(VAR_9, "\nstruct stub entry_points[] = {\n");
 for (VAR_10 = VAR_7; VAR_10 != ((void*)0); VAR_10 = VAR_10->next) {
  FUNC_2(VAR_9, "\t{ \"%s\", _crunched_%s_stub },\n",
      VAR_10->name, VAR_10->ident);
  for (VAR_11 = VAR_10->links; VAR_11 != ((void*)0); VAR_11 = VAR_11->next)
   FUNC_2(VAR_9, "\t{ \"%s\", _crunched_%s_stub },\n",
       VAR_11->str, VAR_10->ident);
 }

 FUNC_2(VAR_9, "\t{ EXECNAME, crunched_main },\n");
 FUNC_2(VAR_9, "\t{ NULL, NULL }\n};\n");
 FUNC_0(VAR_9);
}

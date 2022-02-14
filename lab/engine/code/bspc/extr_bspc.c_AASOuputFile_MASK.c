
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* filename; int origname; } ;
typedef TYPE_1__ quakefile_t ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (char*,int) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;

void FUNC_9(quakefile_t *VAR_1, char *VAR_2, char *VAR_3)
{
 char VAR_4[VAR_0];


 if (FUNC_8(VAR_2))
 {
  FUNC_6(VAR_3, VAR_2);

  FUNC_0(VAR_3, VAR_0);
  FUNC_2(VAR_1->origname, &VAR_3[FUNC_8(VAR_3)]);

  FUNC_5(VAR_3, ".aas");
  return;
 }

 FUNC_3(VAR_1->filename, VAR_4);
 if (!FUNC_7(VAR_4, "pk3") || !FUNC_7(VAR_4, "pak") || !FUNC_7(VAR_4, "sin"))
 {
  FUNC_6(VAR_3, VAR_1->filename);
  while(FUNC_8(VAR_3) &&
    VAR_3[FUNC_8(VAR_3)-1] != '\\' &&
    VAR_3[FUNC_8(VAR_3)-1] != '/')
  {
   VAR_3[FUNC_8(VAR_3)-1] = '\0';
  }
  FUNC_5(VAR_3, "maps");
  if (FUNC_4(VAR_3, 0x04)) FUNC_1(VAR_3);

  FUNC_0(VAR_3, VAR_0);
  FUNC_2(VAR_1->origname, &VAR_3[FUNC_8(VAR_3)]);

  FUNC_5(VAR_3, ".aas");
 }
 else
 {
  FUNC_6(VAR_3, VAR_1->filename);
  while(FUNC_8(VAR_3) &&
    VAR_3[FUNC_8(VAR_3)-1] != '.')
  {
   VAR_3[FUNC_8(VAR_3)-1] = '\0';
  }
  FUNC_5(VAR_3, "aas");
 }
}

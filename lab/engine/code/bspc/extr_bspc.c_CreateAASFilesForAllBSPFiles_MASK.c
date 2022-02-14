
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct _stat {int dummy; } ;
struct TYPE_9__ {char* pakfile; char* origname; struct TYPE_9__* next; } ;
typedef TYPE_1__ quakefile_t ;
struct TYPE_10__ {int gl_pathc; char** gl_pathv; } ;
typedef TYPE_2__ glob_t ;
typedef int foldername ;
typedef int filter ;
struct TYPE_11__ {char* cFileName; } ;
typedef TYPE_3__ WIN32_FIND_DATA ;
typedef scalar_t__ HWND ;


 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (char*,TYPE_3__*) ;
 int FUNC_2 (scalar_t__,TYPE_3__*) ;
 TYPE_1__* FUNC_3 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (char*,char*,char*,int *,int *) ;
 int FUNC_6 (char*,struct stat*) ;
 int FUNC_7 (char*,int ,int *,TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (char*,char*,char*,char*) ;
 int FUNC_10 (char*,struct stat*) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char*,char*) ;
 size_t FUNC_14 (char*) ;

void FUNC_15(char *VAR_3)
{






 glob_t VAR_4;
 struct stat VAR_5;
 int VAR_6;

 char VAR_7[VAR_1], VAR_8[VAR_1], VAR_9[VAR_1];
 char VAR_10[VAR_1], VAR_11[VAR_1], VAR_12[VAR_1];
 quakefile_t *VAR_13, *VAR_14, *VAR_15, *VAR_16, *VAR_17;

 FUNC_12(VAR_7, VAR_3);
 FUNC_0(VAR_7, sizeof(VAR_7));
 FUNC_11(VAR_7, "*");
 FUNC_7(VAR_7, 0, ((void*)0), &VAR_4);
 for (VAR_6 = 0; VAR_6 < VAR_4.gl_pathc; VAR_6++)
 {
  FUNC_12(VAR_12, VAR_4.gl_pathv[VAR_6]);
  FUNC_10(VAR_12, &VAR_5);


  if (VAR_5.st_mode & VAR_2)
  {

   FUNC_0(VAR_12, sizeof(VAR_12));

   FUNC_12(VAR_8, VAR_12);
   FUNC_11(VAR_8, "maps/*.bsp");
   VAR_15 = FUNC_3(VAR_8);
   FUNC_12(VAR_8, VAR_12);
   FUNC_11(VAR_8, "*.pk3/maps/*.bsp");
   VAR_16 = FUNC_3(VAR_8);
   for (VAR_13 = VAR_16; VAR_13; VAR_13 = VAR_13->next) if (!VAR_13->next) break;
   if (VAR_13) VAR_13->next = VAR_15;
   else VAR_16 = VAR_15;

   FUNC_12(VAR_9, VAR_12);
   FUNC_11(VAR_9, "maps/*.aas");
   VAR_15 = FUNC_3(VAR_9);
   FUNC_12(VAR_9, VAR_12);
   FUNC_11(VAR_9, "*.pk3/maps/*.aas");
   VAR_17 = FUNC_3(VAR_9);
   for (VAR_13 = VAR_17; VAR_13; VAR_13 = VAR_13->next) if (!VAR_13->next) break;
   if (VAR_13) VAR_13->next = VAR_15;
   else VAR_17 = VAR_15;

   for (VAR_13 = VAR_16; VAR_13; VAR_13 = VAR_13->next)
   {
    FUNC_9(VAR_10, "%s/%s", VAR_13->pakfile, VAR_13->origname);
    FUNC_4("found %s\n", VAR_10);
    FUNC_12(&VAR_10[FUNC_14(VAR_10)-FUNC_14(".bsp")], ".aas");
    for (VAR_14 = VAR_17; VAR_14; VAR_14 = VAR_14->next)
    {
     FUNC_9(VAR_11, "%s/%s", VAR_14->pakfile, VAR_14->origname);
     if (!FUNC_13(VAR_10, VAR_11))
     {
      FUNC_4("found %s\n", VAR_11);
      break;
     }
    }
   }
  }





 }
 FUNC_8(&VAR_4);

}

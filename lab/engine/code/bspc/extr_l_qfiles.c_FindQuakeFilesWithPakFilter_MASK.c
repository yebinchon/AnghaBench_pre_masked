
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct _stat {int dummy; } ;
struct TYPE_13__ {char* pakfile; char* filename; char* origname; struct TYPE_13__* next; int type; scalar_t__ length; scalar_t__ offset; } ;
typedef TYPE_1__ quakefile_t ;
struct TYPE_14__ {int gl_pathc; char** gl_pathv; } ;
typedef TYPE_2__ glob_t ;
struct TYPE_15__ {char* cFileName; } ;
typedef TYPE_3__ WIN32_FIND_DATA ;
typedef scalar_t__ HWND ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,TYPE_3__*) ;
 int FUNC_3 (scalar_t__,TYPE_3__*) ;
 TYPE_1__* FUNC_4 (char*,char*) ;
 TYPE_1__* FUNC_5 (char*,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (char*) ;
 int VAR_2 ;
 char* FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*,char*,char*,int *,int *) ;
 int FUNC_9 (char*,struct stat*) ;
 int FUNC_10 (char*,int ,int *,TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 TYPE_1__* FUNC_12 (int) ;
 int FUNC_13 (TYPE_1__*,int ,int) ;
 int FUNC_14 (char*,struct stat*) ;
 int FUNC_15 (char*,char*) ;
 int FUNC_16 (char*,char*) ;
 size_t FUNC_17 (char*) ;

quakefile_t *FUNC_18(char *VAR_3, char *VAR_4)
{






 glob_t VAR_5;
 struct stat VAR_6;
 int VAR_7;

 quakefile_t *VAR_8, *VAR_9, *VAR_10;
 char VAR_11[VAR_1], VAR_12[VAR_1], *VAR_13;

 VAR_8 = ((void*)0);
 VAR_9 = ((void*)0);
 if (VAR_3 && FUNC_17(VAR_3))
 {
  FUNC_10(VAR_3, 0, ((void*)0), &VAR_5);
  for (VAR_7 = 0; VAR_7 < VAR_5.gl_pathc; VAR_7++)
  {
   FUNC_16(VAR_11, VAR_5.gl_pathv[VAR_7]);
   FUNC_14(VAR_11, &VAR_6);


   if (VAR_6.st_mode & VAR_2)
   {
    FUNC_16(VAR_12, VAR_3);
    FUNC_0(VAR_12, VAR_1);
    FUNC_15(VAR_12, VAR_4);
    VAR_10 = FUNC_18(((void*)0), VAR_12);
    if (VAR_9) VAR_9->next = VAR_10;
    else VAR_8 = VAR_10;
    VAR_9 = VAR_10;
    while(VAR_9->next) VAR_9 = VAR_9->next;
   }
   else
   {



    VAR_13 = FUNC_7(VAR_11, ".pk3", 1);

    if (VAR_13 && VAR_13 == VAR_11 + FUNC_17(VAR_11) - FUNC_17(".pk3"))
    {
     VAR_10 = FUNC_5(VAR_11, VAR_4);
    }
    else
    {
     VAR_10 = FUNC_4(VAR_11, VAR_4);
    }

    if (VAR_10)
    {
     if (VAR_9) VAR_9->next = VAR_10;
     else VAR_8 = VAR_10;
     VAR_9 = VAR_10;
     while(VAR_9->next) VAR_9 = VAR_9->next;
    }
   }






  }
  FUNC_11(&VAR_5);

 }
 else
 {
  FUNC_10(VAR_4, 0, ((void*)0), &VAR_5);
  for (VAR_7 = 0; VAR_7 < VAR_5.gl_pathc; VAR_7++)
  {
   FUNC_16(VAR_12, VAR_5.gl_pathv[VAR_7]);


   VAR_10 = FUNC_12(sizeof(quakefile_t));
   if (!VAR_10) FUNC_1("out of memory");
   FUNC_13(VAR_10, 0, sizeof(quakefile_t));
   FUNC_16(VAR_10->pakfile, "");
   FUNC_16(VAR_10->filename, VAR_12);
   FUNC_16(VAR_10->origname, VAR_12);
   VAR_10->offset = 0;
   VAR_10->length = 0;
   VAR_10->type = FUNC_6(VAR_12);

   VAR_10->next = ((void*)0);
   if (VAR_9) VAR_9->next = VAR_10;
   else VAR_8 = VAR_10;
   VAR_9 = VAR_10;





  }
  FUNC_11(&VAR_5);

 }
 return VAR_8;
}

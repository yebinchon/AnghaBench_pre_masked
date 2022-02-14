
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct dirent {char* d_name; } ;
typedef int pattern ;
typedef int path ;
struct TYPE_9__ {struct TYPE_9__* next; TYPE_2__* archives; int lang; } ;
typedef TYPE_1__ lmo_catalog_t ;
struct TYPE_10__ {struct TYPE_10__* next; } ;
typedef TYPE_2__ lmo_archive_t ;
typedef int DIR ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char const*) ;
 TYPE_2__* FUNC_4 (char*) ;
 TYPE_1__* FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int * FUNC_7 (char const*) ;
 struct dirent* FUNC_8 (int *) ;
 int FUNC_9 (char*,int,char*,char const*,...) ;

int FUNC_10(const char *VAR_3, const char *VAR_4)
{
 DIR *VAR_5 = ((void*)0);
 char VAR_6[16];
 char VAR_7[VAR_0];
 struct dirent *VAR_8 = ((void*)0);

 lmo_archive_t *VAR_9 = ((void*)0);
 lmo_catalog_t *VAR_10 = ((void*)0);

 if (!FUNC_3(VAR_3))
  return 0;

 if (!VAR_4 || !(VAR_5 = FUNC_7(VAR_4)))
  goto err;

 if (!(VAR_10 = FUNC_5(sizeof(*VAR_10))))
  goto err;

 FUNC_6(VAR_10, 0, sizeof(*VAR_10));

 FUNC_9(VAR_10->lang, sizeof(VAR_10->lang), "%s", VAR_3);
 FUNC_9(VAR_6, sizeof(VAR_6), "*.%s.lmo", VAR_3);

 while ((VAR_8 = FUNC_8(VAR_5)) != ((void*)0))
 {
  if (!FUNC_1(VAR_6, VAR_8->d_name, 0))
  {
   FUNC_9(VAR_7, sizeof(VAR_7), "%s/%s", VAR_4, VAR_8->d_name);
   VAR_9 = FUNC_4(VAR_7);

   if (VAR_9)
   {
    VAR_9->next = VAR_10->archives;
    VAR_10->archives = VAR_9;
   }
  }
 }

 FUNC_0(VAR_5);

 VAR_10->next = VAR_2;
 VAR_2 = VAR_10;

 if (!VAR_1)
  VAR_1 = VAR_10;

 return 0;

err:
 if (VAR_5) FUNC_0(VAR_5);
 if (VAR_10) FUNC_2(VAR_10);

 return -1;
}

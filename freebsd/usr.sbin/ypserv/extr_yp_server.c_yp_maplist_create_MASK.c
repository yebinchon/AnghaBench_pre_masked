
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int yp_mapname ;
typedef int yp_mapdir ;
struct ypmaplist {int * map; struct ypmaplist* next; } ;
struct stat {int st_mode; } ;
struct dirent {char const* d_name; } ;
typedef int DIR ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct ypmaplist*) ;
 scalar_t__ FUNC_3 (int) ;
 int * FUNC_4 (char*) ;
 struct dirent* FUNC_5 (int *) ;
 int FUNC_6 (char*,int,char*,char*,char const*) ;
 scalar_t__ FUNC_7 (char*,struct stat*) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 int * FUNC_9 (char*) ;
 int * FUNC_10 (int ) ;
 char* VAR_3 ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (struct ypmaplist*) ;

__attribute__((used)) static struct ypmaplist *
FUNC_13(const char *VAR_4)
{
 char VAR_5[VAR_0 + 2];
 char VAR_6[VAR_0 + 2];
 struct ypmaplist *VAR_7 = ((void*)0);
 struct ypmaplist *VAR_8 = ((void*)0);
 DIR *VAR_9;
 struct dirent *VAR_10;
 struct stat VAR_11;

 FUNC_6(VAR_5, sizeof(VAR_5), "%s/%s", VAR_3, VAR_4);

 if ((VAR_9 = FUNC_4(VAR_5)) == ((void*)0)) {
  FUNC_11("opendir(%s) failed: %s", VAR_5, FUNC_10(VAR_2));
  return(((void*)0));
 }

 while ((VAR_10 = FUNC_5(VAR_9)) != ((void*)0)) {
  if (FUNC_8(VAR_10->d_name, ".") && FUNC_8(VAR_10->d_name, "..")) {
   FUNC_6(VAR_6, sizeof(VAR_6), "%s/%s",
       VAR_5,VAR_10->d_name);
   if (FUNC_7(VAR_6, &VAR_11) < 0 ||
      !FUNC_0(VAR_11.st_mode))
    continue;
   if ((VAR_7 = (struct ypmaplist *)
    FUNC_3(sizeof(struct ypmaplist))) == ((void*)0)) {
    FUNC_11("malloc() failed");
    FUNC_1(VAR_9);
    FUNC_12(VAR_8);
    return(((void*)0));
   }
   if ((VAR_7->map = FUNC_9(VAR_10->d_name)) == ((void*)0)) {
    FUNC_11("strdup() failed: %s",FUNC_10(VAR_2));
    FUNC_1(VAR_9);
    FUNC_12(VAR_8);
    FUNC_2(VAR_7);
    return(((void*)0));
   }
   VAR_7->next = VAR_8;
   VAR_8 = VAR_7;
   if (VAR_1)
    FUNC_11("map: %s", VAR_8->map);
  }

 }
 FUNC_1(VAR_9);
 return(VAR_8);
}

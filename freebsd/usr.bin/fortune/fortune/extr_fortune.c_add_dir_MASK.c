
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct dirent {scalar_t__ d_namlen; int d_name; } ;
struct TYPE_5__ {int fd; char* path; scalar_t__ num_children; int child; } ;
typedef TYPE_1__ FILEDESC ;
typedef int DIR ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,char*,char*,int *,TYPE_1__**,TYPE_1__*) ;
 int FUNC_2 (int) ;
 char* FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (char*) ;
 int * FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 struct dirent* FUNC_8 (int *) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_9(FILEDESC *VAR_4)
{
 DIR *VAR_5;
 struct dirent *VAR_6;
 FILEDESC *VAR_7;
 char *VAR_8;

 (void) FUNC_2(VAR_4->fd);
 VAR_4->fd = -1;
 if ((VAR_5 = FUNC_6(VAR_4->path)) == ((void*)0)) {
  FUNC_7(VAR_4->path);
  return (VAR_0);
 }
 VAR_7 = ((void*)0);
 FUNC_0(1, (VAR_3, "adding dir \"%s\"\n", VAR_4->path));
 VAR_4->num_children = 0;
 while ((VAR_6 = FUNC_8(VAR_5)) != ((void*)0)) {
  if (VAR_6->d_namlen == 0)
   continue;
  VAR_8 = FUNC_3(VAR_6->d_name, VAR_6->d_namlen);
  if (FUNC_1(VAR_1, VAR_8, VAR_4->path, &VAR_4->child, &VAR_7, VAR_4))
   VAR_4->num_children++;
  else
   FUNC_5(VAR_8);
 }
 if (VAR_4->num_children == 0) {
  (void) FUNC_4(VAR_3,
      "fortune: %s: No fortune files in directory.\n", VAR_4->path);
  return (VAR_0);
 }

 return (VAR_2);
}

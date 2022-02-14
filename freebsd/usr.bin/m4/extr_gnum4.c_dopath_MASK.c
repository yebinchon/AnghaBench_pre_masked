
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path_entry {char* name; struct path_entry* next; } ;
struct input_file {int dummy; } ;
typedef int path ;
typedef int FILE ;


 int VAR_0 ;
 struct path_entry* VAR_1 ;
 int * FUNC_0 (char*,char*) ;
 int FUNC_1 (struct input_file*,int *,char*) ;
 int FUNC_2 (char*,int,char*,char*,char const*) ;

__attribute__((used)) static
struct input_file *
FUNC_3(struct input_file *VAR_2, const char *VAR_3)
{
 char VAR_4[VAR_0];
 struct path_entry *VAR_5;
 FILE *VAR_6;

 for (VAR_5 = VAR_1; VAR_5; VAR_5 = VAR_5->next) {
  FUNC_2(VAR_4, sizeof(VAR_4), "%s/%s", VAR_5->name, VAR_3);
  if ((VAR_6 = FUNC_0(VAR_4, "r")) != ((void*)0)) {
   FUNC_1(VAR_2, VAR_6, VAR_4);
   return VAR_2;
  }
 }
 return ((void*)0);
}

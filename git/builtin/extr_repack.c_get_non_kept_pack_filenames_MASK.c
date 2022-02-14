
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct dirent {int d_name; } ;
struct TYPE_2__ {int string; } ;
typedef int DIR ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,int ,char*) ;
 int * FUNC_5 (int ) ;
 int VAR_0 ;
 struct dirent* FUNC_6 (int *) ;
 int FUNC_7 (struct string_list*,char*) ;
 int FUNC_8 (int ,char*,size_t*) ;
 char* FUNC_9 (int ,size_t) ;

__attribute__((used)) static void FUNC_10(struct string_list *VAR_1,
     const struct string_list *VAR_2)
{
 DIR *VAR_3;
 struct dirent *VAR_4;
 char *VAR_5;

 if (!(VAR_3 = FUNC_5(VAR_0)))
  return;

 while ((VAR_4 = FUNC_6(VAR_3)) != ((void*)0)) {
  size_t VAR_6;
  int VAR_7;

  for (VAR_7 = 0; VAR_7 < VAR_2->nr; VAR_7++)
   if (!FUNC_3(VAR_4->d_name, VAR_2->items[VAR_7].string))
    break;
  if (VAR_2->nr > 0 && VAR_7 < VAR_2->nr)
   continue;

  if (!FUNC_8(VAR_4->d_name, ".pack", &VAR_6))
   continue;

  VAR_5 = FUNC_9(VAR_4->d_name, VAR_6);

  if (!FUNC_1(FUNC_4("%s/%s.keep", VAR_0, VAR_5)))
   FUNC_7(VAR_1, VAR_5);
  else
   FUNC_2(VAR_5);
 }
 FUNC_0(VAR_3);
}

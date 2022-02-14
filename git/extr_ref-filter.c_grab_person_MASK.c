
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct atom_value {void* s; } ;
struct TYPE_2__ {char* name; } ;


 void* FUNC_0 (char const*) ;
 void* FUNC_1 (char const*) ;
 void* FUNC_2 (char const*) ;
 char* FUNC_3 (char const*,int,void*) ;
 int FUNC_4 (char const*,struct atom_value*,char const*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 int FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char const*,char const*,int) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_9(const char *VAR_2, struct atom_value *VAR_3, int VAR_4, void *VAR_5)
{
 int VAR_6;
 int VAR_7 = FUNC_7(VAR_2);
 const char *VAR_8 = ((void*)0);

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  const char *VAR_9 = VAR_0[VAR_6].name;
  struct atom_value *VAR_10 = &VAR_3[VAR_6];
  if (!!VAR_4 != (*VAR_9 == '*'))
   continue;
  if (VAR_4)
   VAR_9++;
  if (FUNC_8(VAR_2, VAR_9, VAR_7))
   continue;
  if (VAR_9[VAR_7] != 0 &&
      FUNC_6(VAR_9 + VAR_7, "name") &&
      FUNC_6(VAR_9 + VAR_7, "email") &&
      !FUNC_5(VAR_9 + VAR_7, "date"))
   continue;
  if (!VAR_8)
   VAR_8 = FUNC_3(VAR_2, VAR_7, VAR_5);
  if (!VAR_8)
   return;
  if (VAR_9[VAR_7] == 0)
   VAR_10->s = FUNC_1(VAR_8);
  else if (!FUNC_6(VAR_9 + VAR_7, "name"))
   VAR_10->s = FUNC_2(VAR_8);
  else if (!FUNC_6(VAR_9 + VAR_7, "email"))
   VAR_10->s = FUNC_0(VAR_8);
  else if (FUNC_5(VAR_9 + VAR_7, "date"))
   FUNC_4(VAR_8, VAR_10, VAR_9);
 }





 if (FUNC_6(VAR_2, "tagger") && FUNC_6(VAR_2, "committer"))
  return;
 if (!VAR_8)
  VAR_8 = FUNC_3(VAR_2, VAR_7, VAR_5);
 if (!VAR_8)
  return;
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  const char *VAR_11 = VAR_0[VAR_6].name;
  struct atom_value *VAR_12 = &VAR_3[VAR_6];
  if (!!VAR_4 != (*VAR_11 == '*'))
   continue;
  if (VAR_4)
   VAR_11++;

  if (FUNC_5(VAR_11, "creatordate"))
   FUNC_4(VAR_8, VAR_12, VAR_11);
  else if (!FUNC_6(VAR_11, "creator"))
   VAR_12->s = FUNC_1(VAR_8);
 }
}

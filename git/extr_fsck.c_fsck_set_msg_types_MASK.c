
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsck_options {int skiplist; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct fsck_options*,char*,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*) ;
 char FUNC_6 (char) ;
 char* FUNC_7 (char const*) ;

void FUNC_8(struct fsck_options *VAR_0, const char *VAR_1)
{
 char *VAR_2 = FUNC_7(VAR_1), *VAR_3 = VAR_2;
 int VAR_4 = 0;

 while (!VAR_4) {
  int VAR_5 = FUNC_5(VAR_2, " ,|"), VAR_6;

  VAR_4 = !VAR_2[VAR_5];
  if (!VAR_5) {
   VAR_2++;
   continue;
  }
  VAR_2[VAR_5] = '\0';

  for (VAR_6 = 0;
       VAR_6 < VAR_5 && VAR_2[VAR_6] != '=' && VAR_2[VAR_6] != ':';
       VAR_6++)
   VAR_2[VAR_6] = FUNC_6(VAR_2[VAR_6]);
  VAR_2[VAR_6] = '\0';

  if (!FUNC_4(VAR_2, "skiplist")) {
   if (VAR_6 == VAR_5)
    FUNC_0("skiplist requires a path");
   FUNC_3(&VAR_0->skiplist, VAR_2 + VAR_6 + 1);
   VAR_2 += VAR_5 + 1;
   continue;
  }

  if (VAR_6 == VAR_5)
   FUNC_0("Missing '=': '%s'", VAR_2);

  FUNC_2(VAR_0, VAR_2, VAR_2 + VAR_6 + 1);
  VAR_2 += VAR_5 + 1;
 }
 FUNC_1(VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char const*,int) ;
 char* VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int* VAR_6 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(int VAR_7, const char *VAR_8, int VAR_9)
{
 static int VAR_10, VAR_11, VAR_12;
 int VAR_13;

 FUNC_1(&VAR_4);
 if (VAR_5[0] == '\0') {

  if (VAR_2)
   FUNC_3("initalizing intr_countp\n");
  FUNC_0("???", VAR_10++);

  VAR_12 = VAR_10++;
  FUNC_0("stray", VAR_12);
  for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++)
   VAR_3[VAR_13] = VAR_12;

  VAR_11 = VAR_10++;
  FUNC_0("pil", VAR_11);
  for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++)
   VAR_6[VAR_13] = VAR_11;
 }

 if (VAR_8 == ((void*)0))
  VAR_8 = "???";

 if (!VAR_9 && VAR_3[VAR_7] != VAR_12)
  VAR_13 = VAR_3[VAR_7];
 else if (VAR_9 && VAR_6[VAR_7] != VAR_11)
  VAR_13 = VAR_6[VAR_7];
 else
  VAR_13 = VAR_10++;

 if (FUNC_0(VAR_8, VAR_13))
  VAR_13 = 0;

 if (!VAR_9)
  VAR_3[VAR_7] = VAR_13;
 else
  VAR_6[VAR_7] = VAR_13;
 FUNC_2(&VAR_4);
}

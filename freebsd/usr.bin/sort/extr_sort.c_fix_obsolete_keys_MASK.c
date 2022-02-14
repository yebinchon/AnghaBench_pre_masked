void
FUNC_0(int *VAR_0, char **VAR_1)
{
 char VAR_2[129];

 for (int VAR_3 = 1; VAR_3 < *VAR_0; VAR_3++) {
  char *VAR_4;

  VAR_4 = VAR_1[VAR_3];

  if (strlen(VAR_4) > 1 && VAR_4[0] == '+') {
   int VAR_5, VAR_6;
   char VAR_7[128];

   VAR_7[0] = 0;
   VAR_5 = VAR_6 = 0;

   if (FUNC_0(VAR_4 + 1, &VAR_6, &VAR_5, VAR_7) < 0)
    continue;
   else {
    VAR_6 += 1;
    VAR_5 += 1;
    if (VAR_3 + 1 < *VAR_0) {
     char *VAR_8 = VAR_1[VAR_3 + 1];

     if (FUNC_0(VAR_8) > 1 &&
         VAR_8[0] == '-') {
      int VAR_9, VAR_10;
      char VAR_11[128];

      VAR_11[0] = 0;
      VAR_9 = VAR_10 = 0;

      if (FUNC_0(VAR_8 + 1,
          &VAR_10, &VAR_9, VAR_11) >= 0) {
       if (VAR_9 > 0)
        VAR_10 += 1;
       sprintf(VAR_2, "-k%d.%d%s,%d.%d%s",
           VAR_6, VAR_5, VAR_7, VAR_10, VAR_9, VAR_11);
       VAR_1[VAR_3] = FUNC_0(VAR_2);
       for (int VAR_12 = VAR_3 + 1; VAR_12 + 1 < *VAR_0; VAR_12++)
        VAR_1[VAR_12] = VAR_1[VAR_12 + 1];
       *VAR_0 -= 1;
       continue;
      }
     }
    }
    FUNC_0(VAR_2, "-k%d.%d%s", VAR_6, VAR_5, VAR_7);
    VAR_1[VAR_3] = FUNC_0(VAR_2);
   }
  }
 }
}

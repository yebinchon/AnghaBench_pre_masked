
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pathtmp ;
typedef int FILE ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,scalar_t__) ;
 int VAR_2 ;
 int FUNC_4 (char*) ;
 int VAR_3 ;
 int FUNC_5 (int *,int,char*) ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 (int *,char*) ;
 char* FUNC_8 (char*,char) ;
 scalar_t__ FUNC_9 (char*) ;
 int FUNC_10 (char*,int,char*) ;

__attribute__((used)) static int
FUNC_11(FILE *VAR_4)
{
 char VAR_5[VAR_0], VAR_6[4*VAR_0 + 1];
 char *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_6(VAR_4, VAR_6, sizeof(VAR_6));
 if (VAR_8)
  goto out;
 if (FUNC_10(VAR_5, VAR_0, VAR_6) == -1) {
  VAR_8 = VAR_1;
  goto out;
 }
 VAR_8 = 0;

 VAR_7 = FUNC_8(VAR_5, '/');
 if (VAR_7 != ((void*)0)) {

  VAR_2 = VAR_3;

  do {
   *VAR_7++ = '\0';


   if (FUNC_1(VAR_5)) {
    FUNC_4("absolute path cannot contain "
        ".. component");
    goto out;
   }


   if (VAR_5[0] != '\0' && !FUNC_0(VAR_5))
    VAR_8 = FUNC_5(VAR_4, 0, VAR_5);
   FUNC_3(VAR_5, VAR_7, FUNC_9(VAR_7) + 1);
   VAR_7 = FUNC_8(VAR_5, '/');
  } while (!VAR_8 && VAR_7 != ((void*)0));


  if (!VAR_8 && (FUNC_0(VAR_5) || FUNC_1(VAR_5))) {
   FUNC_4("absolute path cannot contain . or .. "
       "components");
   goto out;
  }
 }


 if (!VAR_8 && VAR_5[0] != '\0')
  VAR_8 = FUNC_5(VAR_4, 1, VAR_5);

 out:
 FUNC_7(VAR_4, "\n");
 (void)FUNC_2(VAR_4);
 return (VAR_8);
}

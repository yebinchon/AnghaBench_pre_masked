
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * FUNC_1 (int *,int) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_2(void)
{
 int VAR_6 = VAR_0 * 2;

 if (VAR_4 == ((void*)0) || VAR_3 == ((void*)0) || VAR_2 == ((void*)0))
  FUNC_0("Internal memory allocation error\n");

 VAR_4 = FUNC_1(VAR_4, VAR_6 * sizeof(char *));
 VAR_3 = FUNC_1(VAR_3, VAR_6 * sizeof(unsigned short));
 VAR_2 = FUNC_1(VAR_2, VAR_6 * sizeof(char));

 if (VAR_4 != ((void*)0) && VAR_3 != ((void*)0) && VAR_2 != ((void*)0)) {
  VAR_0 = VAR_6;
  return;
 }

 if (!VAR_5)
  FUNC_0("out of memory\n");
 VAR_1 = 1;

}

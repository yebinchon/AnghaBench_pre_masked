
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const* const*) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char const* const,int) ;

char const *
FUNC_4(int VAR_0, char *VAR_1, int VAR_2)
{
 static char const * const VAR_3[] = {
             "Suspend Page Scan ",
             "Suspend Inquiry Scan ",
             "Suspend Periodic Inquiries "
        };

 if (VAR_1 != ((void*)0) && VAR_2 > 0) {
  int VAR_4;

  FUNC_1(VAR_1, 0, VAR_2);
  for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3); VAR_4++) {
   int VAR_5 = FUNC_2(VAR_1);

   if (VAR_5 >= VAR_2)
    break;
   if (VAR_0 & (1 << VAR_4))
    FUNC_3(VAR_1, VAR_3[VAR_4], VAR_2 - VAR_5);
  }
 }

 return (VAR_1);
}

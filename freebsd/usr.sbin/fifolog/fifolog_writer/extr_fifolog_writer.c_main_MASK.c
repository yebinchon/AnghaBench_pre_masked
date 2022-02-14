
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int events; scalar_t__ fd; } ;
struct fifolog_writer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,char const*) ;
 int * FUNC_2 (char*,int,int ) ;
 int FUNC_3 (struct fifolog_writer*) ;
 struct fifolog_writer* FUNC_4 () ;
 char* FUNC_5 (struct fifolog_writer*,char* const,unsigned int,unsigned int,unsigned int) ;
 int FUNC_6 (struct fifolog_writer*,int ) ;
 int FUNC_7 (struct fifolog_writer*,int ,int ,char*,int ) ;
 int FUNC_8 (int,char* const*,char*) ;
 scalar_t__ FUNC_9 (char) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_10 (struct pollfd*,int,int) ;
 int VAR_5 ;
 char* FUNC_11 (char*,char) ;
 unsigned int FUNC_12 (int ,int *,int ) ;
 int FUNC_13 () ;

int
FUNC_14(int VAR_6, char * const *VAR_7)
{
 struct fifolog_writer *VAR_8;
 const char *VAR_9;
 struct pollfd VAR_10[1];
 char VAR_11[VAR_0], *VAR_12;
 int VAR_13, VAR_14;
 unsigned VAR_15 = 10;
 unsigned VAR_16 = 60;
 unsigned VAR_17 = VAR_2;

 while ((VAR_14 = FUNC_8(VAR_6, VAR_7, "w:s:z:")) != -1) {
  switch(VAR_14) {
  case 'w':
   VAR_15 = FUNC_12(VAR_3, ((void*)0), 0);
   break;
  case 's':
   VAR_16 = FUNC_12(VAR_3, ((void*)0), 0);
   break;
  case 'z':
   VAR_17 = FUNC_12(VAR_3, ((void*)0), 0);
   break;
  default:
   FUNC_13();
  }
 }
 VAR_6 -= VAR_4;
 VAR_7 += VAR_4;
 if (VAR_6 != 1)
  FUNC_13();

 if (VAR_17 > 9)
  FUNC_13();

 if (VAR_15 > VAR_16)
  FUNC_13();

 VAR_8 = FUNC_4();
 FUNC_0(VAR_8 != ((void*)0));

 VAR_9 = FUNC_5(VAR_8, VAR_7[0], VAR_15, VAR_16, VAR_17);
 if (VAR_9)
  FUNC_1(1, "Error: %s", VAR_9);

 while (1) {
  VAR_10[0].fd = 0;
  VAR_10[0].events = VAR_1;
  VAR_13 = FUNC_10(VAR_10, 1, 1000);
  if (VAR_13 == 1) {
   if (FUNC_2(VAR_11, sizeof VAR_11, VAR_5) == ((void*)0))
    break;
   VAR_12 = FUNC_11(VAR_11, '\0');
   FUNC_0(VAR_12 != ((void*)0));
   while (VAR_12 > VAR_11 && FUNC_9(VAR_12[-1]))
    VAR_12--;
   *VAR_12 = '\0';
   if (*VAR_11 != '\0')
    FUNC_7(VAR_8, 0, 0, VAR_11, 0);
  } else if (VAR_13 == 0)
   FUNC_6(VAR_8, 0);
 }
 FUNC_3(VAR_8);
 return (0);
}

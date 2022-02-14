
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int fd; int events; } ;
typedef int ssize_t ;
typedef int data ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 char* FUNC_1 (char*,char,int) ;
 int FUNC_2 (struct pollfd*,int,int) ;
 int FUNC_3 (int,int,char const*,int,int ) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int,char const*,int) ;
 int FUNC_5 (int,char*,int) ;

__attribute__((used)) static int FUNC_6(int VAR_9, int VAR_10, void *VAR_11)
{
 char VAR_12[128];
 int VAR_13 = 0;

 if (VAR_6 <= 0)
  VAR_7 = VAR_3;
 if (VAR_7 == VAR_2)
  VAR_13 = 1;

 while (1) {
  ssize_t VAR_14;

  if (VAR_13) {
   struct pollfd VAR_15;
   int VAR_16;

   VAR_15.fd = VAR_9;
   VAR_15.events = VAR_4;
   VAR_16 = FUNC_2(&VAR_15, 1, 1000 * VAR_6);

   if (VAR_16 < 0) {
    if (VAR_5 == VAR_0)
     continue;
    else
     break;
   } else if (VAR_16 == 0) {

    static const char VAR_17[] = "0005\1";
    FUNC_4(1, VAR_17, sizeof(VAR_17) - 1);
    continue;
   }
  }

  VAR_14 = FUNC_5(VAR_9, VAR_12, sizeof(VAR_12));
  if (VAR_14 <= 0)
   break;

  if (VAR_7 == VAR_1 && !VAR_13) {
   const char *VAR_18 = FUNC_1(VAR_12, '\0', VAR_14);
   if (VAR_18) {





    VAR_13 = 1;
    FUNC_3(1, 2, VAR_12, VAR_18 - VAR_12, VAR_8);
    FUNC_3(1, 2, VAR_18 + 1, VAR_14 - (VAR_18 - VAR_12 + 1), VAR_8);
    continue;
   }
  }





  FUNC_3(1, 2, VAR_12, VAR_14, VAR_8);
 }
 FUNC_0(VAR_9);
 return 0;
}

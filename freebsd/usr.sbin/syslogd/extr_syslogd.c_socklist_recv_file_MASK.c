
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socklist {int sl_socket; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,char*,int) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7(struct socklist *VAR_4)
{
 char *VAR_5, *VAR_6, VAR_7[VAR_2 + 1];
 int VAR_8, VAR_9;

 VAR_8 = 0;
 for (;;) {
  VAR_9 = FUNC_4(VAR_4->sl_socket, VAR_7 + VAR_8, VAR_2 - 1 - VAR_8);
  if (VAR_9 > 0) {
   VAR_7[VAR_9 + VAR_8] = '\0';
  } else {
   if (VAR_9 < 0 && VAR_3 != VAR_1 && VAR_3 != VAR_0) {
    FUNC_1("klog");
    FUNC_0(VAR_4->sl_socket);
    VAR_4->sl_socket = -1;
   }
   break;
  }

  for (VAR_5 = VAR_7; (VAR_6 = FUNC_5(VAR_5, '\n')) != ((void*)0); VAR_5 = VAR_6 + 1) {
   *VAR_6 = '\0';
   FUNC_3(VAR_5);
  }
  VAR_8 = FUNC_6(VAR_5);
  if (VAR_8 >= VAR_2 - 1) {
   FUNC_3(VAR_5);
   VAR_8 = 0;
  }
  if (VAR_8 > 0)
   FUNC_2(VAR_7, VAR_5, VAR_8 + 1);
 }
 if (VAR_8 > 0)
  FUNC_3(VAR_7);

 return (VAR_8);
}

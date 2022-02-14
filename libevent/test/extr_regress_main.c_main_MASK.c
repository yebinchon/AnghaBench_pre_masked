
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WSADATA ;
typedef int WORD ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 () ;
 int VAR_4 ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_10 (int,char const**,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*) ;

int
FUNC_13(int VAR_10, const char **VAR_11)
{
 if (FUNC_9(VAR_1, VAR_3) == VAR_2)
  return 1;
 if (!FUNC_6("EVENT_NO_DEBUG_LOCKS"))
  FUNC_4();


 if (FUNC_6("EVENT_DEBUG_MODE")) {
  FUNC_3();
  VAR_4 = 1;
 }
 if (FUNC_6("EVENT_DEBUG_LOGGING_ALL")) {
  FUNC_2(VAR_0);
 }

 FUNC_11(VAR_8);

 FUNC_5(&VAR_7, 0);

 if (FUNC_6("EVENT_NO_FILE_BUFFERING")) {
  FUNC_8(VAR_6, ((void*)0));
  FUNC_8(VAR_5, ((void*)0));
 }

 if (FUNC_10(VAR_10,VAR_11,VAR_9))
  return 1;

 FUNC_7();

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int,int) ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (int,int ,int ) ;
 scalar_t__ FUNC_4 (int,int ,scalar_t__) ;

int
FUNC_5(const char *VAR_6, const char *VAR_7)
{
 int VAR_8, VAR_9;
 ssize_t VAR_10;

 VAR_8 = FUNC_1(VAR_7, VAR_0|VAR_2|VAR_3, 0666);
 if (VAR_8 < 0)
  return -1;
 VAR_9 = FUNC_1(VAR_6, VAR_1, 0);
 if (VAR_9 < 0)
  FUNC_2("internal error, can't reopen %s", VAR_6);
 while ((VAR_10 = FUNC_3(VAR_9, VAR_4, VAR_5)) > 0)
  if (FUNC_4(VAR_8, VAR_4, VAR_10) != VAR_10)
   FUNC_2("write to %s failed", VAR_7);
 FUNC_0(VAR_9);
 FUNC_0(VAR_8);
 return 0;
}

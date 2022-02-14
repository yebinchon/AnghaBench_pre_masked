
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*,...) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_3(int VAR_4, const char *VAR_5, int VAR_6, int VAR_7)
{
 if (!VAR_6 == !VAR_7)
  FUNC_2("ok %-2d    ", VAR_4);
 else
  FUNC_2("not ok %-2d", VAR_4);
 FUNC_2(" %s state %s: expected %s; got %s\n",
     VAR_2 == VAR_0 ? "Pipe" :
     VAR_2 == VAR_1 ? "Sock" : "FIFO",
     VAR_5, FUNC_0(VAR_6), FUNC_0(VAR_7));
 FUNC_1(VAR_3);
}

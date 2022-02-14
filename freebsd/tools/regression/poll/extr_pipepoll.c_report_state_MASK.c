
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char*,char const*) ;

__attribute__((used)) static void
FUNC_1(const char *VAR_3)
{

 FUNC_0(" %s state %s: ",
     VAR_2 == VAR_0 ? "Pipe" :
     VAR_2 == VAR_1 ? "Sock" : "FIFO",
     VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winsize {int ws_col; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct winsize*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int
FUNC_3(void)
{
 struct winsize VAR_2;
 int VAR_3;

 if (FUNC_0(VAR_0, VAR_1, &VAR_2) != -1)
  VAR_3 = VAR_2.ws_col;
 else if ((VAR_3 = FUNC_1("co")) == 0) {
  VAR_3 = 80;
  FUNC_2("cannot find terminal width; defaulted to %d", VAR_3);
 }

 return (VAR_3);
}

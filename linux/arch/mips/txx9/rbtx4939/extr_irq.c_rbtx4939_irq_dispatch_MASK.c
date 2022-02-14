
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(int VAR_4)
{
 int VAR_5;

 if (VAR_4 & VAR_2)
  return VAR_3 + 7;
 VAR_5 = FUNC_2();
 if (FUNC_0(VAR_5 >= 0)) {

  switch (VAR_5) {
  case 128:
   VAR_5 = FUNC_1();
   break;
  }
 } else if (VAR_4 & VAR_0)
  VAR_5 = VAR_3 + 0;
 else if (VAR_4 & VAR_1)
  VAR_5 = VAR_3 + 1;
 else
  VAR_5 = -1;
 return VAR_5;
}

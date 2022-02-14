
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int
FUNC_4(void)
{
 int VAR_5 = 0;





 FUNC_3("ipfw2 "



  "initialized, divert %s, nat %s, "
  "default to %s, logging ",



  "loadable",




  "loadable",

  VAR_4 ? "accept" : "deny");
 if (VAR_1 == 0)
  FUNC_3("disabled\n");
 else if (VAR_2 == 0)
  FUNC_3("unlimited\n");
 else
  FUNC_3("limited to %d packets/entry by default\n",
      VAR_2);


 if (VAR_3 > VAR_0)
   VAR_3 = VAR_0;

 FUNC_2();
 FUNC_1();
 FUNC_0();
 return (VAR_5);
}

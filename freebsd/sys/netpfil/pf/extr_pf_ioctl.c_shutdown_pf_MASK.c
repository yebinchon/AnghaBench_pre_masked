
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,char*) ;

__attribute__((used)) static int
FUNC_8(void)
{
 int VAR_6 = 0;
 u_int32_t VAR_7[5];
 char VAR_8 = '\0';

 do {
  if ((VAR_6 = FUNC_2(&VAR_7[0], VAR_5, &VAR_8))
      != 0) {
   FUNC_0(VAR_0, ("shutdown_pf: SCRUB\n"));
   break;
  }
  if ((VAR_6 = FUNC_2(&VAR_7[1], VAR_2, &VAR_8))
      != 0) {
   FUNC_0(VAR_0, ("shutdown_pf: FILTER\n"));
   break;
  }
  if ((VAR_6 = FUNC_2(&VAR_7[2], VAR_3, &VAR_8))
      != 0) {
   FUNC_0(VAR_0, ("shutdown_pf: NAT\n"));
   break;
  }
  if ((VAR_6 = FUNC_2(&VAR_7[3], VAR_1, &VAR_8))
      != 0) {
   FUNC_0(VAR_0, ("shutdown_pf: BINAT\n"));
   break;
  }
  if ((VAR_6 = FUNC_2(&VAR_7[4], VAR_4, &VAR_8))
      != 0) {
   FUNC_0(VAR_0, ("shutdown_pf: RDR\n"));
   break;
  }


  FUNC_7(VAR_7[0], VAR_5, &VAR_8);
  FUNC_7(VAR_7[1], VAR_2, &VAR_8);
  FUNC_7(VAR_7[2], VAR_3, &VAR_8);
  FUNC_7(VAR_7[3], VAR_1, &VAR_8);
  FUNC_7(VAR_7[4], VAR_4, &VAR_8);

  if ((VAR_6 = FUNC_5()) != 0)
   break;
  FUNC_4();

  FUNC_3(((void*)0));



 } while(0);

 return (VAR_6);
}

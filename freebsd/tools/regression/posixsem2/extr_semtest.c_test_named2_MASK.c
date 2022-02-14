
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sem_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int ,int,...) ;
 int FUNC_5 (int ) ;

int
FUNC_6(void)
{
 sem_t *VAR_6, *VAR_7, *VAR_8;

 FUNC_2("testing named process-shared semaphore, O_EXCL cases\n");
 FUNC_5(VAR_4);
 VAR_6 = FUNC_4(VAR_4, VAR_1 | VAR_2, 0777, 0);
 if (VAR_6 == VAR_3)
  FUNC_0(1, "sem_open failed");
 VAR_7 = FUNC_4(VAR_4, VAR_1 | VAR_2, 0777, 0);
 if (VAR_7 != VAR_3)
  FUNC_1(2, "second sem_open call wrongly succeeded");
 if (VAR_5 != VAR_0)
  FUNC_0(3, "second sem_open call failed with wrong errno");

 VAR_8 = FUNC_4(VAR_4, 0);
 if (VAR_8 == VAR_3)
  FUNC_0(4, "third sem_open call failed");
 if (VAR_6 != VAR_8)
  FUNC_1(5,
"two sem_open calls for same semaphore do not return same address");
 if (FUNC_3(VAR_8))
  FUNC_0(6, "sem_close failed");

 if (FUNC_3(VAR_6))
  FUNC_0(7, "sem_close failed");

 FUNC_2("OK.\n");
 return (0);
}

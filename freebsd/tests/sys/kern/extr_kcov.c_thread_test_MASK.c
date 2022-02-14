
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef size_t u_int ;
typedef int pthread_t ;


 int FUNC_0 (int,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int*) ;
 int FUNC_2 (int,int *) ;
 scalar_t__ FUNC_3 (int,int ,size_t) ;
 char** VAR_2 ;
 size_t FUNC_4 (char**) ;
 int FUNC_5 (int *,int *,int ,int *) ;
 int FUNC_6 (int ,int *) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_7(u_int VAR_4)
{
 pthread_t VAR_5;
 uint64_t *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(&VAR_7);

 FUNC_0(FUNC_3(VAR_7, VAR_1, VAR_4) == 0,
     "Unable to enable kcov %s",
     VAR_4 < FUNC_4(VAR_2) ? VAR_2[VAR_4] : "unknown mode");

 FUNC_5(&VAR_5, ((void*)0), VAR_3, VAR_6);
 FUNC_6(VAR_5, ((void*)0));

 FUNC_0(FUNC_3(VAR_7, VAR_0, 0) == 0,
     "Unable to disable kcov");

 FUNC_2(VAR_7, VAR_6);
}

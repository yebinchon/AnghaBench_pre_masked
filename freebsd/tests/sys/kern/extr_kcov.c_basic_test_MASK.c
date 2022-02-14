
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef size_t u_int ;


 int FUNC_0 (int,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int*) ;
 int FUNC_4 (int,int *) ;
 scalar_t__ FUNC_5 (int,int ,size_t) ;
 char** VAR_2 ;
 size_t FUNC_6 (char**) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(u_int VAR_3)
{
 uint64_t *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(&VAR_5);
 FUNC_0(FUNC_5(VAR_5, VAR_1, VAR_3) == 0,
     "Unable to enable kcov %s",
     VAR_3 < FUNC_6(VAR_2) ? VAR_2[VAR_3] : "unknown mode");

 FUNC_2(&VAR_4[0], 0);

 FUNC_7(0);
 FUNC_0(FUNC_1(&VAR_4[0]) != 0, "No records found");

 FUNC_0(FUNC_5(VAR_5, VAR_0, 0) == 0,
     "Unable to disable kcov");

 FUNC_4(VAR_5, VAR_4);
}

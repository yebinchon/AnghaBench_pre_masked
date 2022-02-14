
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ,int *,int,int *,int ,int *) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(int VAR_1, uint32_t *VAR_2)
{

 if (FUNC_0(VAR_1, VAR_0, VAR_2, sizeof(*VAR_2), ((void*)0),
     0, ((void*)0)) < 0) {
  FUNC_1("Couldn't fetch adapter time");
  VAR_2 = 0;
 }
}

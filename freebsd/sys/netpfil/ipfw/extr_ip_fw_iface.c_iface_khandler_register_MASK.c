
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 void* FUNC_0 (int ,int ,void*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (char*) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_4()
{
 int VAR_8;

 VAR_8 = 0;

 FUNC_1(&VAR_7);
 if (VAR_6 == 0)
  VAR_8 = 1;
 VAR_6++;
 FUNC_2(&VAR_7);

 if (VAR_8 == 0)
  return;

 FUNC_3("IPFW: starting up interface tracker\n");

 VAR_4 = FUNC_0(
     VAR_2, VAR_5, ((void*)0),
     VAR_0);
 VAR_3 = FUNC_0(
     VAR_1, VAR_5, (void*)((uintptr_t)1),
     VAR_0);
}

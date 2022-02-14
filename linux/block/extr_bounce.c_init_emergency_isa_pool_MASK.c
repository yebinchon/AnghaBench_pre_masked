
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ,int ,int ,void*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int ) ;

int FUNC_7(void)
{
 int VAR_5;

 FUNC_4(&VAR_1);

 if (FUNC_3(&VAR_2)) {
  FUNC_5(&VAR_1);
  return 0;
 }

 VAR_5 = FUNC_2(&VAR_2, VAR_0, VAR_3,
      VAR_4, (void *) 0);
 FUNC_0(VAR_5);

 FUNC_6("isa pool size: %d pages\n", VAR_0);
 FUNC_1();
 FUNC_5(&VAR_1);
 return 0;
}

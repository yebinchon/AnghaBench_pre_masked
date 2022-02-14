
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int * FUNC_3 (int *,int ,int ,int ,int,char*,int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_6)
{

 FUNC_2(&VAR_5);
 FUNC_1();
 VAR_4 = FUNC_3(&VAR_3, 0, VAR_2,
  VAR_1, 0600, "%s", VAR_0);
 if (VAR_4 == ((void*)0)) {
  FUNC_0();
  FUNC_4("Can't initialize audit pipe subsystem");
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static void *
FUNC_2(int VAR_1)
{
 void *VAR_2;

 if ((VAR_2 = FUNC_1(VAR_1)) == ((void*)0))
  FUNC_0(VAR_0, "malloc() failed");
 return (VAR_2);
}

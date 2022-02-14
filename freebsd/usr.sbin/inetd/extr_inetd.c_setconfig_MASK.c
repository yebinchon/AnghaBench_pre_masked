
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,long,int ) ;

__attribute__((used)) static int
FUNC_2(void)
{

 if (VAR_2 != ((void*)0)) {
  FUNC_1(VAR_2, 0L, VAR_1);
  return (1);
 }
 VAR_2 = FUNC_0(VAR_0, "r");
 return (VAR_2 != ((void*)0));
}

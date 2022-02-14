
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void)
{
 int VAR_2;




 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 != VAR_0)
  FUNC_0("PM: GFX domain did not transition: %x\n", VAR_2);
}

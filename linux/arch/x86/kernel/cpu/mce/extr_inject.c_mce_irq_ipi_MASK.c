
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mce {int inject_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct mce*,int *) ;
 int FUNC_3 () ;
 struct mce* FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(void *VAR_3)
{
 int VAR_4 = FUNC_3();
 struct mce *VAR_5 = FUNC_4(&VAR_1);

 if (FUNC_1(VAR_4, VAR_2) &&
   VAR_5->inject_flags & VAR_0) {
  FUNC_0(VAR_4, VAR_2);
  FUNC_2(VAR_5, ((void*)0));
 }
}

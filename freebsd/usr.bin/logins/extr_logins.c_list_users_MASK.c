
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xpasswd {scalar_t__ pw_selected; } ;


 int FUNC_0 (struct xpasswd*) ;
 unsigned int VAR_0 ;
 struct xpasswd* VAR_1 ;

__attribute__((used)) static void
FUNC_1(void)
{
 struct xpasswd *VAR_2;
 unsigned int VAR_3;

 for (VAR_3 = 0, VAR_2 = VAR_1; VAR_3 < VAR_0; ++VAR_3, ++VAR_2)
  if (VAR_2->pw_selected)
   FUNC_0(VAR_2);
}

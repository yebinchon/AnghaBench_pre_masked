
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfr_addr {int pfra_fback; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct pfr_addr *VAR_1, int VAR_2)
{
 struct pfr_addr *VAR_3;
 int VAR_4;

 for (VAR_4 = 0, VAR_3 = VAR_1; VAR_4 < VAR_2; VAR_4++, VAR_3++)
  VAR_3->pfra_fback = VAR_0;
}

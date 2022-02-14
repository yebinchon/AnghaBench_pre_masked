
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protection_domain {int glx; scalar_t__ gcr3_tbl; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static void FUNC_4(struct protection_domain *VAR_0)
{
 if (VAR_0->glx == 2)
  FUNC_2(VAR_0->gcr3_tbl);
 else if (VAR_0->glx == 1)
  FUNC_1(VAR_0->gcr3_tbl);
 else
  FUNC_0(VAR_0->glx != 0);

 FUNC_3((unsigned long)VAR_0->gcr3_tbl);
}

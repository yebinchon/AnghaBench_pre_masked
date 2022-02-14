
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct pf_frent {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int FUNC_2 () ;
 struct pf_frent* FUNC_3 (int ,int ) ;

__attribute__((used)) static struct pf_frent *
FUNC_4(u_short *VAR_3)
{
 struct pf_frent *VAR_4;

 FUNC_0();

 VAR_4 = FUNC_3(VAR_2, VAR_0);
 if (VAR_4 == ((void*)0)) {
  FUNC_2();
  VAR_4 = FUNC_3(VAR_2, VAR_0);
  if (VAR_4 == ((void*)0)) {
   FUNC_1(VAR_3, VAR_1);
   return (((void*)0));
  }
 }

 return (VAR_4);
}

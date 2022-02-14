
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct aggent {uintptr_t ag_ostart; uintptr_t ag_oend; int ag_nsamples; int * ag_name; } ;


 struct aggent* FUNC_0 (int,int) ;
 int FUNC_1 (struct aggent*) ;
 int * FUNC_2 (char const*) ;

__attribute__((used)) static struct aggent *
FUNC_3(const char *VAR_0, u_int VAR_1, uintptr_t VAR_2, uintptr_t VAR_3)
{
 struct aggent *VAR_4;

 VAR_4 = FUNC_0(1, sizeof(struct aggent));
 if (VAR_4 == ((void*)0))
  return (((void*)0));
 VAR_4->ag_name = FUNC_2(VAR_0);
 if (VAR_4->ag_name == ((void*)0)) {
  FUNC_1(VAR_4);
  return (((void*)0));
 }
 VAR_4->ag_nsamples = VAR_1;
 VAR_4->ag_ostart = VAR_2;
 VAR_4->ag_oend = VAR_3;
 return (VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry {uintptr_t en_pc; uintptr_t en_ostart; uintptr_t en_oend; int en_nsamples; int * en_name; } ;


 struct entry* FUNC_0 (int,int) ;
 int FUNC_1 (struct entry*) ;
 int * FUNC_2 (char const*) ;

__attribute__((used)) static struct entry *
FUNC_3(const char *VAR_0, uintptr_t VAR_1, uintptr_t VAR_2, uintptr_t VAR_3)
{
 struct entry *VAR_4;

 VAR_4 = FUNC_0(1, sizeof(struct entry));
 if (VAR_4 == ((void*)0))
  return (((void*)0));
 VAR_4->en_name = FUNC_2(VAR_0);
 if (VAR_4->en_name == ((void*)0)) {
  FUNC_1(VAR_4);
  return (((void*)0));
 }
 VAR_4->en_pc = VAR_1;
 VAR_4->en_ostart = VAR_2;
 VAR_4->en_oend = VAR_3;
 VAR_4->en_nsamples = 1;
 return (VAR_4);
}

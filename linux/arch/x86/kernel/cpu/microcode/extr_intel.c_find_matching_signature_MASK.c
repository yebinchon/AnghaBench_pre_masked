
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct microcode_header_intel {int pf; int sig; } ;
struct extended_sigtable {int count; } ;
struct extended_signature {int pf; int sig; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int,int,int ,int ) ;
 int FUNC_1 (struct microcode_header_intel*) ;
 scalar_t__ FUNC_2 (struct microcode_header_intel*) ;

__attribute__((used)) static int FUNC_3(void *VAR_2, unsigned int VAR_3, int VAR_4)
{
 struct microcode_header_intel *VAR_5 = VAR_2;
 struct extended_sigtable *VAR_6;
 struct extended_signature *VAR_7;
 int VAR_8;

 if (FUNC_0(VAR_3, VAR_4, VAR_5->sig, VAR_5->pf))
  return 1;


 if (FUNC_2(VAR_5) <= FUNC_1(VAR_5) + VAR_1)
  return 0;

 VAR_6 = VAR_2 + FUNC_1(VAR_5) + VAR_1;
 VAR_7 = (void *)VAR_6 + VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_6->count; VAR_8++) {
  if (FUNC_0(VAR_3, VAR_4, VAR_7->sig, VAR_7->pf))
   return 1;
  VAR_7++;
 }
 return 0;
}

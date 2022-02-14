
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct alg {scalar_t__ type; scalar_t__ name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct alg* VAR_2 ;
 struct alg* FUNC_0 (struct alg*,struct alg*) ;
 int FUNC_1 (char*) ;
 size_t FUNC_2 (struct alg*) ;
 int FUNC_3 (struct alg*,size_t*,size_t) ;

__attribute__((used)) static void
FUNC_4(size_t *VAR_3, u_int VAR_4)
{
 struct alg *VAR_5, *VAR_6, *VAR_7;
 u_int VAR_8, VAR_9;

 for (VAR_8 = 0; VAR_8 < FUNC_2(VAR_2); VAR_8++) {
  VAR_6 = &VAR_2[VAR_8];
  if (VAR_6->type != VAR_0)
   continue;
  for (VAR_9 = 0; VAR_9 < FUNC_2(VAR_2); VAR_9++) {
   VAR_7 = &VAR_2[VAR_9];
   if (VAR_7->type != VAR_1)
    continue;
   VAR_5 = FUNC_0(VAR_6, VAR_7);
   FUNC_3(VAR_5, VAR_3, VAR_4);
   FUNC_1((char *)VAR_5->name);
  }
 }
}

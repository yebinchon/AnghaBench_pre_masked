
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg_state {int dummy; } ;
typedef int pud_t ;
typedef int pmd_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (struct pg_state*,unsigned long,int,int ,char const*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct pg_state*,int *,unsigned long,char const*) ;

__attribute__((used)) static void FUNC_8(struct pg_state *VAR_3, pud_t *VAR_4, unsigned long VAR_5)
{
 pmd_t *VAR_6 = FUNC_4(VAR_4, 0);
 unsigned long VAR_7;
 unsigned VAR_8;
 const char *VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++, VAR_6++) {
  VAR_7 = VAR_5 + VAR_8 * VAR_0;
  VAR_9 = FUNC_0(VAR_6);
  if (FUNC_3(*VAR_6) || FUNC_2(*VAR_6) || !FUNC_5(*VAR_6))
   FUNC_1(VAR_3, VAR_7, 3, FUNC_6(*VAR_6), VAR_9);
  else
   FUNC_7(VAR_3, VAR_6, VAR_7, VAR_9);

  if (VAR_2 < VAR_0 && FUNC_2(VAR_6[1])) {
   VAR_7 += VAR_2;
   VAR_6++;
   VAR_9 = FUNC_0(VAR_6);
   FUNC_1(VAR_3, VAR_7, 3, FUNC_6(*VAR_6), VAR_9);
  }
 }
}

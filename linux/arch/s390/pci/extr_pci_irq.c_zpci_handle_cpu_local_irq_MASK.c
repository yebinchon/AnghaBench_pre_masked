
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct airq_iv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct airq_iv*) ;
 int FUNC_1 (struct airq_iv*,unsigned long) ;
 unsigned long FUNC_2 (struct airq_iv*,unsigned long,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 size_t FUNC_5 () ;
 struct airq_iv** VAR_3 ;
 scalar_t__ FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(bool VAR_4)
{
 struct airq_iv *VAR_5 = VAR_3[FUNC_5()];
 unsigned long VAR_6;
 int VAR_7 = 0;

 for (VAR_6 = 0;;) {

  VAR_6 = FUNC_2(VAR_5, VAR_6, FUNC_0(VAR_5));
  if (VAR_6 == -1UL) {
   if (!VAR_4 || VAR_7++)

    break;

   if (FUNC_6(VAR_2, VAR_1))
    break;
   VAR_6 = 0;
   continue;
  }
  FUNC_4(VAR_0);
  FUNC_3(FUNC_1(VAR_5, VAR_6));
 }
}

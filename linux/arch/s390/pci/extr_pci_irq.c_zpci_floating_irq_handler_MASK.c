
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct airq_struct {int dummy; } ;
struct airq_iv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct airq_iv*) ;
 int FUNC_1 (struct airq_iv*,unsigned long) ;
 int FUNC_2 (struct airq_iv*,unsigned long) ;
 unsigned long FUNC_3 (struct airq_iv*,unsigned long,int ) ;
 int FUNC_4 (struct airq_iv*,unsigned long) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct airq_iv** VAR_4 ;
 struct airq_iv* VAR_5 ;
 scalar_t__ FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(struct airq_struct *VAR_6, bool VAR_7)
{
 unsigned long VAR_8, VAR_9;
 struct airq_iv *VAR_10;
 int VAR_11 = 0;

 FUNC_6(VAR_1);
 for (VAR_8 = 0;;) {

  VAR_8 = FUNC_3(VAR_5, VAR_8, FUNC_0(VAR_5));
  if (VAR_8 == -1UL) {
   if (VAR_11++)

    break;

   if (FUNC_7(VAR_3, VAR_2))
    break;
   VAR_8 = 0;
   continue;
  }


  VAR_10 = VAR_4[VAR_8];
  for (VAR_9 = 0;;) {
   VAR_9 = FUNC_3(VAR_10, VAR_9, FUNC_0(VAR_10));
   if (VAR_9 == -1UL)
    break;
   FUNC_6(VAR_0);
   FUNC_2(VAR_10, VAR_9);
   FUNC_5(FUNC_1(VAR_10, VAR_9));
   FUNC_4(VAR_10, VAR_9);
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,unsigned int) ;
 int VAR_1 ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 () ;
 unsigned int VAR_5 ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int VAR_6 ;
 int FUNC_9 (unsigned int,int *,int ) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_10(struct work_struct *VAR_8)
{
 unsigned int VAR_9;

 FUNC_3();

 FUNC_5();


 VAR_9 = FUNC_2(FUNC_8(), VAR_1);
        if (VAR_9 >= VAR_5) {
  VAR_9 = FUNC_1(VAR_1);

  if (VAR_4) {
   VAR_4 = 0;
   VAR_2 = 30*VAR_0/VAR_6;

   if (VAR_7 != -1) {
    FUNC_6("rtasd: enabling surveillance\n");
    FUNC_4(VAR_7);
    FUNC_6("rtasd: surveillance enabled\n");
   }
  }
 }

 FUNC_9(VAR_9, &VAR_3,
  FUNC_0(VAR_2, VAR_9));

 FUNC_7();
}

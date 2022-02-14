
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crng_state {unsigned long* state; scalar_t__ init_time; } ;
typedef int __u32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,unsigned long*,int,int ) ;
 int FUNC_1 (unsigned long*,int) ;
 int FUNC_2 (unsigned long*) ;
 int FUNC_3 (unsigned long*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 () ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (unsigned long*,char*,int) ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 struct crng_state VAR_4 ;
 unsigned long FUNC_8 () ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_9(struct crng_state *VAR_6)
{
 int VAR_7;
 int VAR_8 = 1;
 unsigned long VAR_9;

 FUNC_5(&VAR_6->state[0], "expand 32-byte k", 16);
 if (VAR_6 == &VAR_4)
  FUNC_0(&VAR_2, &VAR_6->state[4],
     sizeof(__u32) * 12, 0);
 else
  FUNC_1(&VAR_6->state[4], sizeof(__u32) * 12);
 for (VAR_7 = 4; VAR_7 < 16; VAR_7++) {
  if (!FUNC_3(&VAR_9) &&
      !FUNC_2(&VAR_9)) {
   VAR_9 = FUNC_8();
   VAR_8 = 0;
  }
  VAR_6->state[VAR_7] ^= VAR_9;
 }
 if (VAR_5 && VAR_8 && VAR_6 == &VAR_4) {
  FUNC_4();
  FUNC_6();
  VAR_1 = 2;
  FUNC_7("random: crng done (trusting CPU's manufacturer)\n");
 }
 VAR_6->init_time = VAR_3 - VAR_0 - 1;
}

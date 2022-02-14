
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crng_state {int lock; int * state; } ;
typedef int __u8 ;
typedef int __u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct crng_state *VAR_2,
        __u8 VAR_3[VAR_0], int VAR_4)
{
 unsigned long VAR_5;
 __u32 *VAR_6, *VAR_7;
 int VAR_8;

 VAR_4 = FUNC_1(VAR_4, sizeof(__u32));
 if (VAR_4 + VAR_1 > VAR_0) {
  FUNC_0(VAR_3);
  VAR_4 = 0;
 }
 FUNC_2(&VAR_2->lock, VAR_5);
 VAR_6 = (__u32 *) &VAR_3[VAR_4];
 VAR_7 = &VAR_2->state[4];
 for (VAR_8=0; VAR_8 < 8; VAR_8++)
  *VAR_7++ ^= *VAR_6++;
 FUNC_3(&VAR_2->lock, VAR_5);
}

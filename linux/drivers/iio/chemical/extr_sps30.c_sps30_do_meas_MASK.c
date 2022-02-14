
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sps30_state {scalar_t__ state; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sps30_state*,int ,int*,int) ;
 int FUNC_2 (int*) ;

__attribute__((used)) static int FUNC_3(struct sps30_state *VAR_7, s32 *VAR_8, int VAR_9)
{
 int VAR_10, VAR_11, VAR_12 = 5;
 u8 VAR_13[16];

 if (VAR_7->state == VAR_3) {
  VAR_11 = FUNC_1(VAR_7, VAR_6, ((void*)0), 0);
  if (VAR_11)
   return VAR_11;

  VAR_7->state = VAR_2;
 }

 while (VAR_12--) {
  VAR_11 = FUNC_1(VAR_7, VAR_5, VAR_13, 2);
  if (VAR_11)
   return -VAR_0;


  if (VAR_13[1] == 1)
   break;

  FUNC_0(300);
 }

 if (VAR_12 == -1)
  return -VAR_1;

 VAR_11 = FUNC_1(VAR_7, VAR_4, VAR_13, sizeof(int) * VAR_9);
 if (VAR_11)
  return VAR_11;

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
  VAR_8[VAR_10] = FUNC_2(&VAR_13[4 * VAR_10]);

 return 0;
}

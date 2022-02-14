
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t u32 ;
struct mdp5_smp_state {void* state; void** client_state; } ;
struct mdp5_smp {int blk_cnt; TYPE_1__* dev; scalar_t__* reserved; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (char*,int,scalar_t__) ;
 int FUNC_1 (int ,char*,int,int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (void*,int) ;
 int FUNC_4 (void*,int) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int,void*) ;

__attribute__((used)) static int FUNC_7(struct mdp5_smp *VAR_1,
  struct mdp5_smp_state *VAR_2,
  u32 VAR_3, int VAR_4)
{
 void *VAR_5 = VAR_2->client_state[VAR_3];
 int VAR_6, VAR_7, VAR_8 = VAR_1->blk_cnt;
 uint8_t VAR_9;


 FUNC_2(FUNC_3(VAR_5, VAR_8) > 0);

 VAR_9 = VAR_1->reserved[VAR_3];

 if (VAR_9) {
  VAR_4 = FUNC_5(0, VAR_4 - VAR_9);
  FUNC_0("%d MMBs allocated (%d reserved)", VAR_4, VAR_9);
 }

 VAR_7 = VAR_8 - FUNC_3(VAR_2->state, VAR_8);
 if (VAR_4 > VAR_7) {
  FUNC_1(VAR_1->dev->dev, "out of blks (req=%d > avail=%d)\n",
    VAR_4, VAR_7);
  return -VAR_0;
 }

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  int VAR_10 = FUNC_4(VAR_2->state, VAR_8);
  FUNC_6(VAR_10, VAR_5);
  FUNC_6(VAR_10, VAR_2->state);
 }

 return 0;
}

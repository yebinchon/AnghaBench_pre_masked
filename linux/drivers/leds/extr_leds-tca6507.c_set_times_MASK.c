
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tca6507_chip {TYPE_2__* bank; TYPE_1__* client; } ;
struct TYPE_4__ {int ontime; int offtime; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int*,int*) ;
 int FUNC_1 (int *,char*,int,int ,int,int ,int) ;
 int FUNC_2 (struct tca6507_chip*,int ,int,int) ;
 int * VAR_7 ;

__attribute__((used)) static void FUNC_3(struct tca6507_chip *VAR_8, int VAR_9)
{
 int VAR_10, VAR_11;
 int VAR_12;

 VAR_12 = FUNC_0(VAR_8->bank[VAR_9].ontime, &VAR_10, &VAR_11);
 if (VAR_12 < 0)
  return;
 FUNC_1(&VAR_8->client->dev,
  "Chose on  times %d(%d) %d(%d) for %dms\n",
  VAR_10, VAR_7[VAR_10],
  VAR_11, VAR_7[VAR_11], VAR_8->bank[VAR_9].ontime);
 FUNC_2(VAR_8, VAR_2, VAR_9, VAR_11);
 FUNC_2(VAR_8, VAR_4, VAR_9, VAR_10);
 VAR_8->bank[VAR_9].ontime = VAR_12;

 VAR_12 = FUNC_0(VAR_8->bank[VAR_9].offtime, &VAR_10, &VAR_11);
 FUNC_1(&VAR_8->client->dev,
  "Chose off times %d(%d) %d(%d) for %dms\n",
  VAR_10, VAR_7[VAR_10],
  VAR_11, VAR_7[VAR_11], VAR_8->bank[VAR_9].offtime);
 FUNC_2(VAR_8, VAR_1, VAR_9, VAR_11);
 FUNC_2(VAR_8, VAR_3, VAR_9, VAR_10);
 FUNC_2(VAR_8, VAR_6, VAR_9, VAR_10);
 VAR_8->bank[VAR_9].offtime = VAR_12;

 FUNC_2(VAR_8, VAR_5, VAR_9, VAR_0);
}

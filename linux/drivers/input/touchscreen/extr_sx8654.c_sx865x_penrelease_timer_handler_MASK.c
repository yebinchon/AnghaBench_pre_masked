
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct sx8654 {TYPE_1__* client; int lock; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 struct sx8654* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct sx8654*) ;
 int VAR_0 ;
 struct sx8654* VAR_1 ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_2)
{
 struct sx8654 *VAR_3 = FUNC_1(VAR_3, VAR_2, VAR_0);
 unsigned long VAR_4;

 FUNC_2(&VAR_3->lock, VAR_4);
 FUNC_4(VAR_3);
 FUNC_3(&VAR_3->lock, VAR_4);
 FUNC_0(&VAR_3->client->dev, "penrelease by timer\n");
}

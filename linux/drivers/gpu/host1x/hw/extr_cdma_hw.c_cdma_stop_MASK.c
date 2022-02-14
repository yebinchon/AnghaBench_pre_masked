
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct host1x_channel {int dummy; } ;
struct host1x_cdma {int running; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct host1x_channel* FUNC_0 (struct host1x_cdma*) ;
 int FUNC_1 (struct host1x_cdma*,int ) ;
 int FUNC_2 (struct host1x_channel*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct host1x_cdma *VAR_3)
{
 struct host1x_channel *VAR_4 = FUNC_0(VAR_3);

 FUNC_3(&VAR_3->lock);

 if (VAR_3->running) {
  FUNC_1(VAR_3, VAR_0);
  FUNC_2(VAR_4, VAR_2,
     VAR_1);
  VAR_3->running = 0;
 }

 FUNC_4(&VAR_3->lock);
}

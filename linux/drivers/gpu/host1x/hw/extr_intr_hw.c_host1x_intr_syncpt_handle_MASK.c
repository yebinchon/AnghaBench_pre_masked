
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int work; } ;
struct host1x_syncpt {unsigned int id; TYPE_1__ intr; struct host1x* host; } ;
struct host1x {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct host1x*,int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct host1x_syncpt *VAR_0)
{
 unsigned int VAR_1 = VAR_0->id;
 struct host1x *VAR_2 = VAR_0->host;

 FUNC_3(VAR_2, FUNC_0(VAR_1 % 32),
  FUNC_2(VAR_1 / 32));
 FUNC_3(VAR_2, FUNC_0(VAR_1 % 32),
  FUNC_1(VAR_1 / 32));

 FUNC_4(&VAR_0->intr.work);
}

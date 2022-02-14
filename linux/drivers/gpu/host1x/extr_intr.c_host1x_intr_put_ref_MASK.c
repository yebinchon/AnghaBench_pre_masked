
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct host1x_waitlist {int refcount; int state; } ;
struct host1x_syncpt {int dummy; } ;
struct host1x {struct host1x_syncpt* syncpt; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct host1x_syncpt*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct host1x*,struct host1x_syncpt*,int ) ;
 int FUNC_4 () ;
 int VAR_3 ;

void FUNC_5(struct host1x *VAR_4, unsigned int VAR_5, void *VAR_6)
{
 struct host1x_waitlist *VAR_7 = VAR_6;
 struct host1x_syncpt *VAR_8;

 while (FUNC_0(&VAR_7->state, VAR_1, VAR_0) ==
        VAR_2)
  FUNC_4();

 VAR_8 = VAR_4->syncpt + VAR_5;
 (void)FUNC_3(VAR_4, VAR_8,
    FUNC_1(VAR_4->syncpt + VAR_5));

 FUNC_2(&VAR_7->refcount, VAR_3);
}

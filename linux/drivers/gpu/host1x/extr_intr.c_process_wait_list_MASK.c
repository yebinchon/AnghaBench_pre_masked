
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct list_head {int dummy; } ;
struct TYPE_2__ {int lock; int wait_head; } ;
struct host1x_syncpt {TYPE_1__ intr; int id; } ;
struct host1x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (struct host1x*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,struct list_head*) ;
 int FUNC_4 (struct host1x*,int *,int ) ;
 int FUNC_5 (struct list_head*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct host1x *VAR_1,
        struct host1x_syncpt *VAR_2,
        u32 VAR_3)
{
 struct list_head VAR_4[VAR_0];
 unsigned int VAR_5;
 int VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5)
  FUNC_0(VAR_4 + VAR_5);

 FUNC_6(&VAR_2->intr.lock);

 FUNC_3(&VAR_2->intr.wait_head, VAR_3,
     VAR_4);

 VAR_6 = FUNC_2(&VAR_2->intr.wait_head);
 if (VAR_6)
  FUNC_1(VAR_1, VAR_2->id);
 else
  FUNC_4(VAR_1, &VAR_2->intr.wait_head,
       VAR_2->id);

 FUNC_7(&VAR_2->intr.lock);

 FUNC_5(VAR_4);

 return VAR_6;
}

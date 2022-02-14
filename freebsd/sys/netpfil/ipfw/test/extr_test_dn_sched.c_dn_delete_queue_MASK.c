
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ head; } ;
struct dn_queue {TYPE_1__ mq; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct dn_queue*) ;

int
FUNC_2(void *VAR_0, void *VAR_1)
{
 struct dn_queue *VAR_2 = VAR_0;

 (void)VAR_1;
        if (VAR_2->mq.head)
                FUNC_0(VAR_2->mq.head);
        FUNC_1(VAR_2);
        return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct lima_ip {TYPE_1__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct lima_ip*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct lima_ip *VAR_2)
{
 int VAR_3;

 FUNC_2(&VAR_2->data.lock);
 FUNC_0(VAR_0, VAR_1);
 VAR_3 = FUNC_1(VAR_2);
 FUNC_3(&VAR_2->data.lock);
 return VAR_3;
}

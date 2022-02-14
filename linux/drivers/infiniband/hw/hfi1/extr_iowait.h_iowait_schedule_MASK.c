
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct workqueue_struct {int dummy; } ;
struct iowait {TYPE_1__* wait; } ;
struct TYPE_2__ {int iowork; } ;


 size_t VAR_0 ;
 int FUNC_0 (int,struct workqueue_struct*,int *) ;

__attribute__((used)) static inline bool FUNC_1(struct iowait *VAR_1,
       struct workqueue_struct *VAR_2, int VAR_3)
{
 return !!FUNC_0(VAR_3, VAR_2, &VAR_1->wait[VAR_0].iowork);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {TYPE_1__* backing_dev_info; } ;
typedef int ssize_t ;
struct TYPE_2__ {int ra_pages; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,char*) ;

__attribute__((used)) static ssize_t FUNC_1(struct request_queue *VAR_1, char *VAR_2)
{
 unsigned long VAR_3 = VAR_1->backing_dev_info->ra_pages <<
     (VAR_0 - 10);

 return FUNC_0(VAR_3, (VAR_2));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ timestamp_t ;
struct commit_list {TYPE_1__* item; } ;
struct commit {int dummy; } ;
struct TYPE_2__ {scalar_t__ date; } ;


 int VAR_0 ;
 int FUNC_0 (struct commit_list*,struct commit**) ;

__attribute__((used)) static int FUNC_1(struct commit_list *VAR_1, timestamp_t VAR_2, int VAR_3,
        struct commit **VAR_4)
{



 if (!VAR_1)
  return 0;





 if (VAR_2 <= VAR_1->item->date)
  return VAR_0;





 if (!FUNC_0(VAR_1, VAR_4))
  return VAR_0;


 return VAR_3-1;
}

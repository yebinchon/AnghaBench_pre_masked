
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_uverbs_event_file {int ref; scalar_t__ is_async; } ;
struct fd {TYPE_1__* file; } ;
struct TYPE_2__ {struct ib_uverbs_event_file* private_data; int * f_op; } ;


 struct fd FUNC_0 (int) ;
 int FUNC_1 (struct fd) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

struct ib_uverbs_event_file *FUNC_3(int VAR_1)
{
 struct ib_uverbs_event_file *VAR_2 = ((void*)0);
 struct fd VAR_3 = FUNC_0(VAR_1);

 if (!VAR_3.file)
  return ((void*)0);

 if (VAR_3.file->f_op != &VAR_0)
  goto out;

 VAR_2 = VAR_3.file->private_data;
 if (VAR_2->is_async) {
  VAR_2 = ((void*)0);
  goto out;
 }

 FUNC_2(&VAR_2->ref);

out:
 FUNC_1(VAR_3);
 return VAR_2;
}

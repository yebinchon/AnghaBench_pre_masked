
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct request_queue {TYPE_1__ kobj; int queue_flags; } ;


 int VAR_0 ;
 char const* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static const char *FUNC_2(struct request_queue *VAR_1)
{
 if (FUNC_1(VAR_0, &VAR_1->queue_flags))
  return FUNC_0(VAR_1->kobj.parent);
 else
  return "<unknown>";
}

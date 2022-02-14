
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int free; int close; int action; } ;
struct TYPE_4__ {int size; int data; } ;
struct fuzzer_subtransport {TYPE_1__ base; TYPE_2__ data; int * owner; } ;
struct fuzzer_buffer {int size; int data; } ;
typedef int git_transport ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fuzzer_subtransport* FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(
 struct fuzzer_subtransport **VAR_3,
 git_transport *VAR_4,
 const struct fuzzer_buffer *VAR_5)
{
 struct fuzzer_subtransport *VAR_6 = FUNC_0(sizeof(*VAR_6));
 if (!VAR_6)
  return -1;

 VAR_6->owner = VAR_4;
 VAR_6->data.data = VAR_5->data;
 VAR_6->data.size = VAR_5->size;
 VAR_6->base.action = VAR_0;
 VAR_6->base.close = VAR_1;
 VAR_6->base.free = VAR_2;

 *VAR_3 = VAR_6;

 return 0;
}

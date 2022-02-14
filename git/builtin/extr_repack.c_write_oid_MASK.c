
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct packed_git {int dummy; } ;
struct object_id {int dummy; } ;
struct child_process {int in; } ;
struct TYPE_2__ {int hexsz; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (struct object_id const*) ;
 scalar_t__ FUNC_3 (struct child_process*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_4 (int,char*,int) ;

__attribute__((used)) static int FUNC_5(const struct object_id *VAR_1, struct packed_git *VAR_2,
       uint32_t VAR_3, void *VAR_4)
{
 struct child_process *VAR_5 = VAR_4;

 if (VAR_5->in == -1) {
  if (FUNC_3(VAR_5))
   FUNC_1(FUNC_0("could not start pack-objects to repack promisor objects"));
 }

 FUNC_4(VAR_5->in, FUNC_2(VAR_1), VAR_0->hexsz);
 FUNC_4(VAR_5->in, "\n", 1);
 return 0;
}

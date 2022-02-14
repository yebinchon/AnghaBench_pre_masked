
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct process_commit_data {int current_commit; } ;
struct TYPE_2__ {int oid; } ;
struct commit {TYPE_1__ object; } ;



__attribute__((used)) static void FUNC_0(struct commit *VAR_0, void *VAR_1)
{
 struct process_commit_data *VAR_2 = VAR_1;
 VAR_2->current_commit = VAR_0->object.oid;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct notes_merge_pair {int obj; int remote; int local; int base; } ;
struct notes_merge_options {TYPE_1__* repo; int remote_ref; int local_ref; } ;
struct TYPE_10__ {int ptr; } ;
typedef TYPE_2__ mmfile_t ;
struct TYPE_11__ {int ptr; int size; } ;
typedef TYPE_3__ mmbuffer_t ;
struct TYPE_9__ {int index; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int ,TYPE_2__*,int *,TYPE_2__*,int ,TYPE_2__*,int ,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct notes_merge_options *VAR_0,
    struct notes_merge_pair *VAR_1)
{
 mmbuffer_t VAR_2;
 mmfile_t VAR_3, VAR_4, VAR_5;
 int VAR_6;

 FUNC_4(&VAR_3, &VAR_1->base);
 FUNC_4(&VAR_4, &VAR_1->local);
 FUNC_4(&VAR_5, &VAR_1->remote);

 VAR_6 = FUNC_2(&VAR_2, FUNC_3(&VAR_1->obj), &VAR_3, ((void*)0),
     &VAR_4, VAR_0->local_ref, &VAR_5, VAR_0->remote_ref,
     VAR_0->repo->index, ((void*)0));

 FUNC_1(VAR_3.ptr);
 FUNC_1(VAR_4.ptr);
 FUNC_1(VAR_5.ptr);

 if ((VAR_6 < 0) || !VAR_2.ptr)
  FUNC_0("Failed to execute internal merge");

 FUNC_5(&VAR_1->obj, VAR_2.ptr, VAR_2.size);
 FUNC_1(VAR_2.ptr);

 return VAR_6;
}

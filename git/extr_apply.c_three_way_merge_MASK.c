
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct image {int len; scalar_t__ buf; } ;
struct apply_state {TYPE_1__* repo; } ;
struct TYPE_10__ {scalar_t__ ptr; } ;
typedef TYPE_2__ mmfile_t ;
struct TYPE_11__ {int size; scalar_t__ ptr; int * member_0; } ;
typedef TYPE_3__ mmbuffer_t ;
struct TYPE_9__ {int index; } ;


 int FUNC_0 (struct image*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_3__*,char*,TYPE_2__*,char*,TYPE_2__*,char*,TYPE_2__*,char*,int ,int *) ;
 int FUNC_3 (TYPE_2__*,struct object_id const*) ;

__attribute__((used)) static int FUNC_4(struct apply_state *VAR_0,
      struct image *VAR_1,
      char *VAR_2,
      const struct object_id *VAR_3,
      const struct object_id *VAR_4,
      const struct object_id *VAR_5)
{
 mmfile_t VAR_6, VAR_7, VAR_8;
 mmbuffer_t VAR_9 = { ((void*)0) };
 int VAR_10;

 FUNC_3(&VAR_6, VAR_3);
 FUNC_3(&VAR_7, VAR_4);
 FUNC_3(&VAR_8, VAR_5);
 VAR_10 = FUNC_2(&VAR_9, VAR_2,
     &VAR_6, "base",
     &VAR_7, "ours",
     &VAR_8, "theirs",
     VAR_0->repo->index,
     ((void*)0));
 FUNC_1(VAR_6.ptr);
 FUNC_1(VAR_7.ptr);
 FUNC_1(VAR_8.ptr);
 if (VAR_10 < 0 || !VAR_9.ptr) {
  FUNC_1(VAR_9.ptr);
  return -1;
 }
 FUNC_0(VAR_1);
 VAR_1->buf = VAR_9.ptr;
 VAR_1->len = VAR_9.size;

 return VAR_10;
}

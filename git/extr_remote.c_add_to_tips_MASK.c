
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tips {scalar_t__ nr; struct commit** tip; int alloc; } ;
struct object_id {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct commit {TYPE_1__ object; } ;


 int FUNC_0 (struct commit**,scalar_t__,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct object_id const*) ;
 struct commit* FUNC_2 (int ,struct object_id const*,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct tips *VAR_2, const struct object_id *VAR_3)
{
 struct commit *VAR_4;

 if (FUNC_1(VAR_3))
  return;
 VAR_4 = FUNC_2(VAR_1, VAR_3, 1);
 if (!VAR_4 || (VAR_4->object.flags & VAR_0))
  return;
 VAR_4->object.flags |= VAR_0;
 FUNC_0(VAR_2->tip, VAR_2->nr + 1, VAR_2->alloc);
 VAR_2->tip[VAR_2->nr++] = VAR_4;
}

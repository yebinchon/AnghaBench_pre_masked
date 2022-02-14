
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmw_resource {size_t backup_size; size_t id; } ;
struct vmw_cotable {int seen_entries; size_t type; scalar_t__ scrubbed; } ;
struct TYPE_2__ {int size; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct vmw_cotable* FUNC_1 (struct vmw_resource*) ;
 int FUNC_2 (struct vmw_resource*,size_t) ;
 int FUNC_3 (struct vmw_resource*) ;
 scalar_t__ FUNC_4 (struct vmw_resource*) ;

__attribute__((used)) static int FUNC_5(struct vmw_resource *VAR_1)
{
 struct vmw_cotable *VAR_2 = FUNC_1(VAR_1);
 size_t VAR_3 = VAR_1->backup_size;
 size_t VAR_4;
 int VAR_5;


 VAR_4 = (VAR_2->seen_entries + 1) * VAR_0[VAR_2->type].size;
 while (VAR_4 > VAR_3)
  VAR_3 *= 2;

 if (FUNC_0(VAR_3 <= VAR_1->backup_size)) {
  if (VAR_2->scrubbed && FUNC_4(VAR_1)) {
   VAR_5 = FUNC_3(VAR_1);
   if (VAR_5)
    return VAR_5;
  }
  VAR_1->id = VAR_2->type;
  return 0;
 }

 return FUNC_2(VAR_1, VAR_3);
}

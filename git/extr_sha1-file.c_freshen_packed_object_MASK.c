
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pack_entry {TYPE_1__* p; } ;
struct object_id {int dummy; } ;
struct TYPE_2__ {int freshened; int pack_name; } ;


 int FUNC_0 (int ,struct object_id const*,struct pack_entry*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(const struct object_id *VAR_1)
{
 struct pack_entry VAR_2;
 if (!FUNC_0(VAR_0, VAR_1, &VAR_2))
  return 0;
 if (VAR_2.p->freshened)
  return 1;
 if (!FUNC_1(VAR_2.p->pack_name))
  return 0;
 VAR_2.p->freshened = 1;
 return 1;
}

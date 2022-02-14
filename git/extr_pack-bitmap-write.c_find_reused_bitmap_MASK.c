
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct ewah_bitmap {int dummy; } ;
typedef scalar_t__ khiter_t ;
struct TYPE_2__ {int reused; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,struct object_id const) ;
 struct ewah_bitmap* FUNC_2 (int ,scalar_t__) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static struct ewah_bitmap *FUNC_3(const struct object_id *VAR_1)
{
 khiter_t VAR_2;

 if (!VAR_0.reused)
  return ((void*)0);

 VAR_2 = FUNC_1(VAR_0.reused, *VAR_1);
 if (VAR_2 >= FUNC_0(VAR_0.reused))
  return ((void*)0);

 return FUNC_2(VAR_0.reused, VAR_2);
}

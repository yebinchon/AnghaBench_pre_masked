
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_id {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
struct TYPE_2__ {int oid; } ;


 int FUNC_0 (struct object_id const*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,struct object_id const*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_2(const struct object_id *VAR_2,
        int *VAR_3, int *VAR_4,
        enum object_type VAR_5)
{
 int VAR_6 = FUNC_0(VAR_2, VAR_5);
 int VAR_7 = VAR_6;
 int VAR_8 = VAR_0 - 1;

 if (VAR_6 < 0) {
  *VAR_3 = 0;
  *VAR_4 = -1;
  return;
 }
 while (VAR_6 > 0 && FUNC_1(&VAR_1[VAR_6 - 1].oid, VAR_2))
  --VAR_6;
 while (VAR_7 < VAR_8 && FUNC_1(&VAR_1[VAR_7 + 1].oid, VAR_2))
  ++VAR_7;
 *VAR_3 = VAR_6;
 *VAR_4 = VAR_7;
}

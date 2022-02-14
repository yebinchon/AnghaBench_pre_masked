
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ sin6_family; } ;
struct TYPE_6__ {TYPE_2__ address6; } ;
struct TYPE_8__ {int is_internal; TYPE_1__ address; } ;
typedef TYPE_3__ uv_interface_address_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,int) ;
 scalar_t__ FUNC_1 (TYPE_3__**,int*) ;

__attribute__((used)) static int FUNC_2(void) {
  uv_interface_address_t* VAR_1;
  int VAR_2;
  int VAR_3;
  int VAR_4;

  if (FUNC_1(&VAR_1, &VAR_3))
    return 0;

  VAR_2 = 0;
  for (VAR_4 = 0; VAR_2 == 0 && VAR_4 < VAR_3; VAR_4 += 1)
    VAR_2 = (VAR_0 == VAR_1[VAR_4].address.address6.sin6_family &&
                 !VAR_1[VAR_4].is_internal);

  FUNC_0(VAR_1, VAR_3);
  return VAR_2;
}

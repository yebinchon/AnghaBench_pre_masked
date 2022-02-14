
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* uma_zone_t ;
typedef TYPE_2__* uma_keg_t ;
typedef int uma_init ;
typedef int uma_fini ;
typedef int uma_dtor ;
typedef int uma_ctor ;
struct uma_zctor_args {char* name; int flags; TYPE_2__* keg; int align; int fini; int uminit; int dtor; int ctor; int size; } ;
typedef int args ;
struct TYPE_7__ {int uk_flags; int uk_align; int uk_size; } ;
struct TYPE_6__ {TYPE_2__* uz_keg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct uma_zctor_args*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 TYPE_1__* FUNC_3 (int ,struct uma_zctor_args*,int ,int ) ;
 int VAR_6 ;

uma_zone_t
FUNC_4(char *VAR_7, uma_ctor VAR_8, uma_dtor VAR_9,
      uma_init VAR_10, uma_fini VAR_11, uma_zone_t VAR_12)
{
 struct uma_zctor_args VAR_13;
 uma_keg_t VAR_14;
 uma_zone_t VAR_15;
 bool VAR_16;

 VAR_14 = VAR_12->uz_keg;
 FUNC_0(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.name = VAR_7;
 VAR_13.size = VAR_14->uk_size;
 VAR_13.ctor = VAR_8;
 VAR_13.dtor = VAR_9;
 VAR_13.uminit = VAR_10;
 VAR_13.fini = VAR_11;
 VAR_13.align = VAR_14->uk_align;
 VAR_13.flags = VAR_14->uk_flags | VAR_3;
 VAR_13.keg = VAR_14;

 if (VAR_4 < VAR_0) {
  VAR_16 = 0;
 } else {
  FUNC_1(&VAR_5);
  VAR_16 = 1;
 }

 VAR_15 = FUNC_3(VAR_6, &VAR_13, VAR_2, VAR_1);
 if (VAR_16)
  FUNC_2(&VAR_5);
 return (VAR_15);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_ooffset_t ;
typedef int vm_memattr_t ;
struct cdev {int dummy; } ;
struct TYPE_4__ {int mr_ndesc; TYPE_1__* mr_desc; } ;
struct TYPE_3__ {int mr_flags; scalar_t__ mr_base; scalar_t__ mr_len; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct cdev*) ;
 TYPE_2__ VAR_8 ;

int
FUNC_1(struct cdev *VAR_9, vm_ooffset_t VAR_10, vm_paddr_t *VAR_11,
    int VAR_12, vm_memattr_t *VAR_13)
{
 int VAR_14;

 if (FUNC_0(VAR_9) == VAR_0)
  *VAR_11 = VAR_10;
 else
  return (VAR_1);

 for (VAR_14 = 0; VAR_14 < VAR_8.mr_ndesc; VAR_14++) {
  if (!(VAR_8.mr_desc[VAR_14].mr_flags & VAR_2))
   continue;

  if (VAR_10 >= VAR_8.mr_desc[VAR_14].mr_base &&
      VAR_10 < VAR_8.mr_desc[VAR_14].mr_base +
      VAR_8.mr_desc[VAR_14].mr_len) {
   switch (VAR_8.mr_desc[VAR_14].mr_flags &
       VAR_3) {
   case 130:
    *VAR_13 = VAR_5;
    break;
   case 129:
    *VAR_13 = VAR_6;
    break;
   case 131:
    *VAR_13 = VAR_4;
    break;
   case 128:
    *VAR_13 = VAR_7;
    break;
   }

   break;
  }
 }

 return (0);
}

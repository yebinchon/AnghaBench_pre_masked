
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef int vm_prot_t ;
typedef int vm_offset_t ;
typedef TYPE_1__* vm_map_t ;
typedef scalar_t__ rlim_t ;
struct TYPE_6__ {int flags; scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,scalar_t__,scalar_t__,int ,int ,int) ;
 int FUNC_4 (TYPE_1__*) ;

int
FUNC_5(vm_map_t VAR_5, vm_offset_t VAR_6, vm_size_t VAR_7,
    vm_prot_t VAR_8, vm_prot_t VAR_9, int VAR_10)
{
 vm_size_t VAR_11, VAR_12;
 rlim_t VAR_13;
 int VAR_14;

 FUNC_0((VAR_5->flags & VAR_1) == 0);
 VAR_11 = VAR_4;
 VAR_12 = (VAR_7 < VAR_11) ? VAR_7 : VAR_11;
 FUNC_2(VAR_5);
 VAR_13 = FUNC_1(VAR_3, VAR_2);

 if (VAR_5->size + VAR_12 > VAR_13) {
  VAR_14 = VAR_0;
  goto out;
 }
 VAR_14 = FUNC_3(VAR_5, VAR_6, VAR_7, VAR_11, VAR_8,
     VAR_9, VAR_10);
out:
 FUNC_4(VAR_5);
 return (VAR_14);
}

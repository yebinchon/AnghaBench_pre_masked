
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef TYPE_1__* uma_slab_t ;
struct domainset {int dummy; } ;
struct TYPE_5__ {int us_flags; int us_domain; int us_size; void* us_data; } ;


 struct domainset* FUNC_0 (int) ;
 struct domainset* FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct domainset*,int ,int) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__,TYPE_1__*) ;
 TYPE_1__* FUNC_9 (int ,int *,int,int) ;
 int FUNC_10 (int ,TYPE_1__*,int *,int ) ;

void *
FUNC_11(vm_size_t VAR_5, int VAR_6, int VAR_7)
{
 struct domainset *VAR_8;
 vm_offset_t VAR_9;
 uma_slab_t VAR_10;

 if (VAR_6 != VAR_1) {

  if (FUNC_3(VAR_6))
   VAR_6 = VAR_1;
 }
 VAR_10 = FUNC_9(VAR_4, ((void*)0), VAR_6, VAR_7);
 if (VAR_10 == ((void*)0))
  return (((void*)0));
 VAR_8 = (VAR_6 == VAR_1) ? FUNC_1() :
     FUNC_0(VAR_6);
 VAR_9 = FUNC_4(VAR_8, VAR_5, VAR_7);
 if (VAR_9 != 0) {
  FUNC_8(VAR_9, VAR_10);
  VAR_10->us_data = (void *)VAR_9;
  VAR_10->us_flags = VAR_2 | VAR_3;
  VAR_10->us_size = VAR_5;
  VAR_10->us_domain = FUNC_7(FUNC_2(
      FUNC_5(VAR_9)));
  FUNC_6(VAR_5);
 } else {
  FUNC_10(VAR_4, VAR_10, ((void*)0), VAR_0);
 }

 return ((void *)VAR_9);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
typedef int u32 ;
typedef scalar_t__ efi_status_t ;
typedef int efi_char16_t ;
struct TYPE_2__ {scalar_t__ (* query_variable_info ) (int,unsigned long*,unsigned long*,unsigned long*) ;scalar_t__ (* set_variable ) (int *,int *,int,unsigned long,void*) ;} ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_0 () ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (unsigned long,int ) ;
 scalar_t__ FUNC_3 (int,unsigned long) ;
 scalar_t__ FUNC_4 (int,unsigned long*,unsigned long*,unsigned long*) ;
 scalar_t__ FUNC_5 (int *,int *,int,unsigned long,void*) ;
 scalar_t__ FUNC_6 (int,unsigned long*,unsigned long*,unsigned long*) ;

efi_status_t FUNC_7(u32 VAR_11, unsigned long VAR_12,
          bool VAR_13)
{
 efi_status_t VAR_14;
 u64 VAR_15, VAR_16, VAR_17;

 if (!(VAR_11 & VAR_5))
  return 0;

 if (VAR_13)
  return FUNC_3(VAR_11, VAR_12);

 VAR_14 = VAR_8.query_variable_info(VAR_11, &VAR_15,
      &VAR_16, &VAR_17);
 if (VAR_14 != VAR_3)
  return VAR_14;






 if ((VAR_16 - VAR_12 < VAR_1) &&
  !VAR_10) {






  unsigned long VAR_18 = VAR_16 + 1024;
  void *VAR_19 = FUNC_2(VAR_18, VAR_7);

  if (!VAR_19)
   return VAR_2;

  VAR_14 = VAR_8.set_variable((efi_char16_t *)VAR_9,
       &VAR_0,
       VAR_5 |
       VAR_4 |
       VAR_6,
       VAR_18, VAR_19);

  if (VAR_14 == VAR_3) {




   FUNC_0();
  }

  FUNC_1(VAR_19);





  VAR_14 = VAR_8.query_variable_info(VAR_11, &VAR_15,
       &VAR_16, &VAR_17);

  if (VAR_14 != VAR_3)
   return VAR_14;




  if (VAR_16 - VAR_12 < VAR_1)
   return VAR_2;
 }

 return VAR_3;
}

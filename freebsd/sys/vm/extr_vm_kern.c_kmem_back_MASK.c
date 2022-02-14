
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_offset_t ;
typedef int vm_object_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int,int ,int,int,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int,int ) ;
 int VAR_4 ;

int
FUNC_5(vm_object_t VAR_5, vm_offset_t VAR_6, vm_size_t VAR_7, int VAR_8)
{
 vm_offset_t VAR_9, VAR_10, VAR_11;
 int VAR_12, VAR_13;

 FUNC_0(VAR_5 == VAR_3,
     ("kmem_back: only supports kernel object."));

 for (VAR_11 = VAR_6, VAR_9 = VAR_6 + VAR_7; VAR_6 < VAR_9; VAR_6 = VAR_10) {




  if (VAR_4 > 1) {
   VAR_12 = (VAR_6 >> VAR_2) % VAR_4;
   while (FUNC_1(VAR_12))
    VAR_12++;
   VAR_10 = FUNC_4(VAR_6 + 1, VAR_1);
   if (VAR_10 > VAR_9 || VAR_10 < VAR_11)
    VAR_10 = VAR_9;
  } else {
   VAR_12 = 0;
   VAR_10 = VAR_9;
  }
  VAR_13 = FUNC_2(VAR_12, VAR_5, VAR_6, VAR_10 - VAR_6, VAR_8);
  if (VAR_13 != VAR_0) {
   FUNC_3(VAR_5, VAR_11, VAR_6 - VAR_11);
   break;
  }
 }
 return (VAR_13);
}

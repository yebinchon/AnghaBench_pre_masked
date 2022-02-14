
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef uintptr_t vm_offset_t ;
typedef int register_t ;
typedef int emergency_buffer ;
typedef int cell_t ;


 uintptr_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,void const*,size_t) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int FUNC_2 (char*) ;
 int VAR_7 ;

__attribute__((used)) static cell_t
FUNC_3(const void *VAR_8, size_t VAR_9)
{
 static char VAR_10[255];
 cell_t VAR_11;

 FUNC_1(&VAR_2, VAR_1);

 if (VAR_6 == ((void*)0)) {





  if (!VAR_7)
   return (cell_t)((uintptr_t)VAR_8 & ~VAR_0);







  VAR_6 = VAR_10;
  VAR_4 = (vm_offset_t)VAR_6 &
      ~VAR_0;
  VAR_5 = sizeof(VAR_10);
 }





 VAR_3 += sizeof(register_t) -
     (VAR_3 % sizeof(register_t));

 if (VAR_3 + VAR_9 > VAR_5) {
  FUNC_2("Oversize Open Firmware call!");
  return 0;
 }

 if (VAR_8 != ((void*)0))
  FUNC_0(VAR_6 + VAR_3, VAR_8, VAR_9);
 else
  return (0);

 VAR_11 = VAR_4 + VAR_3;

 VAR_3 += VAR_9;

 return (VAR_11);
}

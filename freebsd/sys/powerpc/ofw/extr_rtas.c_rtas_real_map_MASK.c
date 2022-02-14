
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int register_t ;
typedef scalar_t__ cell_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,void const*,size_t) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static cell_t
FUNC_3(const void *VAR_6, size_t VAR_7)
{
 cell_t VAR_8;

 FUNC_1(&VAR_5, VAR_0);





 VAR_1 += sizeof(register_t) -
     (VAR_1 % sizeof(register_t));

 if (VAR_1 + VAR_7 > VAR_3) {
  FUNC_2("Oversize RTAS call!");
  return 0;
 }

 if (VAR_6 != ((void*)0))
  FUNC_0(VAR_4 + VAR_1, VAR_6, VAR_7);
 else
  return (0);

 VAR_8 = VAR_2 + VAR_1;
 VAR_1 += VAR_7;

 return (VAR_8);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (scalar_t__*,int ,size_t) ;
 int * VAR_4 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(u8 *VAR_5, size_t VAR_6, u8 VAR_7)
{
 if (VAR_6 > VAR_3) {
  FUNC_1("Can't build locking range. Length OOB\n");
  return -VAR_0;
 }

 FUNC_0(VAR_5, VAR_4[VAR_2], VAR_3);

 if (VAR_7 == 0)
  return 0;

 VAR_5[5] = VAR_1;
 VAR_5[7] = VAR_7;

 return 0;
}

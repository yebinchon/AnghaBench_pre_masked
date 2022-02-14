
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (scalar_t__*,int ,size_t) ;
 int * VAR_3 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(u8 *VAR_4, size_t VAR_5, u8 VAR_6)
{
 if (VAR_5 > VAR_1) {
  FUNC_1("Can't build locking range user. Length OOB\n");
  return -VAR_0;
 }

 FUNC_0(VAR_4, VAR_3[VAR_2], VAR_1);

 VAR_4[7] = VAR_6 + 1;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int u_char ;
typedef scalar_t__ lba_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int ,int*,int) ;
 int FUNC_2 (int*,int ) ;
 int FUNC_3 (int*,scalar_t__) ;
 int* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int*,void*,int) ;
 int FUNC_6 (int*,int ,scalar_t__) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int
FUNC_7(lba_t VAR_6, void *VAR_7)
{
 u_char *VAR_8;
 uint32_t VAR_9;
 int VAR_10;

 VAR_9 = (VAR_6 > VAR_3) ? VAR_3 : (uint32_t)VAR_6 - 1;

 VAR_8 = FUNC_4(VAR_5);
 if (VAR_8 == ((void*)0))
  return (VAR_4);
 if (VAR_7 != ((void*)0)) {
  FUNC_5(VAR_8, VAR_7, VAR_2);
  FUNC_6(VAR_8 + VAR_2, 0, VAR_5 - VAR_2);
 } else
  FUNC_6(VAR_8, 0, VAR_5);
 VAR_8[VAR_2 + 2] = 2;
 VAR_8[VAR_2 + 4] = 0xee;
 VAR_8[VAR_2 + 5] = 0xff;
 VAR_8[VAR_2 + 6] = 0xff;
 VAR_8[VAR_2 + 7] = 0xff;
 FUNC_3(VAR_8 + VAR_2 + 8, 1);
 FUNC_3(VAR_8 + VAR_2 + 12, VAR_9);
 FUNC_2(VAR_8 + VAR_1, VAR_0);
 VAR_10 = FUNC_1(0, VAR_8, 1);
 FUNC_0(VAR_8);
 return (VAR_10);
}

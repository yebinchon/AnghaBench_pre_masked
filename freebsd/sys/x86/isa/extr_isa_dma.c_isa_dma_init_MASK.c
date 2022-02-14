
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,int ,int ) ;
 void* FUNC_1 (int ,int ,int,unsigned long,int,unsigned long,int) ;
 int ** VAR_3 ;
 int * VAR_4 ;
 int FUNC_2 (void*,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (void*,int ,int) ;
 void* FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;

int
FUNC_8(int VAR_6, u_int VAR_7, int VAR_8)
{
 void *VAR_9;
 int VAR_10;
 VAR_9 = FUNC_4(VAR_7, VAR_1, VAR_8);
 if (VAR_9 != ((void*)0)) {
  if (FUNC_3(VAR_9, VAR_7, VAR_6) != 0) {
   FUNC_2(VAR_9, VAR_1);
   VAR_9 = ((void*)0);
  }
  VAR_10 = 0;
 }

 if (VAR_9 == ((void*)0)) {
  VAR_9 = FUNC_1(VAR_7, VAR_1, VAR_8, 0ul, 0xfffffful,
      1ul, VAR_6 & 4 ? 0x20000ul : 0x10000ul);
  VAR_10 = 1;
 }

 if (VAR_9 == ((void*)0))
  return (VAR_0);

 FUNC_5(&VAR_5);
 if (VAR_3[VAR_6] != ((void*)0)) {
  if (VAR_10)
   FUNC_0(VAR_9, VAR_7, VAR_1);
  else
   FUNC_2(VAR_9, VAR_1);
  FUNC_6(&VAR_5);
  return (0);
 }

 VAR_4[VAR_6] = VAR_7;
 VAR_3[VAR_6] = VAR_9;

 FUNC_6(&VAR_5);

 return (0);
}

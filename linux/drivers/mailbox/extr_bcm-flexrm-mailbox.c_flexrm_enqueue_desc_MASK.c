
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int desc ;


 int VAR_0 ;
 int FUNC_0 (int,int,int,int,int,int) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*,int ) ;

__attribute__((used)) static void FUNC_3(u32 VAR_1, u32 VAR_2, u32 VAR_3,
     u64 VAR_4, void **VAR_5, u32 *VAR_6,
     void *VAR_7, void *VAR_8)
{
 u64 VAR_9;
 u32 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;


 if (VAR_2 <= VAR_1)
  return;
 if ((VAR_1 % VAR_0 == 0) && (VAR_2 - VAR_1)) {

  VAR_10 = (VAR_2 - VAR_1);
  VAR_11 = (VAR_1 == 0) ? !(*VAR_6) : (*VAR_6);
  VAR_12 = (VAR_1 == 0) ? 0x1 : 0x0;
  VAR_13 = (VAR_10 <= VAR_0) ? 0x1 : 0x0;
  VAR_14 = (VAR_10 <= VAR_0) ?
    VAR_10 : VAR_0;
  if (VAR_10 <= VAR_0)
   VAR_14 = VAR_10;
  else
   VAR_14 = VAR_0;
  VAR_9 = FUNC_0(VAR_11, VAR_12, VAR_13,
     VAR_14, 0x0, VAR_3);


  FUNC_2(*VAR_5, VAR_9);


  *VAR_5 += sizeof(VAR_4);
  if (*VAR_5 == VAR_8)
   *VAR_5 = VAR_7;


  while (FUNC_1(*VAR_5)) {
   *VAR_6 = (*VAR_6) ? 0 : 1;
   *VAR_5 += sizeof(VAR_4);
   if (*VAR_5 == VAR_8)
    *VAR_5 = VAR_7;
  }
 }


 FUNC_2(*VAR_5, VAR_4);


 *VAR_5 += sizeof(VAR_4);
 if (*VAR_5 == VAR_8)
  *VAR_5 = VAR_7;


 while (FUNC_1(*VAR_5)) {
  *VAR_6 = (*VAR_6) ? 0 : 1;
  *VAR_5 += sizeof(VAR_4);
  if (*VAR_5 == VAR_8)
   *VAR_5 = VAR_7;
 }
}

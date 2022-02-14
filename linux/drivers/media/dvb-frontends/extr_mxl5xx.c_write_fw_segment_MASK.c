
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct mxl {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,scalar_t__,int *) ;
 int FUNC_1 (void*,void*,scalar_t__) ;
 int FUNC_2 (void*,int ,scalar_t__) ;
 int FUNC_3 (struct mxl*,scalar_t__,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_4(struct mxl *VAR_3,
       u32 VAR_4, u32 VAR_5, u8 *VAR_6)
{
 int VAR_7;
 u32 VAR_8 = 0;
 u32 VAR_9 = 0;
 u32 VAR_10 = 0;
 u8 *VAR_11 = ((void*)0);
 u32 VAR_12 = ((VAR_1 -
    (VAR_0 +
     VAR_2)) / 4) * 4;
 u8 VAR_13[VAR_1 -
        (VAR_0 + VAR_2)];

 do {
  VAR_9 = VAR_10 = (((u32)(VAR_8 + VAR_12)) > VAR_5) ?
   (VAR_5 - VAR_8) : VAR_12;

  if (VAR_10 & 3)
   VAR_9 = (VAR_10 + 4) & ~3;
  VAR_11 = &VAR_13[0];
  FUNC_2((void *) VAR_11, 0, VAR_9);
  FUNC_1((void *) VAR_11, (void *) VAR_6, VAR_10);
  FUNC_0(1, VAR_9, VAR_11);
  VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_9, VAR_11);
  if (VAR_7)
   return VAR_7;
  VAR_8 += VAR_9;
  VAR_4 += VAR_9;
  VAR_6 += VAR_9;
 } while (VAR_8 < VAR_5);

 return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int __be64 ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (long const) ;

__attribute__((used)) static int FUNC_3(const long *VAR_5, __be32 *VAR_6)
{
 __be64 VAR_7[VAR_4];
 int VAR_8, VAR_9 = 0;
 const __be16 *VAR_10 = (const __be16 *) VAR_7;
 u16 VAR_11 = 0;
 bool VAR_12 = 0;






 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
  VAR_7[VAR_8] = FUNC_2(VAR_5[VAR_8]);

 for (VAR_8 = 1; VAR_8 < VAR_0; VAR_8++) {
  u16 VAR_13 = FUNC_0(VAR_10++);

  if (VAR_12) {




   VAR_6[++VAR_9] =
    FUNC_1(VAR_11 << 16 | VAR_13);
   VAR_12 = 0;
  } else if (VAR_13 == (0xffff))

   break;
  else if (VAR_13 & (0x8000)) {

   VAR_6[++VAR_9] =
    FUNC_1(VAR_13 & (~(0x8000)));
  } else {




   VAR_11 = VAR_13;
   VAR_12 = 1;
  }
 }


 VAR_6[0] = FUNC_1(VAR_9);

 return VAR_9;
}

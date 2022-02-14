
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct qib_devdata {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct qib_devdata*,int,int,unsigned char*,int,int) ;

__attribute__((used)) static int FUNC_1(struct qib_devdata *VAR_1, int VAR_2,
          const u8 *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 unsigned char VAR_11[VAR_0];

 VAR_10 = 0;
 VAR_7 = 0;
 while (VAR_7 < VAR_4) {
  VAR_8 = VAR_4 - VAR_7;
  if (VAR_8 > VAR_0)
   VAR_8 = VAR_0;
  VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_7 + VAR_5,
       VAR_11, VAR_8, 1);
  if (VAR_6 < VAR_8) {

   VAR_7 = -1;
   break;
  }
  for (VAR_9 = 0; VAR_9 < VAR_6; ++VAR_9) {
   if (VAR_11[VAR_9] != VAR_3[VAR_9+VAR_7])
    ++VAR_10;
  }
  VAR_7 += VAR_6;
 }
 return VAR_10 ? -VAR_10 : VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int,unsigned int const**,int) ;

int FUNC_1(u64 VAR_2, u64 VAR_3[], int VAR_4, unsigned int VAR_5,
     const unsigned int VAR_6[][VAR_0])
{
 int VAR_7, VAR_8, VAR_9 = 0;
 u64 VAR_10;

 VAR_3[VAR_9++] = VAR_2;
 VAR_7 = FUNC_0(VAR_2, VAR_6, VAR_4);
 if (VAR_7 >= 0) {

  for (VAR_8 = 0; VAR_8 < VAR_0; ++VAR_8) {
   VAR_10 = VAR_6[VAR_7][VAR_8];
   if (VAR_10 && VAR_10 != VAR_2)
    VAR_3[VAR_9++] = VAR_10;
  }
 }

 if (VAR_5 & VAR_1) {




  VAR_8 = VAR_9;
  for (VAR_7 = 0; VAR_7 < VAR_9; ++VAR_7) {
   switch (VAR_3[VAR_7]) {
   case 0x1e:
    VAR_3[VAR_8++] = 0x600f4;
    break;
   case 0x600f4:
    VAR_3[VAR_8++] = 0x1e;
    break;
   case 0x2:
    VAR_3[VAR_8++] = 0x500fa;
    break;
   case 0x500fa:
    VAR_3[VAR_8++] = 0x2;
    break;
   }
  }
  VAR_9 = VAR_8;
 }

 return VAR_9;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uLong ;
typedef int uInt ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (unsigned char*,int ,int,int *) ;
 size_t FUNC_1 (unsigned char*,int ,int,int *) ;
 int FUNC_2 (unsigned char*) ;
 scalar_t__ FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_3 ;

__attribute__((used)) static uLong FUNC_6(FILE *VAR_4)
{
 unsigned char* VAR_5;
 uLong VAR_6;
 uLong VAR_7;
 uLong VAR_8=0xffff;
 uLong VAR_9=0;

 if (FUNC_3(VAR_4,0,VAR_1) != 0)
  return 0;


 VAR_6 = FUNC_4( VAR_4 );

 if (VAR_8>VAR_6)
  VAR_8 = VAR_6;

 VAR_5 = (unsigned char*)FUNC_5(VAR_0+4);
 if (VAR_5==((void*)0))
  return 0;

 VAR_7 = 4;
 while (VAR_7<VAR_8)
 {
  uLong VAR_10,VAR_11 ;
  int VAR_12;
  size_t VAR_13;

  if (VAR_7+VAR_0>VAR_8)
   VAR_7 = VAR_8;
  else
   VAR_7+=VAR_0;
  VAR_11 = VAR_6-VAR_7 ;

  VAR_10 = ((VAR_0+4) < (VAR_6-VAR_11)) ?
                     (VAR_0+4) : (VAR_6-VAR_11);
  if (FUNC_3(VAR_4,VAR_11,VAR_2)!=0)
   break;

  if (VAR_3 == 1) {
   VAR_13 = FUNC_1(VAR_5,(uInt)VAR_10,1,VAR_4);
  } else {
   VAR_13 = FUNC_0(VAR_5,(uInt)VAR_10,1,VAR_4);
  }

  if (VAR_13!=1)
   break;

                for (VAR_12=(int)VAR_10-3; (VAR_12--)>0;)
   if (((*(VAR_5+VAR_12))==0x50) && ((*(VAR_5+VAR_12+1))==0x4b) &&
    ((*(VAR_5+VAR_12+2))==0x05) && ((*(VAR_5+VAR_12+3))==0x06))
   {
    VAR_9 = VAR_11+VAR_12;
    break;
   }

  if (VAR_9!=0)
   break;
 }
 FUNC_2(VAR_5);
 return VAR_9;
}

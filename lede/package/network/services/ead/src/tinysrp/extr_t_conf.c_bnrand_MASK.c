
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIGNUM ;


 int FUNC_0 (unsigned char*,int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned char*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (unsigned char*,int ,int) ;
 int FUNC_5 (unsigned char*,int) ;

__attribute__((used)) static int FUNC_6(int VAR_0, BIGNUM *VAR_1, int VAR_2, int VAR_3, int VAR_4)
 {
 unsigned char *VAR_5=((void*)0);
 int VAR_6=0,VAR_7,VAR_8,VAR_9;

 if (VAR_2 == 0)
  {
  FUNC_1(VAR_1);
  return 1;
  }

 VAR_8=(VAR_2+7)/8;
 VAR_7=(VAR_2-1)%8;
 VAR_9=0xff<<VAR_7;

 VAR_5=(unsigned char *)FUNC_3(VAR_8);
 if (VAR_5 == ((void*)0))
  {
  goto err;
  }




 FUNC_5(VAR_5, VAR_8);

 if (VAR_3)
  {
  if (VAR_7 == 0)
   {
   VAR_5[0]=1;
   VAR_5[1]|=0x80;
   }
  else
   {
   VAR_5[0]|=(3<<(VAR_7-1));
   VAR_5[0]&= ~(VAR_9<<1);
   }
  }
 else
  {
  VAR_5[0]|=(1<<VAR_7);
  VAR_5[0]&= ~(VAR_9<<1);
  }
 if (VAR_4)
  VAR_5[VAR_8-1]|=1;
 if (!FUNC_0(VAR_5,VAR_8,VAR_1)) goto err;
 VAR_6=1;
err:
 if (VAR_5 != ((void*)0))
  {
  FUNC_4(VAR_5,0,VAR_8);
  FUNC_2(VAR_5);
  }
 return(VAR_6);
 }

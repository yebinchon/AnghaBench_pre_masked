
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int outbuf ;
typedef int inbuf ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned char*,int) ;
 int FUNC_1 (char*,char*,char*) ;
 int FUNC_2 (unsigned char*,int,int,int ) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (char) ;
 int VAR_1 ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7(void)
{
 int VAR_2, VAR_3, VAR_4;
 char VAR_5[VAR_0 + 1], *VAR_6;
 unsigned char VAR_7[VAR_0 * 4];
 char VAR_8[VAR_0 + 1];

 VAR_8[0] = '\0';
 for (;;) {
  FUNC_5(VAR_5, VAR_8);
  switch (FUNC_3(VAR_5 + FUNC_6(VAR_5),
      sizeof(VAR_5) - FUNC_6(VAR_5))) {
  case 0:
   return (0);
  case 1:
   return (1);
  }

  VAR_3 = 0;
  VAR_4 = -1;
  VAR_6 = VAR_5;
  while (*VAR_6 != '\0') {




   if (FUNC_4(*VAR_6) || *VAR_6 == '+' || *VAR_6 == '/' || *VAR_6 == '=')
    VAR_3++;
   if (VAR_3 % 4 == 0)
    VAR_4 = VAR_6 - VAR_5;
   VAR_6++;
  }

  FUNC_5(VAR_8, VAR_5 + VAR_4 + 1);
  VAR_5[VAR_4 + 1] = 0;

  VAR_2 = FUNC_0(VAR_5, VAR_7, sizeof(VAR_7));

  if (VAR_2 < 0)
   break;
  FUNC_2(VAR_7, 1, VAR_2, VAR_1);
 }
 return (FUNC_1(VAR_5, "====", "error decoding base64 input stream"));
}

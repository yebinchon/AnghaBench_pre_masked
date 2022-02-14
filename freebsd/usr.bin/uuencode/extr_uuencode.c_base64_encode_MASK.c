
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (unsigned char*,size_t,char*,int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,char*,...) ;
 size_t FUNC_3 (unsigned char*,int,int,int ) ;
 int VAR_2 ;
 int FUNC_4 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_5(void)
{




 unsigned char VAR_6[3];
 char VAR_7[sizeof(VAR_6) * 2 + 1];
 size_t VAR_8;
 int VAR_9, VAR_10;

 VAR_10 = 0;

 if (!VAR_4)
  FUNC_2(VAR_3, "begin-base64 %o %s\n", VAR_2, *VAR_1);
 while ((VAR_8 = FUNC_3(VAR_6, 1, sizeof(VAR_6), VAR_5))) {
  ++VAR_10;
  VAR_9 = FUNC_0(VAR_6, VAR_8, VAR_7, FUNC_4(VAR_7));
  if (VAR_9 == -1)
   FUNC_1(1, "b64_ntop: error encoding base64");
  FUNC_2(VAR_3, "%s%s", VAR_7, (VAR_10 % ((80 / 4) - 1)) ? "" : "\n");
 }
 if (VAR_10 % ((80 / 4) - 1))
  FUNC_2(VAR_3, "\n");
 if (!VAR_4)
  FUNC_2(VAR_3, "====\n");
}

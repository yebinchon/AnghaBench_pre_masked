
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int s32 ;
typedef int __be32 ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int ,int ) ;
 int FUNC_6 (int,char*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,int ) ;

int FUNC_10(s32 VAR_8)
{
 char *VAR_9;
 __be32 *VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_11 = FUNC_8("ibm,update-nodes");
 if (VAR_11 == VAR_7)
  return -VAR_0;

 VAR_9 = FUNC_5(VAR_6, VAR_2);
 if (!VAR_9)
  return -VAR_1;

 do {
  VAR_12 = FUNC_6(VAR_11, VAR_9, VAR_8);
  if (VAR_12 && VAR_12 != 1)
   break;

  VAR_10 = (__be32 *)VAR_9 + 4;
  while (FUNC_1(*VAR_10) & VAR_3) {
   int VAR_13;
   u32 VAR_14 = FUNC_1(*VAR_10) & VAR_3;
   u32 VAR_15 = FUNC_1(*VAR_10) & VAR_4;

   VAR_10++;

   for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++) {
    __be32 VAR_16 = *VAR_10++;
    __be32 VAR_17;

    switch (VAR_14) {
    case 129:
     FUNC_3(VAR_16);
     break;
    case 128:
     FUNC_9(VAR_16, VAR_8);

     if (VAR_8 == VAR_5)
      FUNC_7(VAR_16);

     break;
    case 130:
     VAR_17 = *VAR_10++;
     FUNC_0(VAR_16, VAR_17);
     break;
    }

    FUNC_2();
   }
  }

  FUNC_2();
 } while (VAR_12 == 1);

 FUNC_4(VAR_9);
 return VAR_12;
}

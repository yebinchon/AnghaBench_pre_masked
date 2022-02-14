
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int,int,int,int *) ;
 int FUNC_1 (int,char*,char*,int,int,int) ;
 int FUNC_2 (int ,char*,char*,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(int VAR_1, int VAR_2, int VAR_3, void *VAR_4, size_t VAR_5, char *VAR_6)
{
 int VAR_7 = 0;

 FUNC_1(2, "Read %s port=%x off=%x op=%x\n", VAR_6, VAR_1, VAR_2, VAR_3);
 switch (VAR_5) {
 case 8:
  VAR_7 = FUNC_0(VAR_1, VAR_2 + 4, VAR_3, (u32 *)(VAR_4 + 4));

 case 4:
  VAR_7 |= FUNC_0(VAR_1, VAR_2, VAR_3, (u32 *)VAR_4);
  FUNC_2(VAR_0, "%s=%x%08x ret=%d\n", VAR_6,
     VAR_5 == 8 ? *((u32 *)(VAR_4 + 4)) : 0, *((u32 *)VAR_4), VAR_7);
  break;
 }

 return VAR_7;
}

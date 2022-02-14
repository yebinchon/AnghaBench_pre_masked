
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg {size_t drive; int name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct pg*,char*,int,scalar_t__) ;
 int FUNC_1 (struct pg*,char*,scalar_t__) ;
 int FUNC_2 (char*,int ,char*,char*,char*) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct pg *VAR_3, int VAR_4)
{
 int VAR_5;
 char *VAR_6[2] = { "master", "slave" };
 char VAR_7[10], VAR_8[18];
 char VAR_9[12] = { VAR_0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0 };
 char VAR_10[36];

 VAR_5 = FUNC_0(VAR_3, VAR_9, 36, VAR_2 + VAR_1);
 if (VAR_5)
  return -1;
 VAR_5 = FUNC_1(VAR_3, VAR_10, VAR_2 + VAR_1);
 if (VAR_5)
  return -1;

 if (VAR_4) {
  FUNC_3(VAR_10 + 8, VAR_7, 8);
  FUNC_3(VAR_10 + 16, VAR_8, 16);
  FUNC_2("%s: %s %s, %s\n", VAR_3->name, VAR_7, VAR_8, VAR_6[VAR_3->drive]);
 }

 return 0;
}

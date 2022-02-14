
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmctx {int dummy; } ;
typedef int numbuf ;
typedef int name ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,int,size_t,char*,int ,int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct vmctx*,int,size_t*,char*,int) ;

__attribute__((used)) static int
FUNC_3(struct vmctx *VAR_5)
{
 char VAR_6[VAR_3 + 1], VAR_7[8];
 size_t VAR_8;
 int VAR_9, VAR_10;

 FUNC_1("ID  Length      Name\n");

 VAR_10 = 0;
 while (1) {
  VAR_9 = FUNC_2(VAR_5, VAR_10, &VAR_8, VAR_6, sizeof(VAR_6));
  if (VAR_9)
   return (VAR_4 == VAR_0 ? 0 : VAR_9);

  if (VAR_8) {
   FUNC_1("%-4d", VAR_10);
   FUNC_0(VAR_7, sizeof(VAR_7), VAR_8, "B",
       VAR_1, VAR_2);
   FUNC_1("%-12s", VAR_7);
   FUNC_1("%s", VAR_6[0] ? VAR_6 : "sysmem");
   FUNC_1("\n");
  }
  VAR_10++;
 }
}

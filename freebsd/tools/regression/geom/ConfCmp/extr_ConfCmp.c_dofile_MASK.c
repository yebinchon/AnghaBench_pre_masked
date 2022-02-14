
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int st_size; } ;
struct mytree {TYPE_1__* top; TYPE_1__* cur; } ;
typedef int XML_Parser ;
struct TYPE_2__ {char* name; int cont; int key; struct TYPE_2__* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,struct mytree*) ;
 struct mytree* FUNC_6 (int,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,char*) ;
 int FUNC_9 (int,char*,int) ;
 int FUNC_10 (int,struct stat*) ;
 char* FUNC_11 (int *,int ,int ,int,int,int ) ;
 int FUNC_12 (char*,int ) ;
 TYPE_1__* FUNC_13 () ;
 int FUNC_14 (char*,int ) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static struct mytree *
FUNC_16(char *VAR_7)
{
 XML_Parser VAR_8;
 struct mytree *VAR_9;
 struct stat VAR_10;
 int VAR_11;
 char *VAR_12;
 int VAR_13;

 VAR_8 = FUNC_1(((void*)0));
 VAR_9 = FUNC_6(1, sizeof *VAR_9);
 VAR_9->top = FUNC_13();
 VAR_9->top->name = "(top)";
 VAR_9->top->parent = VAR_9->top;
 VAR_9->cur = VAR_9->top;
 FUNC_15(VAR_9->top->key);
 FUNC_15(VAR_9->top->cont);
 FUNC_5(VAR_8, VAR_9);
 FUNC_4(VAR_8, VAR_6, VAR_1);
 FUNC_3(VAR_8, VAR_0);
 VAR_11 = FUNC_14(VAR_7, VAR_4);
 if (VAR_11 < 0)
  FUNC_8(1, VAR_7);
 FUNC_10(VAR_11, &VAR_10);
 VAR_12 = FUNC_11(((void*)0), VAR_10.st_size, VAR_5, VAR_2|VAR_3, VAR_11, 0);
 VAR_13 = FUNC_0(VAR_8, VAR_12, VAR_10.st_size, 1);
 if (VAR_13 != 1)
  FUNC_9(1, "XML_Parse complained -> %d", VAR_13);
 FUNC_12(VAR_12, VAR_10.st_size);
 FUNC_7(VAR_11);
 FUNC_2(VAR_8);
 FUNC_15(VAR_9->top->cont);
 if (VAR_13)
  return (VAR_9);
 else
  return (((void*)0));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expression {scalar_t__ type; char* name; int value; int state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 struct expression* FUNC_0 (struct expression**,struct expression**) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (struct expression*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct expression**,struct expression*,int *) ;
 size_t FUNC_6 (char*) ;
 int FUNC_7 (char*,int *) ;
 scalar_t__ FUNC_8 (struct expression*,int ,int ,int ,int*) ;

struct expression *
FUNC_9(char *VAR_9)
{
 struct expression *VAR_10=((void*)0), *VAR_11=((void*)0), *VAR_12;
 int VAR_13, VAR_14;
 int VAR_15=0;
 size_t VAR_16, VAR_17, VAR_18;
 VAR_13 = VAR_14 = 0;
 VAR_16 = FUNC_6(VAR_9);

 if (VAR_9[(VAR_16-1)] == '\n') {
  VAR_9[(VAR_16-1)] = 0;
  VAR_16--;
 }
 for(VAR_17=0; VAR_17<VAR_16; VAR_17++) {
  if (VAR_9[VAR_17] == '(') {
   VAR_13++;
  } else if (VAR_9[VAR_17] == ')') {
   VAR_14++;
  }
 }
 if (VAR_13 != VAR_14) {
  FUNC_4("Invalid expression '%s' %d open paren's and %d close?\n",
         VAR_9, VAR_13, VAR_14);
  FUNC_1(-1);
 }
 for(VAR_17=0; VAR_17<VAR_16; VAR_17++) {
  if (VAR_9[VAR_17] == '(') {
   VAR_12 = FUNC_0(&VAR_10, &VAR_11);
   VAR_12->type = VAR_6;
  } else if (VAR_9[VAR_17] == ')') {
   VAR_12 = FUNC_0(&VAR_10, &VAR_11);
   VAR_12->type = VAR_5;
  } else if (VAR_9[VAR_17] == ' ') {

   continue;
  } else if (VAR_9[VAR_17] == '\t') {

   continue;
  } else if (VAR_9[VAR_17] == '+') {
   VAR_12 = FUNC_0(&VAR_10, &VAR_11);
   VAR_12->type = VAR_4;
  } else if (VAR_9[VAR_17] == '-') {
   VAR_12 = FUNC_0(&VAR_10, &VAR_11);
   VAR_12->type = VAR_2;
  } else if (VAR_9[VAR_17] == '/') {
   VAR_12 = FUNC_0(&VAR_10, &VAR_11);
   VAR_12->type = VAR_1;
  } else if (VAR_9[VAR_17] == '*') {
   VAR_12 = FUNC_0(&VAR_10, &VAR_11);
   VAR_12->type = VAR_3;
  } else {

   VAR_12 = FUNC_0(&VAR_10, &VAR_11);
   if (FUNC_2(VAR_9[VAR_17]) || (VAR_9[VAR_17] == '.')) {
    VAR_12->type = VAR_7;
   } else {
    VAR_12->type = VAR_8;
   }
   VAR_18 = 0;
   while ((VAR_9[VAR_17] != ' ') &&
          (VAR_9[VAR_17] != '\t') &&
          (VAR_9[VAR_17] != 0) &&
          (VAR_9[VAR_17] != ')') &&
          (VAR_9[VAR_17] != '(')) {

    VAR_12->name[VAR_18] = VAR_9[VAR_17];
    VAR_17++;
    VAR_18++;
    if (VAR_18 >=(sizeof(VAR_12->name)-1)) {
     FUNC_4("Value/Constant too long %d max:%d\n",
            (int)VAR_18, (int)(sizeof(VAR_12->name)-1));
     FUNC_1(-3);
    }
   }
   if (VAR_9[VAR_17] != 0) {



    VAR_17--;
   }

   if (VAR_12->type == VAR_7) {
    VAR_12->state = VAR_0;
    VAR_12->value = FUNC_7(VAR_12->name, ((void*)0));
   } else {
    FUNC_3(VAR_12);
   }
  }
 }

 if (FUNC_8(VAR_10, 0, 0, 0, &VAR_15)) {
  FUNC_4("Invalid expression\n");
  FUNC_1(-4);
 }
 FUNC_5(&VAR_10, VAR_10, ((void*)0));
 return (VAR_10);
}

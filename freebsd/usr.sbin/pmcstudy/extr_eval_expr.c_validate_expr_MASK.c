
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expression {int type; struct expression* next; } ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int
FUNC_2(struct expression *VAR_0, int VAR_1, int VAR_2, int VAR_3,
       int *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 int VAR_8;
 VAR_5 = VAR_6 = VAR_7 = 0;
 if (VAR_1) {
  VAR_5 = 1;
 }
 if (VAR_2) {
  VAR_6 = 1;
 }
 if (VAR_3) {
  VAR_7 = 1;
 }
 VAR_8 = *VAR_4;
 if (VAR_0 == ((void*)0)) {

  if (VAR_5 && VAR_6 && VAR_7 && (VAR_8 == 0)) {
   return(0);
  } else {
   return(1);
  }
 }
 switch(VAR_0->type) {
 case 132:
 case 134:
 case 133:
 case 135:
  if (VAR_5 && VAR_6 && VAR_7) {



   VAR_5 = 1;
   VAR_6 = 1;
   VAR_7 = 0;
  } else if ((VAR_6 == 0) && (VAR_5)) {
   VAR_6 = 1;
  } else {
   FUNC_1("Op but no val1 set\n");
   return(-1);
  }
  break;
 case 130:
  if (VAR_0->next == ((void*)0)) {
   FUNC_1("NULL after open paren\n");
   FUNC_0(-1);
  }
  if ((VAR_0->next->type == 132) ||
      (VAR_0->next->type == 134) ||
      (VAR_0->next->type == 135) ||
      (VAR_0->next->type == 133)) {
   FUNC_1("'( OP' -- not allowed\n");
   return(-1);
  }
  if (VAR_5 && (VAR_6 == 0)) {
   FUNC_1("'Val (' -- not allowed\n");
   return(-1);
  }
  if (VAR_5 && VAR_6 && VAR_7) {
   FUNC_1("'Val OP Val (' -- not allowed\n");
   return(-1);
  }
  VAR_8++;
  *VAR_4 = VAR_8;
  if (VAR_5) {
   if (FUNC_2(VAR_0->next, 0, 0, 0, VAR_4) == 0) {
    VAR_7 = 1;
   } else {
    return(-1);
   }
  } else {
   return(FUNC_2(VAR_0->next, 0, 0, 0, VAR_4));
  }
  break;
 case 131:
  VAR_8--;
  *VAR_4 = VAR_8;
  if (VAR_5 && VAR_6 && VAR_7) {
   return(0);
  } else {
   FUNC_1("Found close paren and not complete\n");
   return(-1);
  }
  break;
 case 129:
 case 128:
  if (VAR_5 == 0) {
   VAR_5 = 1;
  } else if (VAR_5 && VAR_6) {
   VAR_7 = 1;
  } else {
   FUNC_1("val1 set, val2 about to be set op empty\n");
   return(-1);
  }
  break;
 default:
  FUNC_1("unknown type %d\n", VAR_0->type);
  FUNC_0(-5);
  break;
 }
 return(FUNC_2(VAR_0->next, VAR_5, VAR_6, VAR_7, VAR_4));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 int FUNC_2 () ;

int
FUNC_3(void *VAR_2)
{
 char *VAR_3 = VAR_2;
 int VAR_4, VAR_5;
 int VAR_6[1];

 VAR_6[0] = 0;
 VAR_5 = FUNC_2();
 VAR_4 = VAR_1;
 switch (*VAR_3) {
 case 0:
 case '+':
  VAR_4++;
  if (VAR_4 * VAR_5 >= VAR_0) {
   FUNC_1("On last screenful of messages\n");
   return (0);
  }
  VAR_1 = VAR_4;
  break;

 case '-':
  if (--VAR_4 < 0) {
   FUNC_1("On first screenful of messages\n");
   return (0);
  }
  VAR_1 = VAR_4;
  break;

 default:
  FUNC_1("Unrecognized scrolling command \"%s\"\n", VAR_3);
  return (1);
 }
 return (FUNC_0(VAR_6));
}

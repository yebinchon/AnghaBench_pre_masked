
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int intmax_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 char* FUNC_1 (int ,int,int,char*,size_t*) ;

__attribute__((used)) static char *
FUNC_2(intmax_t VAR_1, char VAR_2, char *VAR_3, size_t *VAR_4) {
 bool VAR_5;

 if ((VAR_5 = (VAR_1 < 0))) {
  VAR_1 = -VAR_1;
 }
 VAR_3 = FUNC_1(VAR_1, 10, 0, VAR_3, VAR_4);
 if (VAR_5) {
  VAR_2 = '-';
 }
 switch (VAR_2) {
 case '-':
  if (!VAR_5) {
   break;
  }
  VAR_0;
 case ' ':
 case '+':
  VAR_3--;
  (*VAR_4)++;
  *VAR_3 = VAR_2;
  break;
 default: FUNC_0();
 }
 return VAR_3;
}

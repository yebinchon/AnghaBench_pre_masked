
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_lomac_element {int mle_grade; int mle_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_2(struct mac_lomac_element *VAR_6, char *VAR_7)
{

 if (FUNC_0(VAR_7, "high") == 0 || FUNC_0(VAR_7, "hi") == 0) {
  VAR_6->mle_type = VAR_3;
  VAR_6->mle_grade = VAR_5;
 } else if (FUNC_0(VAR_7, "low") == 0 || FUNC_0(VAR_7, "lo") == 0) {
  VAR_6->mle_type = VAR_4;
  VAR_6->mle_grade = VAR_5;
 } else if (FUNC_0(VAR_7, "equal") == 0 ||
     FUNC_0(VAR_7, "eq") == 0) {
  VAR_6->mle_type = VAR_1;
  VAR_6->mle_grade = VAR_5;
 } else {
  char *VAR_8, *VAR_9;
  int VAR_10;

  VAR_8 = VAR_7;
  VAR_10 = FUNC_1(VAR_8, &VAR_9, 10);

  if (VAR_10 < 0 || VAR_10 > 65535)
   return (VAR_0);
  VAR_6->mle_type = VAR_2;
  VAR_6->mle_grade = VAR_10;

  if (VAR_9 == VAR_8 || *VAR_9 != '\0')
   return (VAR_0);
 }

 return (0);
}

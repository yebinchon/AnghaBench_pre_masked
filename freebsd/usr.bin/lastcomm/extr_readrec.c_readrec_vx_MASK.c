
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int version ;
typedef int uint8_t ;
struct acctv3 {int dummy; } ;
typedef int magic ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int*,int,int *) ;
 int FUNC_1 (int *,struct acctv3*) ;
 int FUNC_2 (int *,struct acctv3*) ;
 scalar_t__ FUNC_3 (int,int *) ;

__attribute__((used)) static int
FUNC_4(FILE *VAR_3, struct acctv3 *VAR_4)
{
 uint8_t VAR_5, VAR_6;

 if (FUNC_0(&VAR_5, sizeof(VAR_5), VAR_3) == VAR_1 ||
     FUNC_0(&VAR_6, sizeof(VAR_6), VAR_3) == VAR_1 ||
     FUNC_3(VAR_6, VAR_3) == VAR_1 ||
     FUNC_3(VAR_5, VAR_3) == VAR_1)
  return (VAR_1);
 switch (VAR_6) {
 case 2:
  return (FUNC_1(VAR_3, VAR_4));
 case 3:
  return (FUNC_2(VAR_3, VAR_4));



 default:
  VAR_2 = VAR_0;
  return (VAR_1);
 }
}

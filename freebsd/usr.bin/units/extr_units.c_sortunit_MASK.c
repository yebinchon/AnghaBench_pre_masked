
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unittype {char** numerator; char** denominator; } ;


 int VAR_0 ;
 int FUNC_0 (char**,unsigned int,int,int ) ;

__attribute__((used)) static void
FUNC_1(struct unittype * VAR_1)
{
 char **VAR_2;
 unsigned int VAR_3;

 for (VAR_3 = 0, VAR_2 = VAR_1->numerator; *VAR_2; VAR_2++, VAR_3++);
 FUNC_0(VAR_1->numerator, VAR_3, sizeof(char *), VAR_0);
 for (VAR_3 = 0, VAR_2 = VAR_1->denominator; *VAR_2; VAR_2++, VAR_3++);
 FUNC_0(VAR_1->denominator, VAR_3, sizeof(char *), VAR_0);
}

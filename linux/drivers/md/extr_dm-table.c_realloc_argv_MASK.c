
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**) ;
 char** FUNC_1 (unsigned int,int,int ) ;
 int FUNC_2 (char**,char**,unsigned int) ;

__attribute__((used)) static char **FUNC_3(unsigned *VAR_2, char **VAR_3)
{
 char **VAR_4;
 unsigned VAR_5;
 gfp_t VAR_6;

 if (*VAR_2) {
  VAR_5 = *VAR_2 * 2;
  VAR_6 = VAR_0;
 } else {
  VAR_5 = 8;
  VAR_6 = VAR_1;
 }
 VAR_4 = FUNC_1(VAR_5, sizeof(*VAR_4), VAR_6);
 if (VAR_4 && VAR_3) {
  FUNC_2(VAR_4, VAR_3, *VAR_2 * sizeof(*VAR_4));
  *VAR_2 = VAR_5;
 }

 FUNC_0(VAR_3);
 return VAR_4;
}

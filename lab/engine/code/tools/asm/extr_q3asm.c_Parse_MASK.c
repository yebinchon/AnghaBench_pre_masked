
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;


 char const* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__*,char const*,int) ;
 scalar_t__* VAR_4 ;

__attribute__((used)) static qboolean FUNC_1( void ) {

 const char *VAR_5, *VAR_6;



 *VAR_4 = 0;


 for (VAR_5 = VAR_0 + VAR_1; *VAR_5 && (*VAR_5 <= ' '); VAR_5++) ;



 if ((*VAR_5 == ';') || (*VAR_5 == 0)) {
  VAR_1 = VAR_5 - VAR_0;
  return VAR_2;
 }

 VAR_6 = VAR_5;

 for ( ; *VAR_5 > 32; VAR_5++) ;

 FUNC_0(VAR_4, VAR_6, VAR_5 - VAR_6);
 VAR_4[VAR_5 - VAR_6] = 0;

 VAR_1 = VAR_5 - VAR_0;

 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,int) ;
 char* FUNC_1 (char const*,char) ;

void FUNC_2( const char *VAR_0, char *VAR_1, int VAR_2 )
{
 const char *VAR_3 = FUNC_1(VAR_0, '.'), *VAR_4;

 if (VAR_3 && (!(VAR_4 = FUNC_1(VAR_0, '/')) || VAR_4 < VAR_3))
  VAR_2 = (VAR_2 < VAR_3-VAR_0+1 ? VAR_2 : VAR_3-VAR_0+1);

 if ( VAR_0 == VAR_1 && VAR_2 > 1 )
  VAR_1[VAR_2-1] = '\0';
 else
  FUNC_0(VAR_1, VAR_0, VAR_2);
}

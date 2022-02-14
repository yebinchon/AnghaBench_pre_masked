
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int http_parser_settings ;


 int * VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int *,int *,char const*,size_t) ;
 int VAR_2 ;
 int VAR_3 ;

size_t FUNC_1 (const char *VAR_4, size_t VAR_5)
{
  size_t VAR_6;
  http_parser_settings VAR_7 = VAR_3;

  VAR_1 = (VAR_5 == 0);
  VAR_0 = &VAR_7;
  VAR_6 = FUNC_0(&VAR_2, VAR_0, VAR_4, VAR_5);
  return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_options {int parseopts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char const**,char const*,int ,int *,int) ;

int FUNC_1(struct diff_options *VAR_5,
     const char **VAR_6, int VAR_7, const char *VAR_8)
{
 if (!VAR_8)
  VAR_8 = "";

 VAR_7 = FUNC_0(VAR_7, VAR_6, VAR_8, VAR_5->parseopts, ((void*)0),
      VAR_0 |
      VAR_1 |
      VAR_2 |
      VAR_3 |
      VAR_4);

 return VAR_7;
}

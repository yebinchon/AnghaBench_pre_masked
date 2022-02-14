
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grep_pat {size_t patternlen; char const* origin; int no; int token; int field; int pattern; } ;
typedef enum grep_pat_token { ____Placeholder_grep_pat_token } grep_pat_token ;
typedef enum grep_header_field { ____Placeholder_grep_header_field } grep_header_field ;


 struct grep_pat* FUNC_0 (int,int) ;
 int FUNC_1 (char const*,size_t) ;

__attribute__((used)) static struct grep_pat *FUNC_2(const char *VAR_0, size_t VAR_1,
     const char *VAR_2, int VAR_3,
     enum grep_pat_token VAR_4,
     enum grep_header_field VAR_5)
{
 struct grep_pat *VAR_6 = FUNC_0(1, sizeof(*VAR_6));
 VAR_6->pattern = FUNC_1(VAR_0, VAR_1);
 VAR_6->patternlen = VAR_1;
 VAR_6->origin = VAR_2;
 VAR_6->no = VAR_3;
 VAR_6->token = VAR_4;
 VAR_6->field = VAR_5;
 return VAR_6;
}

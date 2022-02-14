
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int dummy; } ;


 char* FUNC_0 (char const*,int *,int *,int ,int,int *) ;
 char const* FUNC_1 (char const*,int *,int *,int ,int ,int *,int *,int *,struct index_state*) ;

const char *FUNC_2(const char *VAR_0, struct index_state *VAR_1)
{
 if (*VAR_0 == ':' || (*VAR_0 == '^' && *(VAR_0 + 1) == ':'))
  return FUNC_1(VAR_0, ((void*)0), ((void*)0),
         0, 0, ((void*)0), ((void*)0),
         ((void*)0), VAR_1);

 VAR_0 = FUNC_0(VAR_0, ((void*)0), ((void*)0), 0, -1, ((void*)0));

 if (*VAR_0 == ',')
  VAR_0 = FUNC_0(VAR_0+1, ((void*)0), ((void*)0), 0, 0, ((void*)0));

 return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (char**) ;
 char** VAR_0 ;

const char *FUNC_1(unsigned long VAR_1)
{
 const char *VAR_2 = ((void*)0);

 if (VAR_1 < FUNC_0(VAR_0))
  VAR_2 = VAR_0[VAR_1];

 return VAR_2 ? VAR_2 : "Unknown trap";
}

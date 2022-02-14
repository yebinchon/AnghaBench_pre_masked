
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* ndptr ;
struct TYPE_6__ {int * d; int builtin_type; int trace_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int *,char const*,char const**) ;
 TYPE_1__* FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (int *,unsigned int,TYPE_1__*) ;
 unsigned int FUNC_3 (int *,char const*,char const**) ;

__attribute__((used)) static ndptr
FUNC_4(const char *VAR_4)
{
 const char *VAR_5 = ((void*)0);
 unsigned int VAR_6;
 ndptr VAR_7;

 VAR_6 = FUNC_3(&VAR_3, VAR_4, &VAR_5);
 VAR_7 = FUNC_1(&VAR_3, VAR_6);
 if (VAR_7 == ((void*)0)) {
  VAR_7 = FUNC_0(&VAR_2, VAR_4, &VAR_5);
  FUNC_2(&VAR_3, VAR_6, VAR_7);
  VAR_7->trace_flags = VAR_0;
  VAR_7->builtin_type = VAR_1;
  VAR_7->d = ((void*)0);
 }
 return VAR_7;
}

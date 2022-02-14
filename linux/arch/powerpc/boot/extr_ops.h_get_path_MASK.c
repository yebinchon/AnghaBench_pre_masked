
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* (* get_path ) (void const*,char*,int) ;} ;


 TYPE_1__ VAR_0 ;
 char* FUNC_0 (void const*,char*,int) ;

__attribute__((used)) static inline char *FUNC_1(const void *VAR_1, char *VAR_2, int VAR_3)
{
 if (VAR_0.get_path)
  return VAR_0.get_path(VAR_1, VAR_2, VAR_3);

 return ((void*)0);
}

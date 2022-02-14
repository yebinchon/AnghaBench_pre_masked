
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* setprop ) (void*,char const*,char const*,scalar_t__) ;} ;


 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (void*,char const*,char const*,scalar_t__) ;

__attribute__((used)) static inline int FUNC_2(void *VAR_1, const char *VAR_2, const char *VAR_3)
{
 if (VAR_0.setprop)
  return VAR_0.setprop(VAR_1, VAR_2, VAR_3, FUNC_0(VAR_3) + 1);

 return -1;
}

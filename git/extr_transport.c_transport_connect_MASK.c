
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct transport {TYPE_1__* vtable; } ;
struct TYPE_2__ {int (* connect ) (struct transport*,char const*,char const*,int*) ;} ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct transport*,char const*,char const*,int*) ;

int FUNC_3(struct transport *VAR_0, const char *VAR_1,
        const char *VAR_2, int VAR_3[2])
{
 if (VAR_0->vtable->connect)
  return VAR_0->vtable->connect(VAR_0, VAR_1, VAR_2, VAR_3);
 else
  FUNC_1(FUNC_0("operation not supported by protocol"));
}

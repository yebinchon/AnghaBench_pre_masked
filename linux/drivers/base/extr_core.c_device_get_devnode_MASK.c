
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int umode_t ;
struct device {TYPE_2__* class; TYPE_1__* type; } ;
typedef int kuid_t ;
typedef int kgid_t ;
struct TYPE_4__ {char* (* devnode ) (struct device*,int *) ;} ;
struct TYPE_3__ {char* (* devnode ) (struct device*,int *,int *,int *) ;} ;


 int VAR_0 ;
 char const* FUNC_0 (struct device*) ;
 char* FUNC_1 (char const*,int ) ;
 int * FUNC_2 (char const*,char) ;
 int FUNC_3 (char*,char,char) ;
 char* FUNC_4 (struct device*,int *,int *,int *) ;
 char* FUNC_5 (struct device*,int *) ;

const char *FUNC_6(struct device *VAR_1,
          umode_t *VAR_2, kuid_t *VAR_3, kgid_t *VAR_4,
          const char **VAR_5)
{
 char *VAR_6;

 *VAR_5 = ((void*)0);


 if (VAR_1->type && VAR_1->type->devnode)
  *VAR_5 = VAR_1->type->devnode(VAR_1, VAR_2, VAR_3, VAR_4);
 if (*VAR_5)
  return *VAR_5;


 if (VAR_1->class && VAR_1->class->devnode)
  *VAR_5 = VAR_1->class->devnode(VAR_1, VAR_2);
 if (*VAR_5)
  return *VAR_5;


 if (FUNC_2(FUNC_0(VAR_1), '!') == ((void*)0))
  return FUNC_0(VAR_1);


 VAR_6 = FUNC_1(FUNC_0(VAR_1), VAR_0);
 if (!VAR_6)
  return ((void*)0);
 FUNC_3(VAR_6, '!', '/');
 return *VAR_5 = VAR_6;
}

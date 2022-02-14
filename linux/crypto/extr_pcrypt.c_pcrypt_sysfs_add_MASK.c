
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kset; } ;
struct padata_instance {TYPE_1__ kobj; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,char*,char const*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct padata_instance *VAR_2, const char *VAR_3)
{
 int VAR_4;

 VAR_2->kobj.kset = VAR_1;
 VAR_4 = FUNC_0(&VAR_2->kobj, ((void*)0), "%s", VAR_3);
 if (!VAR_4)
  FUNC_1(&VAR_2->kobj, VAR_0);

 return VAR_4;
}

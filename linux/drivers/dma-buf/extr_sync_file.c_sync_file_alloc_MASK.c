
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int node; } ;
struct sync_file {TYPE_1__ cb; int wq; int file; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int *,struct sync_file*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sync_file*) ;
 struct sync_file* FUNC_5 (int,int ) ;
 int VAR_1 ;

__attribute__((used)) static struct sync_file *FUNC_6(void)
{
 struct sync_file *VAR_2;

 VAR_2 = FUNC_5(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->file = FUNC_2("sync_file", &VAR_1,
          VAR_2, 0);
 if (FUNC_1(VAR_2->file))
  goto err;

 FUNC_3(&VAR_2->wq);

 FUNC_0(&VAR_2->cb.node);

 return VAR_2;

err:
 FUNC_4(VAR_2);
 return ((void*)0);
}

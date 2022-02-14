
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpe {int minor; int notify; int list; int tc; } ;
struct TYPE_2__ {int vpe_list_lock; int vpe_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct vpe* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__ VAR_2 ;

struct vpe *FUNC_5(int VAR_3)
{
 struct vpe *VAR_4;

 VAR_4 = FUNC_1(sizeof(struct vpe), VAR_0);
 if (VAR_4 == ((void*)0))
  goto out;

 FUNC_0(&VAR_4->tc);
 FUNC_3(&VAR_2.vpe_list_lock);
 FUNC_2(&VAR_4->list, &VAR_2.vpe_list);
 FUNC_4(&VAR_2.vpe_list_lock);

 FUNC_0(&VAR_4->notify);
 VAR_4->minor = VAR_1;

out:
 return VAR_4;
}

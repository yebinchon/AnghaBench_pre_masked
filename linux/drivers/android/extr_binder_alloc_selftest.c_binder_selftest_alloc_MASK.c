
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binder_alloc {int vma; } ;


 int VAR_0 ;
 int FUNC_0 (struct binder_alloc*,size_t*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,...) ;

void FUNC_4(struct binder_alloc *VAR_4)
{
 size_t VAR_5[VAR_0];

 if (!VAR_3)
  return;
 FUNC_1(&VAR_2);
 if (!VAR_3 || !VAR_4->vma)
  goto done;
 FUNC_3("STARTED\n");
 FUNC_0(VAR_4, VAR_5, 0);
 VAR_3 = 0;
 if (VAR_1 > 0)
  FUNC_3("%d tests FAILED\n", VAR_1);
 else
  FUNC_3("PASSED\n");

done:
 FUNC_2(&VAR_2);
}

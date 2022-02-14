
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_vbd {int * bdev; scalar_t__ readonly; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct xen_vbd *VAR_2)
{
 if (VAR_2->bdev)
  FUNC_0(VAR_2->bdev, VAR_2->readonly ? VAR_0 : VAR_1);
 VAR_2->bdev = ((void*)0);
}

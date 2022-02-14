
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_svc {int dev; int debugfs_dentry; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (struct gb_svc*) ;

__attribute__((used)) static void FUNC_4(struct gb_svc *VAR_0)
{
 VAR_0->debugfs_dentry = FUNC_0(FUNC_1(&VAR_0->dev),
       FUNC_2());
 FUNC_3(VAR_0);
}

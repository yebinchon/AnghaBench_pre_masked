
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_ssi_port {int work; int wk_lock; int wk_refcount; } ;
struct hsi_port {int device; } ;
struct hsi_client {int dummy; } ;


 int FUNC_0 (int *,char*,int ) ;
 struct hsi_port* FUNC_1 (struct hsi_client*) ;
 struct omap_ssi_port* FUNC_2 (struct hsi_port*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct hsi_client *VAR_0)
{
 struct hsi_port *VAR_1 = FUNC_1(VAR_0);
 struct omap_ssi_port *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(&VAR_1->device, "Wake out high %d\n", VAR_2->wk_refcount);

 FUNC_4(&VAR_2->wk_lock);
 if (VAR_2->wk_refcount++) {
  FUNC_5(&VAR_2->wk_lock);
  return 0;
 }
 FUNC_5(&VAR_2->wk_lock);

 FUNC_3(&VAR_2->work);

 return 0;
}

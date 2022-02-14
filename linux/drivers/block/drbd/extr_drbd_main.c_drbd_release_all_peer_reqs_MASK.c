
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_device {int net_ee; int done_ee; int read_ee; int sync_ee; int active_ee; } ;


 int FUNC_0 (struct drbd_device*,char*,int) ;
 int FUNC_1 (struct drbd_device*,int *) ;

__attribute__((used)) static void FUNC_2(struct drbd_device *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0, &VAR_0->active_ee);
 if (VAR_1)
  FUNC_0(VAR_0, "%d EEs in active list found!\n", VAR_1);

 VAR_1 = FUNC_1(VAR_0, &VAR_0->sync_ee);
 if (VAR_1)
  FUNC_0(VAR_0, "%d EEs in sync list found!\n", VAR_1);

 VAR_1 = FUNC_1(VAR_0, &VAR_0->read_ee);
 if (VAR_1)
  FUNC_0(VAR_0, "%d EEs in read list found!\n", VAR_1);

 VAR_1 = FUNC_1(VAR_0, &VAR_0->done_ee);
 if (VAR_1)
  FUNC_0(VAR_0, "%d EEs in done list found!\n", VAR_1);

 VAR_1 = FUNC_1(VAR_0, &VAR_0->net_ee);
 if (VAR_1)
  FUNC_0(VAR_0, "%d EEs in net list found!\n", VAR_1);
}

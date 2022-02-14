
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipu_soc {int dummy; } ;
struct ipu_crtc {int di; int dc; TYPE_1__* dev; } ;
struct ipu_client_platformdata {int di; int dc; } ;
struct TYPE_2__ {int parent; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct ipu_soc* FUNC_2 (int ) ;
 int FUNC_3 (struct ipu_soc*,int ) ;
 int FUNC_4 (struct ipu_soc*,int ) ;
 int FUNC_5 (struct ipu_crtc*) ;

__attribute__((used)) static int FUNC_6(struct ipu_crtc *VAR_0,
  struct ipu_client_platformdata *VAR_1)
{
 struct ipu_soc *VAR_2 = FUNC_2(VAR_0->dev->parent);
 int VAR_3;

 VAR_0->dc = FUNC_3(VAR_2, VAR_1->dc);
 if (FUNC_0(VAR_0->dc)) {
  VAR_3 = FUNC_1(VAR_0->dc);
  goto err_out;
 }

 VAR_0->di = FUNC_4(VAR_2, VAR_1->di);
 if (FUNC_0(VAR_0->di)) {
  VAR_3 = FUNC_1(VAR_0->di);
  goto err_out;
 }

 return 0;
err_out:
 FUNC_5(VAR_0);

 return VAR_3;
}

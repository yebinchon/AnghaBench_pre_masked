
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gsc_scaler {int range; } ;
struct gsc_context {struct gsc_scaler sc; int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct gsc_context*) ;
 int FUNC_2 (struct gsc_scaler*,int,int) ;

__attribute__((used)) static int FUNC_3(struct gsc_context *VAR_0)
{
 struct gsc_scaler *VAR_1 = &VAR_0->sc;
 int VAR_2;


 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2 < 0) {
  FUNC_0(VAR_0->dev, "failed to reset hardware.\n");
  return VAR_2;
 }


 FUNC_2(&VAR_0->sc, 0x0, sizeof(VAR_0->sc));
 VAR_1->range = 1;

 return 0;
}

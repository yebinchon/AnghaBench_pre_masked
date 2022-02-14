
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_sham_dev {int err; int flags; int req; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct omap_sham_dev*,int *) ;
 int FUNC_4 (struct omap_sham_dev*) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_5)
{
 struct omap_sham_dev *VAR_6 = (struct omap_sham_dev *)VAR_5;
 int VAR_7 = 0;

 if (!FUNC_6(VAR_0, &VAR_6->flags)) {
  FUNC_3(VAR_6, ((void*)0));
  return;
 }

 if (FUNC_6(VAR_1, &VAR_6->flags)) {
  if (FUNC_5(VAR_4, &VAR_6->flags))
   goto finish;
 } else if (FUNC_6(VAR_3, &VAR_6->flags)) {
  if (FUNC_5(VAR_2, &VAR_6->flags)) {
   FUNC_4(VAR_6);
   if (VAR_6->err) {
    VAR_7 = VAR_6->err;
    goto finish;
   }
  }
  if (FUNC_5(VAR_4, &VAR_6->flags)) {

   FUNC_0(VAR_3, &VAR_6->flags);
   goto finish;
  }
 }

 return;

finish:
 FUNC_1(VAR_6->dev, "update done: err: %d\n", VAR_7);

 FUNC_2(VAR_6->req, VAR_7);


 if (!FUNC_6(VAR_0, &VAR_6->flags))
  FUNC_3(VAR_6, ((void*)0));
}

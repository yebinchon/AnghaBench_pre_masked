
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,double,double,double,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

void FUNC_1 (void) {
  FUNC_0 (VAR_2,
      "read: %f bytes, %f records read\n"
      "written: %f bytes\n"
      "stored keys: %d\n",
      VAR_1, VAR_0, VAR_7,
      VAR_4
      );
  if (VAR_6 && VAR_0) {
    FUNC_0 (VAR_2, "average url length: %.3lf\n"
         "average url hash length: %.3lf\n"
         "average id in base62 length: %.3lf\n",
         ((double) (VAR_6)) / ((double) (VAR_0)),
         ((double) (VAR_5)) / ((double) (VAR_0)),
         ((double) (VAR_3)) / ((double) (VAR_0))
         );
  }
}

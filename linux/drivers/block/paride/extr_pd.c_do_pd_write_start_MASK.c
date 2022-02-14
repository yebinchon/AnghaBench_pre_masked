
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef enum action { ____Placeholder_action } action ;
struct TYPE_4__ {int pi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_1__* VAR_13 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_2 (TYPE_1__*,int ,char*) ;
 int VAR_17 ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static enum action FUNC_4(void)
{
 if (FUNC_2(VAR_13, VAR_7, "do_pd_write") & VAR_6) {
  if (VAR_14 < VAR_3) {
   VAR_14++;
   return VAR_8;
  }
  return VAR_0;
 }
 FUNC_0(VAR_13, VAR_2, VAR_11, VAR_15);
 while (1) {
  if (FUNC_2(VAR_13, VAR_5, "do_pd_write_drq") & VAR_6) {
   if (VAR_14 < VAR_3) {
    VAR_14++;
    return VAR_8;
   }
   return VAR_0;
  }
  FUNC_3(VAR_13->pi, VAR_12, 512);
  if (FUNC_1())
   break;
 }
 VAR_17 = VAR_9;
 VAR_16 = VAR_10 + VAR_4;
 return VAR_1;
}

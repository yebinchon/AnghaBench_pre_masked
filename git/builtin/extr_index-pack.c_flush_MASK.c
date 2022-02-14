
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* update_fn ) (int *,scalar_t__,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,scalar_t__,scalar_t__) ;
 TYPE_1__* VAR_5 ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(void)
{
 if (VAR_3) {
  if (VAR_4 >= 0)
   FUNC_2(VAR_4, VAR_0, VAR_3);
  VAR_5->update_fn(&VAR_1, VAR_0, VAR_3);
  FUNC_0(VAR_0, VAR_0 + VAR_3, VAR_2);
  VAR_3 = 0;
 }
}

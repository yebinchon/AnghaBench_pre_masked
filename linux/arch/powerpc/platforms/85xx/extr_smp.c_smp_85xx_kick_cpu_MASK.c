
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cpu_start; } ;
struct TYPE_3__ {int (* cpu_up_prepare ) (int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 TYPE_2__** VAR_5 ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (char*) ;
 TYPE_1__* VAR_6 ;
 int FUNC_10 (int) ;
 int FUNC_11 (int,int ,int*,int) ;
 int FUNC_12 (int) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_13(int VAR_9)
{
 int VAR_10 = 0;




 FUNC_0(VAR_9 < 0 || VAR_9 >= FUNC_7());

 FUNC_8("kick CPU #%d\n", VAR_9);
 VAR_10 = FUNC_10(VAR_9);
 if (VAR_10)
  return VAR_10;

 FUNC_6(VAR_9);

 return VAR_10;

}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; int devt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,scalar_t__,int ) ;
 int FUNC_1 () ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_4 = FUNC_0(&VAR_2[VAR_3].devt, 0,
       VAR_1 + 1, VAR_2[VAR_3].name);
  if (VAR_4)
   goto exit;
 }

 return 0;

exit:
 FUNC_1();
 return VAR_4;
}

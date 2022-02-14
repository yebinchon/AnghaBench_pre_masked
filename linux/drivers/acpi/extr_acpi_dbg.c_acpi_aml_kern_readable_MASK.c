
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int in_crc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4(void)
{
 bool VAR_2;

 FUNC_2(&VAR_1.lock);
 VAR_2 = !FUNC_0(VAR_0) ||
       FUNC_1(&VAR_1.in_crc, VAR_0);
 FUNC_3(&VAR_1.lock);
 return VAR_2;
}

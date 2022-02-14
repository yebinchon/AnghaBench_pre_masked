
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ newest_psk; int * psk; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int *,int ) ;

__attribute__((used)) static void
FUNC_1(uint8_t *VAR_4)
{

 VAR_2.newest_psk++;
 if (VAR_2.newest_psk == VAR_1)
  VAR_2.newest_psk = 0;
 FUNC_0(VAR_2.psk[VAR_2.newest_psk], VAR_4,
     VAR_0);
 if (VAR_3 < VAR_1)
  VAR_3++;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ version; } ;
struct TYPE_5__ {TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;

void FUNC_1(void)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, &VAR_3);
 if (VAR_5 == VAR_0 &&
     VAR_3.hdr.version <= VAR_2)
  VAR_4 = 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* register_offsets; scalar_t__ crossbar_base; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(int VAR_1, int VAR_2)
{
 FUNC_0(VAR_2, VAR_0->crossbar_base + VAR_0->register_offsets[VAR_1]);
}

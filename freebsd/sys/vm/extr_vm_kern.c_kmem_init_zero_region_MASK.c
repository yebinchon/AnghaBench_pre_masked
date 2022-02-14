
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef scalar_t__ vm_offset_t ;
struct TYPE_5__ {int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,TYPE_1__**,int) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int *,int ,int) ;
 void const* VAR_9 ;

void
FUNC_5(void)
{
 vm_offset_t VAR_10, VAR_11;
 vm_page_t VAR_12;






 VAR_10 = FUNC_0(VAR_7);
 VAR_12 = FUNC_4(((void*)0), 0, VAR_3 |
     VAR_2 | VAR_4 | VAR_5);
 if ((VAR_12->flags & VAR_1) == 0)
  FUNC_3(VAR_12);
 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11 += VAR_0)
  FUNC_2(VAR_10 + VAR_11, &VAR_12, 1);
 FUNC_1(VAR_8, VAR_10, VAR_10 + VAR_7, VAR_6);

 VAR_9 = (const void *)VAR_10;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef TYPE_1__* uma_slab_t ;
struct TYPE_4__ {int us_flags; int us_size; scalar_t__ us_data; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__*,int *,int ) ;

void
FUNC_4(uma_slab_t VAR_3)
{

 FUNC_0((VAR_3->us_flags & VAR_1) != 0,
     ("uma_large_free:  Memory not allocated with uma_large_malloc."));
 FUNC_1((vm_offset_t)VAR_3->us_data, VAR_3->us_size);
 FUNC_2(VAR_3->us_size);
 FUNC_3(VAR_2, VAR_3, ((void*)0), VAR_0);
}

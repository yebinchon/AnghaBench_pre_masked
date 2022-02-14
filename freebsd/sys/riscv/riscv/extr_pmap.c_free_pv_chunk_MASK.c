
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_offset_t ;
struct pv_chunk {int dummy; } ;
struct TYPE_5__ {int phys_addr; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,struct pv_chunk*,int ) ;
 int VAR_0 ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_11(struct pv_chunk *VAR_7)
{
 vm_page_t VAR_8;

 FUNC_7(&VAR_5);
  FUNC_3(&VAR_4, VAR_7, VAR_3);
 FUNC_8(&VAR_5);
 FUNC_2(FUNC_5(&VAR_6, VAR_0));
 FUNC_2(FUNC_5(&VAR_1, 1));
 FUNC_2(FUNC_4(&VAR_2, 1));

 VAR_8 = FUNC_1(FUNC_0((vm_offset_t)VAR_7));
 FUNC_6(VAR_8->phys_addr);
 FUNC_10(VAR_8);
 FUNC_9(VAR_8);
}

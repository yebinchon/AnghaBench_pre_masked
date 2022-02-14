
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
struct md_page {int pv_list; } ;
struct TYPE_4__ {int pv_list; } ;
struct TYPE_3__ {int end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int *,char*,int *,int ) ;
 int * VAR_6 ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;
 int * VAR_9 ;
 struct md_page* VAR_10 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,char*) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 TYPE_1__* VAR_13 ;

void
FUNC_6(void)
{
 vm_size_t VAR_14;
 int VAR_15, VAR_16;




 FUNC_3(&VAR_7, "pmap pv chunk list", ((void*)0), VAR_1);
 FUNC_3(&VAR_5, "allpmaps", ((void*)0), VAR_1);




 for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++)
  FUNC_5(&VAR_9[VAR_15], "pmap pv list");




 VAR_16 = FUNC_1(VAR_13[VAR_12 - 1].end, VAR_0);




 VAR_14 = (vm_size_t)(VAR_16 * sizeof(struct md_page));
 VAR_14 = FUNC_4(VAR_14);
 VAR_10 = (struct md_page *)FUNC_2(VAR_14, VAR_2 | VAR_3);
 for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++)
  FUNC_0(&VAR_10[VAR_15].pv_list);
 FUNC_0(&VAR_8.pv_list);

 if (VAR_11)
  VAR_6[1] = VAR_0;
}

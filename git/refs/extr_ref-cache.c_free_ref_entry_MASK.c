
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int subdir; } ;
struct ref_entry {int flag; TYPE_1__ u; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ref_entry*) ;

__attribute__((used)) static void FUNC_2(struct ref_entry *VAR_1)
{
 if (VAR_1->flag & VAR_0) {




  FUNC_0(&VAR_1->u.subdir);
 }
 FUNC_1(VAR_1);
}

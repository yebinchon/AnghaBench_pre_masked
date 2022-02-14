
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags_extended; int flags; int mode; int id; } ;
typedef TYPE_1__ git_index_entry ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(
 git_index_entry *VAR_1,
 const git_index_entry *VAR_2)
{
 FUNC_0(&VAR_1->id, &VAR_2->id);
 VAR_1->mode = VAR_2->mode;
 VAR_1->flags = VAR_2->flags;
 VAR_1->flags_extended = (VAR_2->flags_extended & VAR_0);
}

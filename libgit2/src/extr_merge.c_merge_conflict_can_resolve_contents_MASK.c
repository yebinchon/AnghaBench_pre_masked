
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int path; int mode; } ;
struct TYPE_5__ {int path; int mode; } ;
struct TYPE_6__ {scalar_t__ type; int our_status; int their_status; TYPE_4__ their_entry; TYPE_1__ ancestor_entry; TYPE_4__ our_entry; } ;
typedef TYPE_2__ git_merge_diff ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_4__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static bool FUNC_4(
 const git_merge_diff *VAR_4)
{
 if (!FUNC_0(VAR_4->our_entry) ||
  !FUNC_0(VAR_4->their_entry))
  return 0;


 if (VAR_4->type == VAR_2)
  return 0;


 if (FUNC_1(VAR_4->ancestor_entry.mode) ||
  FUNC_1(VAR_4->our_entry.mode) ||
  FUNC_1(VAR_4->their_entry.mode))
  return 0;


 if ((FUNC_2(VAR_4->ancestor_entry.mode) ^
   FUNC_2(VAR_4->our_entry.mode)) ||
  (FUNC_2(VAR_4->ancestor_entry.mode) ^
   FUNC_2(VAR_4->their_entry.mode)))
  return 0;


 if (VAR_4->type == VAR_1 ||
  VAR_4->type == VAR_3)
  return 0;

 if ((VAR_4->our_status & VAR_0) == VAR_0 &&
  (VAR_4->their_status & VAR_0) == VAR_0 &&
  FUNC_3(VAR_4->ancestor_entry.path, VAR_4->their_entry.path) != 0)
  return 0;

 return 1;
}

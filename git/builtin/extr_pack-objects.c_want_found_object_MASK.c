
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packed_git {scalar_t__ pack_keep_in_core; scalar_t__ pack_keep; scalar_t__ pack_local; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_0(int VAR_5, struct packed_git *VAR_6)
{
 if (VAR_5)
  return 1;
 if (VAR_3)
  return 0;
 if (!VAR_2 &&
     !VAR_1 &&
     (!VAR_4 || !VAR_0))
  return 1;

 if (VAR_4 && !VAR_6->pack_local)
  return 0;
 if (VAR_6->pack_local &&
     ((VAR_2 && VAR_6->pack_keep) ||
      (VAR_1 && VAR_6->pack_keep_in_core)))
  return 0;


 return -1;
}

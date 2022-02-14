
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ scrub_flag; } ;
struct pfsync_state_peer {TYPE_1__ scrub; } ;
struct pf_state_peer {int * scrub; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ,int) ;

__attribute__((used)) static int
FUNC_1(struct pfsync_state_peer *VAR_4,
    struct pf_state_peer *VAR_5)
{
 if (VAR_4->scrub.scrub_flag && VAR_5->scrub == ((void*)0)) {
  VAR_5->scrub = FUNC_0(VAR_3, VAR_1 | VAR_2);
  if (VAR_5->scrub == ((void*)0))
   return (VAR_0);
 }

 return (0);
}

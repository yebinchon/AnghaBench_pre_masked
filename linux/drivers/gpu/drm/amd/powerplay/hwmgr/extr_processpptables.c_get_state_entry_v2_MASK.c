
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_6__ {int ucNumDPMLevels; } ;
struct TYPE_5__ {scalar_t__ ucNumEntries; TYPE_2__* states; } ;
typedef TYPE_1__ StateArray ;
typedef TYPE_2__ ATOM_PPLIB_STATE_V2 ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static const ATOM_PPLIB_STATE_V2 *FUNC_1(
     const StateArray * VAR_0,
        ULONG VAR_1)
{
 ULONG VAR_2;
 const ATOM_PPLIB_STATE_V2 *VAR_3;

 VAR_3 = VAR_0->states;
 if (VAR_1 <= VAR_0->ucNumEntries) {
  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
   VAR_3 = (ATOM_PPLIB_STATE_V2 *)(
        (unsigned long)VAR_3 +
        FUNC_0(VAR_3->ucNumDPMLevels));
 }
 return VAR_3;
}

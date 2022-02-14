
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_long ;
struct msdosfsmount {size_t pm_maxcluster; int pm_flags; int* pm_inusemap; scalar_t__ pm_freeclustercount; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static __inline void
FUNC_1(struct msdosfsmount *VAR_3, u_long VAR_4)
{

 FUNC_0(VAR_4 <= VAR_3->pm_maxcluster);
 FUNC_0((VAR_3->pm_flags & VAR_0) == 0);
 FUNC_0((VAR_3->pm_inusemap[VAR_4 / VAR_2] & (1 << (VAR_4 % VAR_2)))
     == 0);
 FUNC_0(VAR_3->pm_freeclustercount > 0);

 VAR_3->pm_inusemap[VAR_4 / VAR_2] |= 1U << (VAR_4 % VAR_2);
 VAR_3->pm_freeclustercount--;
 VAR_3->pm_flags |= VAR_1;
}

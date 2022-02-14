
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int ro; int sb_flags; } ;
struct raid_set {struct mddev md; } ;


 int VAR_0 ;
 int FUNC_0 (struct mddev*,int) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct raid_set *VAR_1)
{
 struct mddev *VAR_2 = &VAR_1->md;
 int VAR_3 = VAR_2->ro;

 FUNC_1(VAR_0, &VAR_2->sb_flags);
 VAR_2->ro = 0;
 FUNC_0(VAR_2, 1);
 VAR_2->ro = VAR_3;
}

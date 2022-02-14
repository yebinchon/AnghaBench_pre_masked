
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int use_ignores; int * ignore_ch; } ;
typedef TYPE_1__ hashsig_in_progress ;
struct TYPE_7__ {int opt; } ;
typedef TYPE_2__ git_hashsig ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_4(
 hashsig_in_progress *VAR_2, git_hashsig *VAR_3)
{
 int VAR_4;


 FUNC_0(!(VAR_3->opt & VAR_0) ||
     !(VAR_3->opt & VAR_1));

 if (VAR_3->opt & VAR_0) {
  for (VAR_4 = 0; VAR_4 < 256; ++VAR_4)
   VAR_2->ignore_ch[VAR_4] = FUNC_2(VAR_4);
  VAR_2->use_ignores = 1;
 } else if (VAR_3->opt & VAR_1) {
  for (VAR_4 = 0; VAR_4 < 256; ++VAR_4)
   VAR_2->ignore_ch[VAR_4] = FUNC_1(VAR_4);
  VAR_2->use_ignores = 1;
 } else {
  FUNC_3(VAR_2, 0, sizeof(*VAR_2));
 }
}

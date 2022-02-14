
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {int thread; struct md_cluster_info* cluster_info; } ;
struct md_cluster_info {int state; TYPE_1__* token_lockres; int wait; } ;
struct TYPE_2__ {scalar_t__ mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct md_cluster_info*,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static int FUNC_8(struct mddev *VAR_4)
{
 struct md_cluster_info *VAR_5 = VAR_4->cluster_info;
 int VAR_6;





 VAR_6 = FUNC_6(VAR_1,
        &VAR_5->state);
 FUNC_0(VAR_6);
 FUNC_3(VAR_4->thread);

 FUNC_7(VAR_5->wait,
     !FUNC_5(VAR_2, &VAR_5->state) ||
     FUNC_4(VAR_3, &VAR_5->state));


 if (VAR_5->token_lockres->mode == VAR_0) {
  FUNC_1(VAR_1, &VAR_5->state);
  return 0;
 }

 VAR_6 = FUNC_2(VAR_5, 1);
 FUNC_1(VAR_1, &VAR_5->state);
 return VAR_6;
}

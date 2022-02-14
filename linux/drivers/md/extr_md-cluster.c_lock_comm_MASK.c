
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md_cluster_info {int state; int wait; } ;


 int VAR_0 ;
 int FUNC_0 (struct md_cluster_info*,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct md_cluster_info *VAR_1, bool VAR_2)
{
 FUNC_2(VAR_1->wait,
     !FUNC_1(VAR_0, &VAR_1->state));

 return FUNC_0(VAR_1, VAR_2);
}

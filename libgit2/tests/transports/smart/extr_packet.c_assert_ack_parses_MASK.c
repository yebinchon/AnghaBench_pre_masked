
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; int oid; int type; } ;
typedef TYPE_1__ git_pkt_ack ;
typedef int git_pkt ;
typedef int git_oid ;
typedef enum git_ack_status { ____Placeholder_git_ack_status } git_ack_status ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,char const**,char const*,size_t) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static void FUNC_7(const char *VAR_1, const char *VAR_2, enum git_ack_status VAR_3)
{
 size_t VAR_4 = FUNC_6(VAR_1) + 1;
 const char *VAR_5;
 git_pkt_ack *VAR_6;
 git_oid VAR_7;

 FUNC_2(FUNC_3(&VAR_7, VAR_2));

 FUNC_2(FUNC_5((git_pkt **) &VAR_6, &VAR_5, VAR_1, VAR_4));
 FUNC_0(VAR_6->type, VAR_0);
 FUNC_1(&VAR_6->oid, &VAR_7);
 FUNC_0(VAR_6->status, VAR_3);

 FUNC_4((git_pkt *) VAR_6);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_4__ {int received_bytes; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*,int) ;
 TYPE_1__* VAR_0 ;

void FUNC_4(void)
{
 git_oid VAR_1;

 FUNC_1(FUNC_3(VAR_0, "deadbeef", 8));
 FUNC_0(8, VAR_0->received_bytes);

 FUNC_1(FUNC_3(VAR_0, "deadbeef", 6));
 FUNC_0(8 + 6, VAR_0->received_bytes);

 FUNC_1(FUNC_2(&VAR_1, VAR_0));
}

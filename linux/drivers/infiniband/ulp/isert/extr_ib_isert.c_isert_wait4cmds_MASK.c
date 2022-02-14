
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_conn {TYPE_1__* sess; } ;
struct TYPE_2__ {int se_sess; } ;


 int FUNC_0 (char*,struct iscsi_conn*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct iscsi_conn *VAR_0)
{
 FUNC_0("iscsi_conn %p\n", VAR_0);

 if (VAR_0->sess) {
  FUNC_1(VAR_0->sess->se_sess);
  FUNC_2(VAR_0->sess->se_sess);
 }
}

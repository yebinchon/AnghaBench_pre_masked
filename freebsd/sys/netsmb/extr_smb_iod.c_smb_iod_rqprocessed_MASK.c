
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_rq {int sr_lerror; int sr_state; int sr_rpgen; } ;


 int VAR_0 ;
 int FUNC_0 (struct smb_rq*) ;
 int FUNC_1 (struct smb_rq*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static __inline void
FUNC_3(struct smb_rq *VAR_1, int VAR_2)
{
 FUNC_0(VAR_1);
 VAR_1->sr_lerror = VAR_2;
 VAR_1->sr_rpgen++;
 VAR_1->sr_state = VAR_0;
 FUNC_2(&VAR_1->sr_state);
 FUNC_1(VAR_1);
}

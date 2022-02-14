
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_share {int ss_stlock; int ss_pass; int ss_name; } ;
struct smb_connobj {int dummy; } ;


 struct smb_share* FUNC_0 (struct smb_connobj*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct smb_share*) ;
 int FUNC_3 (struct smb_share*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct smb_connobj *VAR_1)
{
 struct smb_share *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_2->ss_name);
 FUNC_1(VAR_2->ss_pass);
 FUNC_5(&VAR_2->ss_stlock);
 FUNC_4(FUNC_2(VAR_2));
 FUNC_3(VAR_2, VAR_0);
}

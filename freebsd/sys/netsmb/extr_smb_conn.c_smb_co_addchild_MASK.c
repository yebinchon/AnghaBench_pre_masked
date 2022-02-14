
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_connobj {struct smb_connobj* co_parent; int co_children; } ;


 int FUNC_0 (int *,struct smb_connobj*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct smb_connobj*) ;

__attribute__((used)) static void
FUNC_2(struct smb_connobj *VAR_1, struct smb_connobj *VAR_2)
{

 FUNC_1(VAR_1);
 FUNC_0(&VAR_1->co_children, VAR_2, VAR_0);
 VAR_2->co_parent = VAR_1;
}

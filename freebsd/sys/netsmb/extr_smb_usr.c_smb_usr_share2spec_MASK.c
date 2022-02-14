
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbioc_oshare {int ioc_password; int ioc_stype; int ioc_share; int ioc_group; int ioc_owner; int ioc_rights; int ioc_mode; } ;
struct smb_sharespec {int pass; int stype; int name; int group; int owner; int rights; int mode; } ;


 int FUNC_0 (struct smb_sharespec*,int) ;

__attribute__((used)) static int
FUNC_1(struct smbioc_oshare *VAR_0, struct smb_sharespec *VAR_1)
{
 FUNC_0(VAR_1, sizeof(*VAR_1));
 VAR_1->mode = VAR_0->ioc_mode;
 VAR_1->rights = VAR_0->ioc_rights;
 VAR_1->owner = VAR_0->ioc_owner;
 VAR_1->group = VAR_0->ioc_group;
 VAR_1->name = VAR_0->ioc_share;
 VAR_1->stype = VAR_0->ioc_stype;
 VAR_1->pass = VAR_0->ioc_password;
 return 0;
}

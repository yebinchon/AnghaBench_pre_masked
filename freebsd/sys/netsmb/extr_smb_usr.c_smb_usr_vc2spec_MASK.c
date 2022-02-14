
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbioc_ossn {scalar_t__* ioc_user; scalar_t__* ioc_localcs; int ioc_opt; int ioc_servercs; int ioc_group; int ioc_owner; int ioc_rights; int ioc_mode; int ioc_workgroup; int ioc_password; int ioc_srvname; int ioc_lolen; int * ioc_local; int ioc_svlen; int * ioc_server; } ;
struct smb_vcspec {scalar_t__* username; scalar_t__* localcs; int flags; int servercs; int group; int owner; int rights; int mode; int domain; int pass; int srvname; int * lap; int * sap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct smb_vcspec*,int) ;
 void* FUNC_2 (int *,int ) ;
 int FUNC_3 (struct smb_vcspec*) ;

__attribute__((used)) static int
FUNC_4(struct smbioc_ossn *VAR_6, struct smb_vcspec *VAR_7)
{
 int VAR_8 = 0;

 FUNC_1(VAR_7, sizeof(*VAR_7));






 if (VAR_6->ioc_server == ((void*)0))
  return VAR_0;
 if (VAR_6->ioc_localcs[0] == 0) {
  FUNC_0("no local charset ?\n");
  return VAR_0;
 }

 VAR_7->sap = FUNC_2(VAR_6->ioc_server, VAR_6->ioc_svlen);
 if (VAR_7->sap == ((void*)0))
  return VAR_1;
 if (VAR_6->ioc_local) {
  VAR_7->lap = FUNC_2(VAR_6->ioc_local, VAR_6->ioc_lolen);
  if (VAR_7->lap == ((void*)0)) {
   FUNC_3(VAR_7);
   return VAR_1;
  }
 }
 VAR_7->srvname = VAR_6->ioc_srvname;
 VAR_7->pass = VAR_6->ioc_password;
 VAR_7->domain = VAR_6->ioc_workgroup;
 VAR_7->username = VAR_6->ioc_user;
 VAR_7->mode = VAR_6->ioc_mode;
 VAR_7->rights = VAR_6->ioc_rights;
 VAR_7->owner = VAR_6->ioc_owner;
 VAR_7->group = VAR_6->ioc_group;
 VAR_7->localcs = VAR_6->ioc_localcs;
 VAR_7->servercs = VAR_6->ioc_servercs;
 if (VAR_6->ioc_opt & VAR_2)
  VAR_8 |= VAR_4;
 if (VAR_6->ioc_opt & VAR_3)
  VAR_8 |= VAR_4 | VAR_5;
 VAR_7->flags = VAR_8;
 return 0;
}

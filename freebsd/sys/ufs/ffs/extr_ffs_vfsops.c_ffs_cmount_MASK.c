
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ufs_args {int fspec; int export; } ;
struct mntarg {int dummy; } ;
struct export_args {int dummy; } ;
typedef int exp ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,struct ufs_args*,int) ;
 int FUNC_1 (struct mntarg*,int ) ;
 struct mntarg* FUNC_2 (struct mntarg*,char*,struct export_args*,int) ;
 struct mntarg* FUNC_3 (struct mntarg*,char*,int ,int ) ;
 int FUNC_4 (int *,struct export_args*) ;

__attribute__((used)) static int
FUNC_5(struct mntarg *VAR_2, void *VAR_3, uint64_t VAR_4)
{
 struct ufs_args VAR_5;
 struct export_args VAR_6;
 int VAR_7;

 if (VAR_3 == ((void*)0))
  return (VAR_0);
 VAR_7 = FUNC_0(VAR_3, &VAR_5, sizeof VAR_5);
 if (VAR_7)
  return (VAR_7);
 FUNC_4(&VAR_5.export, &VAR_6);

 VAR_2 = FUNC_3(VAR_2, "from", VAR_5.fspec, VAR_1);
 VAR_2 = FUNC_2(VAR_2, "export", &VAR_6, sizeof(VAR_6));
 VAR_7 = FUNC_1(VAR_2, VAR_4);

 return (VAR_7);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_file_svid {scalar_t__ ns_ucred; int ns_svid; int ns_active; int ns_refs; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct nlm_file_svid*,int ) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct nlm_file_svid*,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_7(struct nlm_file_svid *VAR_4)
{

 FUNC_5(&VAR_2);
 VAR_4->ns_refs--;
 if (!VAR_4->ns_refs) {
  FUNC_0(!VAR_4->ns_active, ("Freeing active SVID"));
  FUNC_1(VAR_4, VAR_3);
  FUNC_6(&VAR_2);
  FUNC_4(VAR_1, VAR_4->ns_svid);
  if (VAR_4->ns_ucred)
   FUNC_2(VAR_4->ns_ucred);
  FUNC_3(VAR_4, VAR_0);
 } else {
  FUNC_6(&VAR_2);
 }
}

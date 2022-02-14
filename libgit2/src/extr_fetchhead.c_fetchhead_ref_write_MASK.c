
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_filebuf ;
struct TYPE_3__ {char* ref_name; int remote_url; scalar_t__ is_merge; int oid; } ;
typedef TYPE_1__ git_fetchhead_ref ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *,char*,char*,char*,...) ;
 int FUNC_4 (char*,int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(
 git_filebuf *VAR_4,
 git_fetchhead_ref *VAR_5)
{
 char VAR_6[VAR_1 + 1];
 const char *VAR_7, *VAR_8;
 int VAR_9 = 0;

 FUNC_0(VAR_4 && VAR_5);

 FUNC_4(VAR_6, &VAR_5->oid);
 VAR_6[VAR_1] = '\0';

 if (FUNC_1(VAR_5->ref_name, VAR_2) == 0) {
  VAR_7 = "branch ";
  VAR_8 = VAR_5->ref_name + FUNC_5(VAR_2);
 } else if(FUNC_1(VAR_5->ref_name,
  VAR_3) == 0) {
  VAR_7 = "tag ";
  VAR_8 = VAR_5->ref_name + FUNC_5(VAR_3);
 } else if (!FUNC_2(VAR_5->ref_name, VAR_0)) {
  VAR_9 = 1;
 } else {
  VAR_7 = "";
  VAR_8 = VAR_5->ref_name;
 }

 if (VAR_9)
  return FUNC_3(VAR_4, "%s\t\t%s\n", VAR_6, VAR_5->remote_url);

 return FUNC_3(VAR_4, "%s\t%s\t%s'%s' of %s\n",
  VAR_6,
  (VAR_5->is_merge) ? "" : "not-for-merge",
  VAR_7,
  VAR_8,
  VAR_5->remote_url);
}

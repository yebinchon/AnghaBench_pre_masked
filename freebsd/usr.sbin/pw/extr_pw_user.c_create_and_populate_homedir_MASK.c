
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
struct userconf {int dummy; } ;
struct passwd {int pw_dir; scalar_t__ pw_uid; int pw_name; int pw_gid; } ;
typedef int mode_t ;
struct TYPE_2__ {int rootfd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 (int ,int ,int,int ,scalar_t__,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char const*,int) ;
 int FUNC_3 (struct userconf*,int ,int ,char*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct userconf *VAR_6, struct passwd *VAR_7,
    const char *VAR_8, mode_t VAR_9, bool VAR_10)
{
 int VAR_11 = -1;


 FUNC_1(VAR_5.rootfd, VAR_7->pw_dir);

 if (VAR_8 != ((void*)0) && *VAR_8 != '\0') {
  if (*VAR_8 == '/')
   VAR_8++;
  VAR_11 = FUNC_2(VAR_5.rootfd, VAR_8, VAR_3|VAR_2);
 }

 FUNC_0(VAR_5.rootfd, VAR_7->pw_dir, VAR_11, VAR_9, VAR_7->pw_uid,
     VAR_7->pw_gid, 0);
 FUNC_3(VAR_6, VAR_10 ? VAR_1 : VAR_0, VAR_4, "%s(%ju) home %s made",
     VAR_7->pw_name, (uintmax_t)VAR_7->pw_uid, VAR_7->pw_dir);
}

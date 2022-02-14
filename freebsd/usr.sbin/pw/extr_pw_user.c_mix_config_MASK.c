
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct userconf {scalar_t__ default_password; scalar_t__ reuse_uids; scalar_t__ reuse_gids; scalar_t__ homemode; scalar_t__ min_uid; scalar_t__ max_uid; scalar_t__ min_gid; scalar_t__ max_gid; scalar_t__ expire_days; scalar_t__ password_days; int * default_class; int * groups; int * default_group; int * shell_default; int * shells; int * shelldir; int * home; int * logfile; int * newmail; int * dotdir; int * nispasswd; } ;



__attribute__((used)) static void
FUNC_0(struct userconf *VAR_0, struct userconf *VAR_1)
{

 if (VAR_0->default_password < 0)
  VAR_0->default_password = VAR_1->default_password;
 if (VAR_0->reuse_uids == 0)
  VAR_0->reuse_uids = VAR_1->reuse_uids;
 if (VAR_0->reuse_gids == 0)
  VAR_0->reuse_gids = VAR_1->reuse_gids;
 if (VAR_0->nispasswd == ((void*)0))
  VAR_0->nispasswd = VAR_1->nispasswd;
 if (VAR_0->dotdir == ((void*)0))
  VAR_0->dotdir = VAR_1->dotdir;
 if (VAR_0->newmail == ((void*)0))
  VAR_0->newmail = VAR_1->newmail;
 if (VAR_0->logfile == ((void*)0))
  VAR_0->logfile = VAR_1->logfile;
 if (VAR_0->home == ((void*)0))
  VAR_0->home = VAR_1->home;
 if (VAR_0->homemode == 0)
  VAR_0->homemode = VAR_1->homemode;
 if (VAR_0->shelldir == ((void*)0))
  VAR_0->shelldir = VAR_1->shelldir;
 if (VAR_0->shells == ((void*)0))
  VAR_0->shells = VAR_1->shells;
 if (VAR_0->shell_default == ((void*)0))
  VAR_0->shell_default = VAR_1->shell_default;
 if (VAR_0->default_group == ((void*)0))
  VAR_0->default_group = VAR_1->default_group;
 if (VAR_0->groups == ((void*)0))
  VAR_0->groups = VAR_1->groups;
 if (VAR_0->default_class == ((void*)0))
  VAR_0->default_class = VAR_1->default_class;
 if (VAR_0->min_uid == 0)
  VAR_0->min_uid = VAR_1->min_uid;
 if (VAR_0->max_uid == 0)
  VAR_0->max_uid = VAR_1->max_uid;
 if (VAR_0->min_gid == 0)
  VAR_0->min_gid = VAR_1->min_gid;
 if (VAR_0->max_gid == 0)
  VAR_0->max_gid = VAR_1->max_gid;
 if (VAR_0->expire_days < 0)
  VAR_0->expire_days = VAR_1->expire_days;
 if (VAR_0->password_days < 0)
  VAR_0->password_days = VAR_1->password_days;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_sharespec {scalar_t__ owner; scalar_t__ group; int mode; int scred; int name; } ;
struct smb_share {scalar_t__ ss_uid; scalar_t__ ss_grp; int ss_mode; int ss_name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct smb_share*,int ,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct smb_share *VAR_4, struct smb_sharespec *VAR_5)
{
 int VAR_6 = 1;

 if (FUNC_1(VAR_4->ss_name, VAR_5->name) != 0)
  return 1;
 if (VAR_5->owner != VAR_1) {
  if (VAR_4->ss_uid != VAR_5->owner)
   return 1;
 } else
  VAR_6 = 0;
 if (VAR_5->group != VAR_0) {
  if (VAR_4->ss_grp != VAR_5->group)
   return 1;
 } else
  VAR_6 = 0;

 if (VAR_5->mode & VAR_2) {
  if (!VAR_6)
   return 1;
  return (VAR_5->mode & VAR_3) == VAR_4->ss_mode ? 0 : 1;
 }
 if (FUNC_0(VAR_4, VAR_5->scred, VAR_5->mode) != 0)
  return 1;
 return 0;
}

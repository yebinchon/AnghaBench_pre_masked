
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct conf_entry {int permissions; scalar_t__ uid; int gid; int flags; } ;
typedef int gid_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (char const*,scalar_t__,int) ;
 int FUNC_3 (int,char*,char const*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,char const*) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_5, const struct conf_entry *VAR_6)
{
 int VAR_7;

 if (VAR_4) {
  FUNC_4("\tchmod %o %s\n", VAR_6->permissions, VAR_5);

  if (VAR_6->uid != (uid_t)-1 || VAR_6->gid != (gid_t)-1)
   FUNC_4("\tchown %u:%u %s\n",
       VAR_6->uid, VAR_6->gid, VAR_5);

  if (VAR_6->flags & VAR_0)
   FUNC_4("\tchflags nodump %s\n", VAR_5);
  return;
 }

 VAR_7 = FUNC_1(VAR_5, VAR_6->permissions);
 if (VAR_7) {
  if (VAR_3 != VAR_1)
   FUNC_3(1, "chmod(%s) in change_attrs", VAR_5);
  FUNC_5("change_attrs couldn't chmod(%s)", VAR_5);
 }

 if (VAR_6->uid != (uid_t)-1 || VAR_6->gid != (gid_t)-1) {
  VAR_7 = FUNC_2(VAR_5, VAR_6->uid, VAR_6->gid);
  if (VAR_7)
   FUNC_5("can't chown %s", VAR_5);
 }

 if (VAR_6->flags & VAR_0) {
  VAR_7 = FUNC_0(VAR_5, VAR_2);
  if (VAR_7)
   FUNC_5("can't chflags %s NODUMP", VAR_5);
 }
}

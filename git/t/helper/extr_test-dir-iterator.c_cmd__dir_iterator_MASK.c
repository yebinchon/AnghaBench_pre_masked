
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* buf; } ;
struct TYPE_3__ {int st_mode; } ;
struct dir_iterator {char* relative_path; char* basename; TYPE_2__ path; TYPE_1__ st; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct dir_iterator*) ;
 struct dir_iterator* FUNC_5 (char const*,unsigned int) ;
 int VAR_5 ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,...) ;
 scalar_t__ FUNC_9 (char const*,char*) ;
 scalar_t__ FUNC_10 (char const*,char*) ;

int FUNC_11(int VAR_6, const char **VAR_7)
{
 struct dir_iterator *VAR_8;
 unsigned int VAR_9 = 0;
 int VAR_10;

 for (++VAR_7, --VAR_6; *VAR_7 && FUNC_9(*VAR_7, "--"); ++VAR_7, --VAR_6) {
  if (FUNC_10(*VAR_7, "--follow-symlinks") == 0)
   VAR_9 |= VAR_0;
  else if (FUNC_10(*VAR_7, "--pedantic") == 0)
   VAR_9 |= VAR_1;
  else
   FUNC_3("invalid option '%s'", *VAR_7);
 }

 if (!*VAR_7 || VAR_6 != 1)
  FUNC_3("dir-iterator needs exactly one non-option argument");

 VAR_8 = FUNC_5(*VAR_7, VAR_9);

 if (!VAR_8) {
  FUNC_8("dir_iterator_begin failure: %s\n", FUNC_6(VAR_5));
  FUNC_7(VAR_2);
 }

 while ((VAR_10 = FUNC_4(VAR_8)) == VAR_4) {
  if (FUNC_0(VAR_8->st.st_mode))
   FUNC_8("[d] ");
  else if (FUNC_2(VAR_8->st.st_mode))
   FUNC_8("[f] ");
  else if (FUNC_1(VAR_8->st.st_mode))
   FUNC_8("[s] ");
  else
   FUNC_8("[?] ");

  FUNC_8("(%s) [%s] %s\n", VAR_8->relative_path, VAR_8->basename,
         VAR_8->path.buf);
 }

 if (VAR_10 != VAR_3) {
  FUNC_8("dir_iterator_advance failure\n");
  return 1;
 }

 return 0;
}

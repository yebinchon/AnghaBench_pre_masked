
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xpasswd {int pw_selected; int pw_uid; char* pw_passwd; int pw_name; } ;
struct xgroup {scalar_t__ gr_mem; int gr_name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct xgroup* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct xpasswd* VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void
FUNC_1(void)
{
 unsigned int VAR_11, VAR_12;
 struct xgroup *VAR_13;
 struct xpasswd *VAR_14;

 for (VAR_11 = 0, VAR_14 = VAR_8; VAR_11 < VAR_6; ++VAR_11, ++VAR_14) {
  if (VAR_1) {
   VAR_14->pw_selected = 1;
   continue;
  }
  if (VAR_0)
   if ((VAR_11 > 0 && VAR_14->pw_uid == VAR_14[-1].pw_uid) ||
       (VAR_11 < VAR_6 - 1 && VAR_14->pw_uid == VAR_14[1].pw_uid)) {
    VAR_14->pw_selected = 1;
    continue;
   }
  if (VAR_2) {
   for (VAR_12 = 0, VAR_13 = VAR_3; VAR_12 < VAR_5; ++VAR_12, ++VAR_13) {
    if (FUNC_0(VAR_13->gr_name, VAR_2) &&
        FUNC_0(VAR_14->pw_name, VAR_13->gr_mem)) {
     VAR_14->pw_selected = 1;
     break;
    }
   }
   if (VAR_14->pw_selected)
    continue;
  }
  if (VAR_4)
   if (FUNC_0(VAR_14->pw_name, VAR_4)) {
    VAR_14->pw_selected = 1;
    continue;
   }
  if (VAR_7)
   if (VAR_14->pw_passwd[0] == '\0') {
    VAR_14->pw_selected = 1;
    continue;
   }
  if (VAR_9)
   if (VAR_14->pw_uid < 1000 || VAR_14->pw_uid == 65534) {
    VAR_14->pw_selected = 1;
    continue;
   }
  if (VAR_10)
   if (VAR_14->pw_uid >= 1000 && VAR_14->pw_uid != 65534) {
    VAR_14->pw_selected = 1;
    continue;
   }
 }
}

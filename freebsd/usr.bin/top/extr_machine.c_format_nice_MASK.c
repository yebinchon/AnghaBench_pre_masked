
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pri_native; int pri_user; int pri_class; } ;
struct kinfo_proc {int ki_flag; int ki_nice; TYPE_1__ ki_pri; } ;
typedef int nicebuf ;


 int VAR_0 ;
 int FUNC_0 (int ) ;


 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;


 int VAR_3 ;
 int FUNC_2 (char*,int,char*,...) ;

__attribute__((used)) static const char *
FUNC_3(const struct kinfo_proc *VAR_4)
{
 const char *VAR_5, *VAR_6;
 int VAR_7;
 static char VAR_8[4 + 1];

 VAR_5 = FUNC_1(VAR_4->ki_pri.pri_class) ? "" : "F";
 VAR_6 = (VAR_4->ki_flag & VAR_3) ? "k" : "";
 switch (FUNC_0(VAR_4->ki_pri.pri_class)) {
 case 130:
  return ("-");
 case 129:
  VAR_7 = ((VAR_4->ki_flag & VAR_3) ? VAR_4->ki_pri.pri_native :
      VAR_4->ki_pri.pri_user) - VAR_2;
  FUNC_2(VAR_8, sizeof(VAR_8), "%sr%d%s",
      VAR_6, VAR_7, VAR_5);
  break;
 case 128:
  if (VAR_4->ki_flag & VAR_3)
   return ("-");
  FUNC_2(VAR_8, sizeof(VAR_8), "%d", VAR_4->ki_nice - VAR_0);
  break;
 case 131:

  VAR_7 = ((VAR_4->ki_flag & VAR_3) ? VAR_4->ki_pri.pri_native :
      VAR_4->ki_pri.pri_user) - VAR_1;
  FUNC_2(VAR_8, sizeof(VAR_8), "%si%d%s",
      VAR_6, VAR_7, VAR_5);
  break;
 default:
  return ("?");
 }
 return (VAR_8);
}

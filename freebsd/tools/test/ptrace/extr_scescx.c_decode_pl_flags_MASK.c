
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptrace_lwpinfo {unsigned int pl_flags; } ;
typedef int flags ;
typedef int decode ;
typedef int de ;
typedef int c ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,unsigned int) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static const char *
FUNC_2(struct ptrace_lwpinfo *VAR_1)
{
 static char VAR_2[128];
 static struct decode_tag {
  int flag;
  const char *desc;
 } VAR_3[] = {
  { 133, "SA" },
  { 138, "BOUND" },
  { 132, "SCE" },
  { 131, "SCX" },
  { 136, "EXEC" },
  { 130, "SI" },
  { 134, "FORKED" },
  { 137, "CHILD" },
  { 139, "LWPBORN" },
  { 135, "LWPEXITED" },
  { 129, "VFORKED" },
  { 128, "VFORKDONE" },
 };
 char VAR_4[32];
 unsigned VAR_5, VAR_6, VAR_7;

 VAR_2[0] = '\0';
 VAR_5 = 1;
 VAR_6 = VAR_1->pl_flags;
 for (VAR_7 = 0; VAR_7 < sizeof(VAR_3) / sizeof(VAR_3[0]); VAR_7++) {
  if ((VAR_6 & VAR_3[VAR_7].flag) != 0) {
   if (VAR_5)
    VAR_5 = 0;
   else
    FUNC_1(VAR_2, ",", sizeof(VAR_2));
   FUNC_1(VAR_2, VAR_3[VAR_7].desc, sizeof(VAR_2));
   VAR_6 &= ~VAR_3[VAR_7].flag;
  }
 }
 for (VAR_7 = 0; VAR_7 < sizeof(VAR_6) * VAR_0; VAR_7++) {
  if ((VAR_6 & (1 << VAR_7)) != 0) {
   if (VAR_5)
    VAR_5 = 0;
   else
    FUNC_1(VAR_2, ",", sizeof(VAR_2));
   FUNC_0(VAR_4, sizeof(VAR_4), "<%d>", VAR_7);
   FUNC_1(VAR_2, VAR_4, sizeof(VAR_2));
  }
 }
 return (VAR_2);
}

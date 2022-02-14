
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s390_operand {int flags; } ;
struct s390_insn {scalar_t__ zero; size_t offset; char* name; size_t format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int FUNC_0 (unsigned char*,struct s390_operand const*) ;
 struct s390_insn* FUNC_1 (unsigned char*) ;
 unsigned char** VAR_10 ;
 char** VAR_11 ;
 struct s390_operand* VAR_12 ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static int FUNC_3(char *VAR_13, unsigned char *VAR_14, unsigned long VAR_15)
{
 struct s390_insn *VAR_16;
 const unsigned char *VAR_17;
 const struct s390_operand *VAR_18;
 unsigned int VAR_19;
 char VAR_20;
 char *VAR_21;
 int VAR_22;

 VAR_21 = VAR_13;
 VAR_16 = FUNC_1(VAR_14);
 if (VAR_16) {
  if (VAR_16->zero == 0)
   VAR_21 += FUNC_2(VAR_21, "%.7s\t",
           VAR_11[VAR_16->offset]);
  else
   VAR_21 += FUNC_2(VAR_21, "%.5s\t", VAR_16->name);

  VAR_20 = 0;
  for (VAR_17 = VAR_10[VAR_16->format], VAR_22 = 0;
       *VAR_17 != 0 && VAR_22 < 6; VAR_17++, VAR_22++) {
   VAR_18 = VAR_12 + *VAR_17;
   VAR_19 = FUNC_0(VAR_14, VAR_18);
   if ((VAR_18->flags & VAR_6) && VAR_19 == 0)
    continue;
   if ((VAR_18->flags & VAR_1) &&
       VAR_19 == 0 && VAR_20 == '(') {
    VAR_20 = ',';
    continue;
   }
   if (VAR_20)
    VAR_21 += FUNC_2(VAR_21, "%c", VAR_20);
   if (VAR_18->flags & VAR_5)
    VAR_21 += FUNC_2(VAR_21, "%%r%i", VAR_19);
   else if (VAR_18->flags & VAR_4)
    VAR_21 += FUNC_2(VAR_21, "%%f%i", VAR_19);
   else if (VAR_18->flags & VAR_0)
    VAR_21 += FUNC_2(VAR_21, "%%a%i", VAR_19);
   else if (VAR_18->flags & VAR_2)
    VAR_21 += FUNC_2(VAR_21, "%%c%i", VAR_19);
   else if (VAR_18->flags & VAR_9)
    VAR_21 += FUNC_2(VAR_21, "%%v%i", VAR_19);
   else if (VAR_18->flags & VAR_7)
    VAR_21 += FUNC_2(VAR_21, "%lx", (signed int) VAR_19
              + VAR_15);
   else if (VAR_18->flags & VAR_8)
    VAR_21 += FUNC_2(VAR_21, "%i", VAR_19);
   else
    VAR_21 += FUNC_2(VAR_21, "%u", VAR_19);
   if (VAR_18->flags & VAR_3)
    VAR_20 = '(';
   else if (VAR_18->flags & VAR_1) {
    VAR_21 += FUNC_2(VAR_21, ")");
    VAR_20 = ',';
   } else
    VAR_20 = ',';
  }
 } else
  VAR_21 += FUNC_2(VAR_21, "unknown");
 return (int) (VAR_21 - VAR_13);
}

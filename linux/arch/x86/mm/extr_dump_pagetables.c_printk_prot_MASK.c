
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
typedef int pgprotval_t ;
typedef int pgprot_t ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,int,char*,...) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_10, pgprot_t VAR_11, int VAR_12, bool VAR_13)
{
 pgprotval_t VAR_14 = FUNC_0(VAR_11);
 static const char * const VAR_15[] =
  { "cr3", "pgd", "p4d", "pud", "pmd", "pte" };

 if (!(VAR_14 & VAR_5)) {

  FUNC_1(VAR_10, VAR_13, "                              ");
 } else {
  if (VAR_14 & VAR_9)
   FUNC_1(VAR_10, VAR_13, "USR ");
  else
   FUNC_1(VAR_10, VAR_13, "    ");
  if (VAR_14 & VAR_8)
   FUNC_1(VAR_10, VAR_13, "RW ");
  else
   FUNC_1(VAR_10, VAR_13, "ro ");
  if (VAR_14 & VAR_7)
   FUNC_1(VAR_10, VAR_13, "PWT ");
  else
   FUNC_1(VAR_10, VAR_13, "    ");
  if (VAR_14 & VAR_4)
   FUNC_1(VAR_10, VAR_13, "PCD ");
  else
   FUNC_1(VAR_10, VAR_13, "    ");


  if (VAR_12 <= 4 && VAR_14 & VAR_6)
   FUNC_1(VAR_10, VAR_13, "PSE ");
  else
   FUNC_1(VAR_10, VAR_13, "    ");
  if ((VAR_12 == 5 && VAR_14 & VAR_2) ||
      ((VAR_12 == 4 || VAR_12 == 3) && VAR_14 & VAR_3))
   FUNC_1(VAR_10, VAR_13, "PAT ");
  else
   FUNC_1(VAR_10, VAR_13, "    ");
  if (VAR_14 & VAR_0)
   FUNC_1(VAR_10, VAR_13, "GLB ");
  else
   FUNC_1(VAR_10, VAR_13, "    ");
  if (VAR_14 & VAR_1)
   FUNC_1(VAR_10, VAR_13, "NX ");
  else
   FUNC_1(VAR_10, VAR_13, "x  ");
 }
 FUNC_1(VAR_10, VAR_13, "%s\n", VAR_15[VAR_12]);
}

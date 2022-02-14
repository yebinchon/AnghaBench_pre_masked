
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int f_flags; } ;
typedef int pgprot_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

pgprot_t FUNC_3(struct file *VAR_1, unsigned long VAR_2,
         unsigned long VAR_3, pgprot_t VAR_4)
{
 if (!FUNC_0(VAR_2)) {
  return FUNC_1(VAR_4);
 } else if (VAR_1->f_flags & VAR_0) {
  return FUNC_2(VAR_4);
 }

 return VAR_4;
}

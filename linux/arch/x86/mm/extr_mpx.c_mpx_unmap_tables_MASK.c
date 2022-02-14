
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;


 unsigned long FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (struct mm_struct*) ;
 int FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (struct mm_struct*,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct mm_struct *VAR_0,
  unsigned long VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3;
 FUNC_2(VAR_1, VAR_2);

 VAR_3 = VAR_1;
 while (VAR_3 < VAR_2) {
  int VAR_4;
  unsigned long VAR_5 = FUNC_0(VAR_3+1,
             FUNC_1(VAR_0));
  unsigned long VAR_6 = VAR_2;





  if (VAR_6 > VAR_5)
   VAR_6 = VAR_5;
  VAR_4 = FUNC_3(VAR_0, VAR_3, VAR_6);
  if (VAR_4)
   return VAR_4;

  VAR_3 = VAR_5;
 }
 return 0;
}

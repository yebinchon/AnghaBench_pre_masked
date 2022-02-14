
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
struct gmap {struct mm_struct* mm; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct gmap*,unsigned long,unsigned long) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,struct mm_struct*,unsigned long,unsigned int,int*) ;
 int FUNC_3 (struct gmap*) ;

__attribute__((used)) static int FUNC_4(struct gmap *VAR_4, unsigned long VAR_5,
        unsigned long VAR_6, int VAR_7)
{
 struct mm_struct *VAR_8 = VAR_4->mm;
 unsigned int VAR_9;
 bool VAR_10 = 0;

 FUNC_0(FUNC_3(VAR_4));
 VAR_9 = (VAR_7 == VAR_2) ? VAR_1 : 0;
 if (FUNC_2(VAR_3, VAR_8, VAR_6, VAR_9, &VAR_10))
  return -VAR_0;
 if (VAR_10)

  return 0;

 return FUNC_1(VAR_4, VAR_5, VAR_6);
}

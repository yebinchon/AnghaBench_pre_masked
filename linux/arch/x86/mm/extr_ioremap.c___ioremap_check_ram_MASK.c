
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int flags; int start; int end; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long) ;

__attribute__((used)) static unsigned int FUNC_3(struct resource *VAR_4)
{
 unsigned long VAR_5, VAR_6;
 unsigned long VAR_7;

 if ((VAR_4->flags & VAR_0) != VAR_0)
  return 0;

 VAR_5 = (VAR_4->start + VAR_3 - 1) >> VAR_2;
 VAR_6 = (VAR_4->end + 1) >> VAR_2;
 if (VAR_6 > VAR_5) {
  for (VAR_7 = 0; VAR_7 < (VAR_6 - VAR_5); ++VAR_7)
   if (FUNC_2(VAR_5 + VAR_7) &&
       !FUNC_0(FUNC_1(VAR_5 + VAR_7)))
    return VAR_1;
 }

 return 0;
}

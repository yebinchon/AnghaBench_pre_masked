
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parsec {int dummy; } ;
struct mprintc {scalar_t__ doctx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mprintc*,struct parsec*) ;
 int FUNC_1 (struct mprintc*,struct parsec*) ;

__attribute__((used)) static bool
FUNC_2(struct mprintc *VAR_2, struct parsec *VAR_3, bool VAR_4)
{






 if (VAR_4) {
  FUNC_0(VAR_2, VAR_3);


  if (VAR_1) {

   VAR_0 -= 1;
   if (VAR_0 <= 0)
    return (0);
  }
 } else if (VAR_2->doctx)
  FUNC_1(VAR_2, VAR_3);

 return (1);
}

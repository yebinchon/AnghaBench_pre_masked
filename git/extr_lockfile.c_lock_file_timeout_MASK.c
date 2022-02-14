
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lock_file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct lock_file*,char const*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (long) ;
 int FUNC_4 (unsigned int) ;

__attribute__((used)) static int FUNC_5(struct lock_file *VAR_4, const char *VAR_5,
        int VAR_6, long VAR_7)
{
 int VAR_8 = 1;
 int VAR_9 = 1;
 long VAR_10 = 0;
 static int VAR_11 = 0;

 if (VAR_7 == 0)
  return FUNC_1(VAR_4, VAR_5, VAR_6);

 if (!VAR_11) {
  FUNC_4((unsigned int)FUNC_0());
  VAR_11 = 1;
 }

 if (VAR_7 > 0)
  VAR_10 = VAR_7;

 while (1) {
  long VAR_12, VAR_13;
  int VAR_14;

  VAR_14 = FUNC_1(VAR_4, VAR_5, VAR_6);

  if (VAR_14 >= 0)
   return VAR_14;
  else if (VAR_3 != VAR_1)
   return -1;
  else if (VAR_7 > 0 && VAR_10 <= 0)
   return -1;

  VAR_12 = VAR_9 * VAR_2;

  VAR_13 = (750 + FUNC_2() % 500) * VAR_12 / 1000;
  FUNC_3(VAR_13);
  VAR_10 -= VAR_13;


  VAR_9 += 2*VAR_8 + 1;
  if (VAR_9 > VAR_0)
   VAR_9 = VAR_0;
  else
   VAR_8++;
 }
}

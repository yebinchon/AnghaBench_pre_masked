
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 long FUNC_1 (unsigned long,long,int,int (*) (unsigned long,int,void*),void*) ;
 long FUNC_2 (scalar_t__,unsigned long) ;

__attribute__((used)) static long FUNC_3(unsigned long VAR_2, int VAR_3, int VAR_4,
        int (*VAR_5)(unsigned long, int, void *), void *VAR_6)
{
 long VAR_7, VAR_8, VAR_9;

 VAR_7 = FUNC_2(FUNC_0(VAR_2) - VAR_2, (unsigned long) VAR_3);
 VAR_8 = VAR_3;

 VAR_9 = FUNC_1(VAR_2, VAR_7, VAR_4, VAR_5, VAR_6);
 if (VAR_9 != 0) {
  VAR_8 = (VAR_9 < 0 ? VAR_8 : 0);
  goto out;
 }

 VAR_2 += VAR_7;
 VAR_8 -= VAR_7;
 if (VAR_8 == 0)
  goto out;

 while (VAR_2 < ((VAR_2 + VAR_8) & VAR_0)) {
  VAR_9 = FUNC_1(VAR_2, VAR_1, VAR_4, VAR_5, VAR_6);
  if (VAR_9 != 0) {
   VAR_8 = (VAR_9 < 0 ? VAR_8 : 0);
   goto out;
  }

  VAR_2 += VAR_1;
  VAR_8 -= VAR_1;
 }
 if (VAR_8 == 0)
  goto out;

 VAR_9 = FUNC_1(VAR_2, VAR_8, VAR_4, VAR_5, VAR_6);
 if (VAR_9 != 0) {
  VAR_8 = (VAR_9 < 0 ? VAR_8 : 0);
  goto out;
 }

 return 0;
 out:
 return VAR_8;
}

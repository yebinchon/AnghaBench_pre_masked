
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u_long ;
typedef int maxcpu ;


 int VAR_0 ;
 int * VAR_1 ;
 long* FUNC_0 (size_t) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int,char*,size_t) ;
 int FUNC_3 (int,char*) ;

__attribute__((used)) static int
FUNC_4(u_long *VAR_2, int *VAR_3)
{
 long *VAR_4;
 u_long VAR_5;
 size_t VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

 if (VAR_1 != ((void*)0))
  FUNC_3(1, "not implemented");
 VAR_5 = 0;
 VAR_12 = 0;
 VAR_6 = sizeof(VAR_10);
 FUNC_1("kern.smp.maxcpus", &VAR_10, &VAR_6);
 if (VAR_6 != sizeof(VAR_10))
  FUNC_3(1, "sysctl kern.smp.maxcpus");
 VAR_6 = sizeof(long) * VAR_10 * VAR_0;
 VAR_4 = FUNC_0(VAR_6);
 if (VAR_4 == ((void*)0))
  FUNC_2(1, "malloc %zd bytes", VAR_6);
 FUNC_1("kern.cp_times", VAR_4, &VAR_6);
 VAR_11 = (VAR_6 / VAR_0 / sizeof(long)) - 1;
 for (VAR_8 = 0; VAR_8 <= VAR_11; VAR_8++) {
  VAR_7 = 1;
  for (VAR_9 = 0; VAR_7 && VAR_9 < VAR_0; VAR_9++) {
   if (VAR_4[VAR_8 * VAR_0 + VAR_9] != 0)
    VAR_7 = 0;
  }
  if (!VAR_7) {
   VAR_5 |= (1ul << VAR_8);
   VAR_12++;
  }
 }
 if (VAR_2)
  *VAR_2 = VAR_5;
 if (VAR_3)
  *VAR_3 = VAR_11;
 return (VAR_12);
}

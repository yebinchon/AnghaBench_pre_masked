
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int tsc_freq ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int,int) ;
 int FUNC_1 (char*,int*,size_t*,int *,int ) ;
 int* VAR_2 ;

__attribute__((used)) static void
FUNC_2(void)
{
 uint64_t VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
 size_t VAR_8;
 int VAR_9;

 VAR_3 = VAR_1;
 VAR_4 = 0;
 VAR_6 = 0;

 VAR_8 = sizeof(VAR_7);
 FUNC_1("machdep.tsc_freq", &VAR_7, &VAR_8, ((void*)0), 0);

 for (VAR_9 = 1; VAR_9 < VAR_0; VAR_9++) {

  VAR_5 = (VAR_2[VAR_9] - VAR_2[VAR_9-1]) * 1000000 / VAR_7;
  VAR_6 += VAR_5;
  if (VAR_3 > VAR_5)
   VAR_3 = VAR_5;
  if (VAR_4 < VAR_5)
   VAR_4 = VAR_5;
 }

 FUNC_0("timers done: usecs, min %ld, max %ld, mean %ld\n", VAR_3, VAR_4,
     VAR_6/(VAR_0 - 1));
}

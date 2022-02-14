
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int cache_nr; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,double,...) ;
 int FUNC_5 () ;
 int VAR_1 ;
 int FUNC_6 (TYPE_1__*,int) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static uint64_t FUNC_7(int VAR_3)
{
 uint64_t VAR_4, VAR_5, VAR_6;
 uint64_t VAR_7 = 0;
 uint64_t VAR_8;
 int VAR_9;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  VAR_4 = FUNC_3();
  FUNC_5();
  VAR_5 = FUNC_3();
  VAR_9 = FUNC_6(&VAR_2, VAR_3);
  VAR_6 = FUNC_3();

  VAR_7 += (VAR_6 - VAR_5);

  if (VAR_3 && !VAR_9)
   FUNC_0("non-threaded code path used");

  if (VAR_9)
   FUNC_4("%f %f %d multi %d\n",
       ((double)(VAR_5 - VAR_4))/1000000000,
       ((double)(VAR_6 - VAR_5))/1000000000,
       VAR_2.cache_nr,
       VAR_9);
  else
   FUNC_4("%f %f %d single\n",
       ((double)(VAR_5 - VAR_4))/1000000000,
       ((double)(VAR_6 - VAR_5))/1000000000,
       VAR_2.cache_nr);
  FUNC_2(VAR_1);

  FUNC_1();
 }

 VAR_8 = VAR_7 / VAR_0;
 if (VAR_0 > 1)
  FUNC_4("avg %f %s\n",
      (double)VAR_8/1000000000,
      (VAR_3) ? "multi" : "single");

 return VAR_8;
}

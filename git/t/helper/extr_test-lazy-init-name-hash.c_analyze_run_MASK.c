
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {int cache_nr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*,int,double,...) ;
 int FUNC_4 () ;
 int VAR_3 ;
 int FUNC_5 (TYPE_1__*,int) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static void FUNC_6(void)
{
 uint64_t VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9;
 int VAR_10 = 0;
 int VAR_11;
 int VAR_12;

 FUNC_4();
 VAR_9 = VAR_4.cache_nr;
 FUNC_0();

 VAR_12 = VAR_0;
 while (1) {
  uint64_t VAR_13 = 0;
  uint64_t VAR_14 = 0;
  uint64_t VAR_15;
  uint64_t VAR_16;

  if (VAR_12 > VAR_9)
   VAR_12 = VAR_9;

  for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
   FUNC_4();
   VAR_4.cache_nr = VAR_12;
   VAR_5 = FUNC_2();
   FUNC_5(&VAR_4, 0);
   VAR_7 = FUNC_2();
   VAR_13 += (VAR_7 - VAR_5);
   VAR_4.cache_nr = VAR_9;
   FUNC_0();

   FUNC_4();
   VAR_4.cache_nr = VAR_12;
   VAR_6 = FUNC_2();
   VAR_10 = FUNC_5(&VAR_4, 1);
   VAR_8 = FUNC_2();
   VAR_14 += (VAR_8 - VAR_6);
   VAR_4.cache_nr = VAR_9;
   FUNC_0();

   if (!VAR_10)
    FUNC_3("    [size %8d] [single %f]   non-threaded code path used\n",
        VAR_12, ((double)(VAR_7 - VAR_5))/1000000000);
   else
    FUNC_3("    [size %8d] [single %f] %c [multi %f %d]\n",
        VAR_12,
        ((double)(VAR_7 - VAR_5))/1000000000,
        (((VAR_7 - VAR_5) < (VAR_8 - VAR_6)) ? '<' : '>'),
        ((double)(VAR_8 - VAR_6))/1000000000,
        VAR_10);
   FUNC_1(VAR_3);
  }
  if (VAR_2 > 1) {
   VAR_15 = VAR_13 / VAR_2;
   VAR_16 = VAR_14 / VAR_2;
   if (!VAR_10)
    FUNC_3("avg [size %8d] [single %f]\n",
        VAR_12,
        (double)VAR_15/1000000000);
   else
    FUNC_3("avg [size %8d] [single %f] %c [multi %f %d]\n",
        VAR_12,
        (double)VAR_15/1000000000,
        (VAR_15 < VAR_16 ? '<' : '>'),
        (double)VAR_16/1000000000,
        VAR_10);
   FUNC_1(VAR_3);
  }

  if (VAR_12 >= VAR_9)
   return;
  VAR_12 += VAR_1;
 }
}

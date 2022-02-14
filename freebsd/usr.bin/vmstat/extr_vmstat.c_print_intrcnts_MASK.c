
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,char*,char*,unsigned long,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(unsigned long *VAR_1, unsigned long *VAR_2,
    char *VAR_3, unsigned int VAR_4, size_t VAR_5, long long VAR_6)
{
 unsigned long *VAR_7, *VAR_8;
 char *VAR_9;
 uint64_t VAR_10, VAR_11, VAR_12, VAR_13;
 unsigned long VAR_14, VAR_15;
 unsigned int VAR_16;

 VAR_10 = 0;
 VAR_11 = 0;
 VAR_9 = VAR_3;
 FUNC_5("interrupt");
 for (VAR_16 = 0, VAR_7=VAR_1, VAR_8=VAR_2; VAR_16 < VAR_4; VAR_16++) {
  if (VAR_9[0] != '\0' && (*VAR_7 != 0 || VAR_0)) {
   VAR_14 = *VAR_7 - *VAR_8;
   VAR_15 = ((uint64_t)VAR_14 * 1000 + VAR_6 / 2) / VAR_6;
   FUNC_4("interrupt");
   FUNC_3("{d:name/%-*s}{ket:name/%s} "
       "{:total/%20lu} {:rate/%10lu}\n",
       (int)VAR_5, VAR_9, VAR_9, VAR_14, VAR_15);
   FUNC_1("interrupt");
  }
  VAR_9 += FUNC_0(VAR_9) + 1;
  VAR_10 += *VAR_7++;
  VAR_11 += *VAR_8++;
 }
 VAR_12 = VAR_10 - VAR_11;
 VAR_13 = (VAR_12 * 1000 + VAR_6 / 2) / VAR_6;
 FUNC_2("interrupt");
 FUNC_3("{L:/%-*s} {:total-interrupts/%20ju} "
     "{:total-rate/%10ju}\n", (int)VAR_5,
     "Total", (uintmax_t)VAR_12, (uintmax_t)VAR_13);
}

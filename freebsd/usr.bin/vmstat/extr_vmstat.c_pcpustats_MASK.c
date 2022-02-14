
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u_long ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 double* VAR_6 ;
 double* VAR_7 ;
 int FUNC_0 (char*,double,int*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(u_long VAR_8, int VAR_9)
{
 double VAR_10, VAR_11;
 long VAR_12;
 int VAR_13, VAR_14, VAR_15;


 for (VAR_13 = 0; VAR_13 <= VAR_9; VAR_13++) {
  if ((VAR_8 & (1ul << VAR_13)) == 0)
   continue;
  for (VAR_15 = 0; VAR_15 < VAR_0; ++VAR_15) {
   VAR_12 = VAR_6[VAR_13 * VAR_0 + VAR_15];
   VAR_6[VAR_13 * VAR_0 + VAR_15] -= VAR_7[VAR_13 *
       VAR_0 + VAR_15];
   VAR_7[VAR_13 * VAR_0 + VAR_15] = VAR_12;
  }
 }

 VAR_14 = 0;
 FUNC_5("cpu");
 for (VAR_13 = 0; VAR_13 <= VAR_9; VAR_13++) {
  if ((VAR_8 & (1ul << VAR_13)) == 0)
   continue;
  FUNC_4("cpu");
  FUNC_3("{ke:name/%d}", VAR_13);
  VAR_11 = 0;
  for (VAR_15 = 0; VAR_15 < VAR_0; ++VAR_15)
   VAR_11 += VAR_6[VAR_13 * VAR_0 + VAR_15];
  if (VAR_11)
   VAR_10 = 100.0 / VAR_11;
  else
   VAR_10 = 0.0;
  FUNC_0("user", (VAR_6[VAR_13 * VAR_0 + VAR_5] +
      VAR_6[VAR_13 * VAR_0 + VAR_3]) * VAR_10, &VAR_14);
  FUNC_0("system", (VAR_6[VAR_13 * VAR_0 + VAR_4] +
      VAR_6[VAR_13 * VAR_0 + VAR_2]) * VAR_10, &VAR_14);
  FUNC_0("idle", VAR_6[VAR_13 * VAR_0 + VAR_1] * VAR_10,
      &VAR_14);
  FUNC_1("cpu");
 }
 FUNC_2("cpu");
}

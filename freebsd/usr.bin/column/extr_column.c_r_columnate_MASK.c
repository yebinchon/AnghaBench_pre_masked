
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char) ;
 int FUNC_1 (int,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void
FUNC_4(void)
{
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_10 = VAR_4 / VAR_3;
 VAR_11 = VAR_1 / VAR_10;
 if (VAR_1 % VAR_10)
  ++VAR_11;

 for (VAR_12 = 0; VAR_12 < VAR_11; ++VAR_12) {
  VAR_9 = VAR_3;
  for (VAR_5 = VAR_12, VAR_6 = VAR_8 = 0; VAR_8 < VAR_10; ++VAR_8) {
   FUNC_3(L"%ls", VAR_2[VAR_5]);
   VAR_6 += FUNC_2(VAR_2[VAR_5]);
   if ((VAR_5 += VAR_11) >= VAR_1)
    break;
   while ((VAR_7 = FUNC_1(VAR_6 + 1, VAR_0)) <= VAR_9) {
    (void)FUNC_0('\t');
    VAR_6 = VAR_7;
   }
   VAR_9 += VAR_3;
  }
  FUNC_0('\n');
 }
}

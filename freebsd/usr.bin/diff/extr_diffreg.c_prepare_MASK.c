
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line {int value; } ;
typedef int FILE ;


 int FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 struct line** VAR_1 ;
 size_t* VAR_2 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 struct line* FUNC_3 (size_t,int) ;
 struct line* FUNC_4 (struct line*,size_t,int) ;

__attribute__((used)) static void
FUNC_5(int VAR_3, FILE *VAR_4, size_t VAR_5, int VAR_6)
{
 struct line *VAR_7;
 int VAR_8;
 size_t VAR_9, VAR_10;

 FUNC_2(VAR_4);

 VAR_9 = FUNC_0(VAR_5, VAR_0) / 25;
 if (VAR_9 < 100)
  VAR_9 = 100;

 VAR_7 = FUNC_3(VAR_9 + 3, sizeof(*VAR_7));
 for (VAR_10 = 0; (VAR_8 = FUNC_1(VAR_4, VAR_6));) {
  if (VAR_10 == VAR_9) {
   VAR_9 = VAR_9 * 3 / 2;
   VAR_7 = FUNC_4(VAR_7, VAR_9 + 3, sizeof(*VAR_7));
  }
  VAR_7[++VAR_10].value = VAR_8;
 }
 VAR_2[VAR_3] = VAR_10;
 VAR_1[VAR_3] = VAR_7;
}

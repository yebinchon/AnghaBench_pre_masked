
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printer {int max_blocks; } ;


 int VAR_0 ;
 int FUNC_0 (char,char const*) ;
 int FUNC_1 (int) ;
 char const* VAR_1 ;
 char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,char*,char const*) ;
 char* VAR_6 ;
 int FUNC_4 (int,char*,int) ;
 char const* VAR_7 ;
 int FUNC_5 (int,char*,int) ;

__attribute__((used)) static void
FUNC_6(const struct printer *VAR_8, int VAR_9, const char VAR_10[])
{
 register int VAR_11, VAR_12, VAR_13, VAR_14;
 char VAR_15[VAR_0];

 if (VAR_2 == 'p')
  FUNC_0('T', VAR_7 ? VAR_7 : VAR_10);
 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++)
  FUNC_0(VAR_2, &VAR_1[VAR_3-2]);
 FUNC_0('U', &VAR_1[VAR_3-2]);
 FUNC_0('N', VAR_10);
 VAR_11 = FUNC_2(VAR_1);
 VAR_13 = VAR_14 = 0;
 while ((VAR_12 = FUNC_4(VAR_9, VAR_15, VAR_0)) > 0) {
  if (FUNC_5(VAR_11, VAR_15, VAR_12) != VAR_12) {
   FUNC_3("%s: %s: temp file write error\n", VAR_6, VAR_10);
   break;
  }
  VAR_14 += VAR_12;
  if (VAR_14 >= VAR_0) {
   VAR_14 -= VAR_0;
   VAR_13++;
   if (VAR_8->max_blocks > 0 && VAR_13 > VAR_8->max_blocks) {
    FUNC_3("%s: %s: copy file is too large\n",
        VAR_6, VAR_10);
    break;
   }
  }
 }
 (void) FUNC_1(VAR_11);
 if (VAR_14==0 && VAR_13==0)
  FUNC_3("%s: %s: empty input file\n", VAR_6,
      VAR_9 ? VAR_10 : "stdin");
 else
  VAR_4++;
}

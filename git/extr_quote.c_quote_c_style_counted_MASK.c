
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
typedef size_t ssize_t ;
typedef int FILE ;


 int FUNC_0 (char) ;
 int FUNC_1 (char const*,size_t) ;
 size_t FUNC_2 (char const*,size_t) ;
 char* VAR_0 ;

__attribute__((used)) static size_t FUNC_3(const char *VAR_1, ssize_t VAR_2,
        struct strbuf *VAR_3, FILE *VAR_4, int VAR_5)
{
 size_t VAR_6, VAR_7 = 0;
 const char *VAR_8 = VAR_1;

 for (;;) {
  int VAR_9;

  VAR_6 = FUNC_2(VAR_8, VAR_2);
  if (VAR_6 == VAR_2 || (VAR_2 < 0 && !VAR_8[VAR_6]))
   break;

  if (!VAR_5 && VAR_8 == VAR_1)
   do { if (VAR_3) FUNC_0(VAR_3, ('"')); if (VAR_4) FUNC_0(('"'), VAR_4); VAR_7++; } while (0);

  do { if (VAR_3) FUNC_0(VAR_3, (VAR_8), (VAR_6)); if (VAR_4) fwrite((VAR_8), (VAR_6), 1, VAR_4); VAR_7 += (VAR_6); } while (0);
  do { if (VAR_3) FUNC_0(VAR_3, ('\\')); if (VAR_4) FUNC_0(('\\'), VAR_4); VAR_7++; } while (0);
  VAR_8 += VAR_6;
  VAR_9 = (unsigned char)*VAR_8++;
  if (VAR_2 >= 0)
   VAR_2 -= VAR_6 + 1;
  if (VAR_0[VAR_9] >= ' ') {
   do { if (VAR_3) FUNC_0(VAR_3, (VAR_0[VAR_9])); if (VAR_4) FUNC_0((VAR_0[VAR_9]), VAR_4); VAR_7++; } while (0);
  } else {
   do { if (VAR_3) FUNC_0(VAR_3, (((VAR_9 >> 6) & 03) + '0')); if (VAR_4) FUNC_0((((VAR_9 >> 6) & 03) + '0'), VAR_4); VAR_7++; } while (0);
   do { if (VAR_3) FUNC_0(VAR_3, (((VAR_9 >> 3) & 07) + '0')); if (VAR_4) FUNC_0((((VAR_9 >> 3) & 07) + '0'), VAR_4); VAR_7++; } while (0);
   do { if (VAR_3) FUNC_0(VAR_3, (((VAR_9 >> 0) & 07) + '0')); if (VAR_4) FUNC_0((((VAR_9 >> 0) & 07) + '0'), VAR_4); VAR_7++; } while (0);
  }
 }

 do { if (VAR_3) FUNC_0(VAR_3, (VAR_8), (VAR_6)); if (VAR_4) FUNC_0((VAR_8), (VAR_6), 1, VAR_4); VAR_7 += (VAR_6); } while (0);
 if (VAR_8 == VAR_1)
  return 0;

 if (!VAR_5)
  do { if (VAR_3) FUNC_0(VAR_3, ('"')); if (VAR_4) FUNC_0(('"'), VAR_4); VAR_7++; } while (0);
 return VAR_7;
}

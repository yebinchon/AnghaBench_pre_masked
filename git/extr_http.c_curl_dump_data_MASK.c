
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct strbuf*,char) ;
 int FUNC_1 (struct strbuf*,char*,char const*,...) ;
 int FUNC_2 (struct strbuf*) ;
 int FUNC_3 (struct strbuf*) ;
 int VAR_1 ;
 int FUNC_4 (int *,struct strbuf*) ;

__attribute__((used)) static void FUNC_5(const char *VAR_2, unsigned char *VAR_3, size_t VAR_4)
{
 size_t VAR_5;
 struct strbuf VAR_6 = VAR_0;
 unsigned int VAR_7 = 60;

 FUNC_1(&VAR_6, "%s, %10.10ld bytes (0x%8.8lx)\n",
  VAR_2, (long)VAR_4, (long)VAR_4);
 FUNC_4(&VAR_1, &VAR_6);

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5 += VAR_7) {
  size_t VAR_8;

  FUNC_3(&VAR_6);
  FUNC_1(&VAR_6, "%s: ", VAR_2);
  for (VAR_8 = 0; (VAR_8 < VAR_7) && (VAR_5 + VAR_8 < VAR_4); VAR_8++) {
   unsigned char VAR_9 = VAR_3[VAR_5 + VAR_8];

   FUNC_0(&VAR_6,
           (VAR_9 >= 0x20) && (VAR_9 < 0x80)
           ? VAR_9 : '.');
  }
  FUNC_0(&VAR_6, '\n');
  FUNC_4(&VAR_1, &VAR_6);
 }
 FUNC_2(&VAR_6);
}

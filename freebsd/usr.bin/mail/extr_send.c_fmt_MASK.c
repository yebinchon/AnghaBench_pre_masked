
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct name {char const* n_name; struct name* n_flink; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char const*,int *) ;
 int FUNC_2 (char const*) ;

void
FUNC_3(const char *VAR_0, struct name *VAR_1, FILE *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 VAR_3 = VAR_3 ? 1 : 0;
 VAR_4 = FUNC_2(VAR_0);
 if (VAR_4)
  FUNC_1(VAR_0, VAR_2);
 for (; VAR_1 != ((void*)0); VAR_1 = VAR_1->n_flink) {
  if (VAR_1->n_flink == ((void*)0))
   VAR_3 = 0;
  VAR_5 = FUNC_2(VAR_1->n_name);
  VAR_4++;
  if (VAR_4 + VAR_5 + VAR_3 > 72 && VAR_4 > 4) {
   FUNC_0(VAR_2, "\n    ");
   VAR_4 = 4;
  } else
   FUNC_0(VAR_2, " ");
  FUNC_1(VAR_1->n_name, VAR_2);
  if (VAR_3)
   FUNC_0(VAR_2, ",");
  VAR_4 += VAR_5 + VAR_3;
 }
 FUNC_0(VAR_2, "\n");
}

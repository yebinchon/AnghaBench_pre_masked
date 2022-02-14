
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct name {int n_type; struct name* n_flink; int n_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 char* FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (char*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;

char *
FUNC_4(struct name *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;
 char *VAR_8, *VAR_9;
 struct name *VAR_10;

 VAR_7 = VAR_5 & VAR_0;
 if (VAR_4 == ((void*)0))
  return (((void*)0));
 VAR_5 &= ~VAR_0;
 VAR_6 = 0;
 if (VAR_2 && VAR_7)
  FUNC_0(VAR_3, "detract asked to insert commas\n");
 for (VAR_10 = VAR_4; VAR_10 != ((void*)0); VAR_10 = VAR_10->n_flink) {
  if (VAR_5 && (VAR_10->n_type & VAR_1) != VAR_5)
   continue;
  VAR_6 += FUNC_3(VAR_10->n_name) + 1;
  if (VAR_7)
   VAR_6++;
 }
 if (VAR_6 == 0)
  return (((void*)0));
 VAR_6 += 2;
 VAR_9 = FUNC_1(VAR_6);
 VAR_8 = VAR_9;
 for (VAR_10 = VAR_4; VAR_10 != ((void*)0); VAR_10 = VAR_10->n_flink) {
  if (VAR_5 && (VAR_10->n_type & VAR_1) != VAR_5)
   continue;
  VAR_8 += FUNC_2(VAR_8, VAR_10->n_name, FUNC_3(VAR_10->n_name) + 1);
  if (VAR_7 && VAR_10->n_flink != ((void*)0))
   *VAR_8++ = ',';
  *VAR_8++ = ' ';
 }
 *--VAR_8 = '\0';
 if (VAR_7 && *--VAR_8 == ',')
  *VAR_8 = '\0';
 return (VAR_9);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct diff_filespec {char* data; int size; int oid; } ;


 int FUNC_0 (unsigned long*,int) ;
 int FUNC_1 (unsigned long*,long,int) ;
 int FUNC_2 (unsigned long*,long) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (struct repository*,struct diff_filespec*,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct repository *VAR_0,
      struct diff_filespec *VAR_1,
      long *VAR_2,
      unsigned long **VAR_3)
{
 int VAR_4 = 0, VAR_5 = 50;
 long VAR_6 = 0;
 unsigned long *VAR_7 = ((void*)0);
 char *VAR_8 = ((void*)0);

 if (FUNC_4(VAR_0, VAR_1, 0))
  FUNC_3("Cannot read blob %s", FUNC_5(&VAR_1->oid));

 FUNC_0(VAR_7, VAR_5);
 VAR_7[VAR_6++] = 0;
 VAR_8 = VAR_1->data;
 while (VAR_4 < VAR_1->size) {
  if (VAR_8[VAR_4] == '\n' || VAR_4 == VAR_1->size - 1) {
   FUNC_1(VAR_7, (VAR_6 + 1), VAR_5);
   VAR_7[VAR_6++] = VAR_4;
  }
  VAR_4++;
 }


 FUNC_2(VAR_7, VAR_6);
 *VAR_2 = VAR_6-1;
 *VAR_3 = VAR_7;
}

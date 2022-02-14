
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_tempfile {int name; } ;


 int FUNC_0 (struct diff_tempfile*) ;
 int FUNC_1 (char*) ;
 struct diff_tempfile* VAR_0 ;

__attribute__((used)) static struct diff_tempfile *FUNC_2(void)
{
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0); VAR_1++)
  if (!VAR_0[VAR_1].name)
   return VAR_0 + VAR_1;
 FUNC_1("diff is failing to clean up its tempfiles");
}

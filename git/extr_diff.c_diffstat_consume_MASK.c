
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diffstat_t {int nr; struct diffstat_file** files; } ;
struct diffstat_file {int deleted; int added; } ;



__attribute__((used)) static void FUNC_0(void *VAR_0, char *VAR_1, unsigned long VAR_2)
{
 struct diffstat_t *VAR_3 = VAR_0;
 struct diffstat_file *VAR_4 = VAR_3->files[VAR_3->nr - 1];

 if (VAR_1[0] == '+')
  VAR_4->added++;
 else if (VAR_1[0] == '-')
  VAR_4->deleted++;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct last_printed {scalar_t__ str; } ;
struct file_header {scalar_t__ fr; } ;
typedef int lp ;
typedef int FILE ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct file_header*,struct file_header**,size_t) ;
 int FUNC_2 (struct file_header**,size_t) ;
 int FUNC_3 (struct file_header*,int *,struct last_printed*) ;
 int FUNC_4 (struct file_header*) ;
 int FUNC_5 (struct last_printed*,int ,int) ;

__attribute__((used)) static void
FUNC_6(size_t VAR_0, struct file_header **VAR_1, FILE *VAR_2)
{
 struct last_printed VAR_3;
 size_t VAR_4;

 FUNC_5(&VAR_3, 0, sizeof(VAR_3));




 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_1(VAR_1[VAR_4], VAR_1, VAR_4);

 while (VAR_1[0]->fr) {

  FUNC_3(VAR_1[0], VAR_2, &VAR_3);

  FUNC_4(VAR_1[0]);

  FUNC_2(VAR_1, VAR_0);
 }

 if (VAR_3.str)
  FUNC_0(VAR_3.str);
}

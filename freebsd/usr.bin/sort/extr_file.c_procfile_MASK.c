
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sort_list {scalar_t__ memsize; } ;
struct file_reader {int dummy; } ;
struct file_list {int dummy; } ;
struct bwstring {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (struct file_list*,char*,int) ;
 int FUNC_2 (struct file_reader*) ;
 struct file_reader* FUNC_3 (char const*) ;
 struct bwstring* FUNC_4 (struct file_reader*) ;
 char* FUNC_5 () ;
 int FUNC_6 (struct sort_list*,struct bwstring*) ;
 int FUNC_7 (struct sort_list*) ;
 int FUNC_8 (struct sort_list*,char*) ;

int
FUNC_9(const char *VAR_1, struct sort_list *VAR_2, struct file_list *VAR_3)
{
 struct file_reader *VAR_4;

 VAR_4 = FUNC_3(VAR_1);
 if (VAR_4 == ((void*)0))
  FUNC_0(2, ((void*)0));


 for (;;) {
  struct bwstring *VAR_5;

  VAR_5 = FUNC_4(VAR_4);

  if (VAR_5 == ((void*)0))
   break;

  FUNC_6(VAR_2, VAR_5);

  if (VAR_2->memsize >= VAR_0) {
   char *VAR_6;

   VAR_6 = FUNC_5();
   FUNC_8(VAR_2, VAR_6);
   FUNC_1(VAR_3, VAR_6, 0);
   FUNC_7(VAR_2);
  }
 }

 FUNC_2(VAR_4);

 return (0);
}

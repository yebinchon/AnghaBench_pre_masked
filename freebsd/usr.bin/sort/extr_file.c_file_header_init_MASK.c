
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_header {size_t file_pos; int * si; int * fr; } ;
struct bwstring {int dummy; } ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*) ;
 struct bwstring* FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char const*) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *,struct bwstring*) ;
 struct file_header* FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9(struct file_header **VAR_0, const char *VAR_1, size_t VAR_2)
{

 if (VAR_0 && VAR_1) {
  struct bwstring *VAR_3;

  *VAR_0 = FUNC_8(sizeof(struct file_header));
  (*VAR_0)->file_pos = VAR_2;
  (*VAR_0)->fr = FUNC_2(VAR_1);
  if ((*VAR_0)->fr == ((void*)0)) {
   FUNC_5(VAR_1);
   FUNC_0(2, "%s", FUNC_4(8));
  }
  VAR_3 = FUNC_3((*VAR_0)->fr);
  if (VAR_3 == ((void*)0)) {
   FUNC_1((*VAR_0)->fr);
   (*VAR_0)->fr = ((void*)0);
   (*VAR_0)->si = ((void*)0);
  } else {
   (*VAR_0)->si = FUNC_6();
   FUNC_7((*VAR_0)->si, VAR_3);
  }
 }
}

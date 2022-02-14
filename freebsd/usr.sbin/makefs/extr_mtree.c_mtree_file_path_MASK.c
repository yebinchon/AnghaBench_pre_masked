
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sbuf {int dummy; } ;
struct TYPE_3__ {char* name; struct TYPE_3__* parent; } ;
typedef TYPE_1__ fsnode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (struct sbuf*,char*) ;
 int FUNC_2 (struct sbuf*) ;
 int FUNC_3 (struct sbuf*) ;
 int FUNC_4 (struct sbuf*) ;
 struct sbuf* FUNC_5 () ;
 int FUNC_6 (struct sbuf*,char) ;
 scalar_t__ FUNC_7 (char*,char*) ;

__attribute__((used)) static char *
FUNC_8(fsnode *VAR_3)
{
 fsnode *VAR_4;
 struct sbuf *VAR_5;
 char *VAR_6, *VAR_7[VAR_1];
 int VAR_8;

 VAR_8 = 0;
 VAR_7[VAR_8] = VAR_3->name;
 for (VAR_4 = VAR_3->parent; VAR_4 && VAR_8 < VAR_1 - 1;
      VAR_4 = VAR_4->parent) {
  if (FUNC_7(VAR_4->name, ".") == 0)
   break;
  VAR_7[++VAR_8] = VAR_4->name;
 }

 VAR_5 = FUNC_5();
 if (VAR_5 == ((void*)0)) {
  VAR_2 = VAR_0;
  return (((void*)0));
 }
 while (VAR_8 > 0) {
  FUNC_1(VAR_5, VAR_7[VAR_8--]);
  FUNC_6(VAR_5, '/');
 }
 FUNC_1(VAR_5, VAR_7[VAR_8]);
 FUNC_4(VAR_5);
 VAR_6 = FUNC_0(FUNC_2(VAR_5));
 FUNC_3(VAR_5);
 if (VAR_6 == ((void*)0))
  VAR_2 = VAR_0;
 return VAR_6;

}

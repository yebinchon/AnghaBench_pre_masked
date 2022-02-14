
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbuf {int dummy; } ;
struct TYPE_2__ {char* value; char* val; } ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct sbuf*,char const*,int) ;
 int FUNC_2 (struct sbuf*,char const*) ;
 int FUNC_3 (struct sbuf*) ;
 int FUNC_4 (struct sbuf*) ;
 struct sbuf* FUNC_5 () ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char const*,char*) ;

__attribute__((used)) static void
FUNC_9(const char *VAR_2)
{
 struct sbuf *VAR_3;
 const char *VAR_4;
 const char *VAR_5;

 if (VAR_1[VAR_0].value != ((void*)0))
  VAR_5 = VAR_1[VAR_0].value;
 else
  VAR_5 = VAR_1[VAR_0].val;

 if ((VAR_4 = FUNC_8(VAR_5, "${ABI}")) == ((void*)0))
  return;

 VAR_3 = FUNC_5();
 FUNC_1(VAR_3, VAR_5, VAR_4 - VAR_5);
 FUNC_2(VAR_3, VAR_2);
 FUNC_2(VAR_3, VAR_4 + FUNC_7("${ABI}"));
 FUNC_4(VAR_3);

 FUNC_0(VAR_1[VAR_0].value);
 VAR_1[VAR_0].value = FUNC_6(FUNC_3(VAR_3));
}

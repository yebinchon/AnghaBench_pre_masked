
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctx {int dbm; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,char*,int*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int,int,int ,struct ctx*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2(void *VAR_3, const char *VAR_4)
{
 struct ctx *VAR_5 = VAR_3;
 int VAR_6, VAR_7;

 VAR_6 = FUNC_0(VAR_4, "+CSQ: %d,%*d", &VAR_7);
 if (VAR_6 != 1)
  return;
 if (VAR_7 == 99)
  VAR_5->dbm = 0;
 else {
  VAR_5->dbm = (VAR_7 * 2) - 113;
  FUNC_1(&VAR_1, 1, 15, VAR_2, VAR_5);
 }

 VAR_5->flags |= VAR_0;
}

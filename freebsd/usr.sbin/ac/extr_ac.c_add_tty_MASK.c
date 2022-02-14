
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_entry {int ret; int line; scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct tty_entry*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int,char*) ;
 struct tty_entry* FUNC_2 (int) ;
 int VAR_3 ;
 char* FUNC_3 (int ,char) ;
 int FUNC_4 (int ,char const*,int) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_4)
{
 struct tty_entry *VAR_5;
 char *VAR_6;

 VAR_1 |= VAR_0;

 if ((VAR_5 = FUNC_2(sizeof(*VAR_5))) == ((void*)0))
  FUNC_1(1, "malloc failed");
 VAR_5->len = 0;
 VAR_5->ret = 1;
 if (*VAR_4 == '!') {
  VAR_5->ret = 0;
  VAR_4++;
 }
 FUNC_4(VAR_5->line, VAR_4, sizeof(VAR_5->line));

 if ((VAR_6 = FUNC_3(VAR_5->line, '*')) != ((void*)0)) {
  *VAR_6 = '\0';

  VAR_5->len = FUNC_5(VAR_5->line);
 }
 FUNC_0(&VAR_2, VAR_5, VAR_3);
}

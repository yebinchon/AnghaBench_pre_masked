
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct line {char* init_str; int port; int valid; } ;


 int FUNC_0 (char*,int,int,char*,int) ;
 int FUNC_1 (struct line*,char*,int,char**) ;
 int FUNC_2 (char*,char**,int ) ;
 int FUNC_3 (struct tty_struct*) ;
 struct tty_struct* FUNC_4 (int *) ;

int FUNC_5(char *VAR_0, struct line *VAR_1, unsigned int VAR_2, char *VAR_3,
      int VAR_4, char **VAR_5)
{
 struct line *VAR_6;
 char *VAR_7;
 int VAR_8, VAR_9 = 0;

 VAR_8 = FUNC_2(VAR_0, &VAR_7, 0);
 if ((*VAR_7 != '\0') || (VAR_7 == VAR_0)) {
  *VAR_5 = "line_get_config failed to parse device number";
  return 0;
 }

 if ((VAR_8 < 0) || (VAR_8 >= VAR_2)) {
  *VAR_5 = "device number out of range";
  return 0;
 }

 VAR_6 = &VAR_1[VAR_8];

 if (!VAR_6->valid)
  FUNC_0(VAR_3, VAR_4, VAR_9, "none", 1);
 else {
  struct tty_struct *VAR_10 = FUNC_4(&VAR_6->port);
  if (VAR_10 == ((void*)0)) {
   FUNC_0(VAR_3, VAR_4, VAR_9, VAR_6->init_str, 1);
  } else {
   VAR_9 = FUNC_1(VAR_6, VAR_3, VAR_4, VAR_5);
   FUNC_3(VAR_10);
  }
 }

 return VAR_9;
}

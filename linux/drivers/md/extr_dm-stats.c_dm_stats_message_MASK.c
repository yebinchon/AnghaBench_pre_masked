
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int dummy; } ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct mapped_device*,unsigned int,char**) ;
 int FUNC_2 (struct mapped_device*,unsigned int,char**,char*,unsigned int) ;
 int FUNC_3 (struct mapped_device*,unsigned int,char**) ;
 int FUNC_4 (struct mapped_device*,unsigned int,char**,char*,unsigned int) ;
 int FUNC_5 (struct mapped_device*,unsigned int,char**,int,char*,unsigned int) ;
 int FUNC_6 (struct mapped_device*,unsigned int,char**) ;
 int FUNC_7 (char*,char*) ;

int FUNC_8(struct mapped_device *VAR_1, unsigned VAR_2, char **VAR_3,
       char *VAR_4, unsigned VAR_5)
{
 int VAR_6;


 if (!FUNC_7(VAR_3[0], "@stats_create"))
  VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 else if (!FUNC_7(VAR_3[0], "@stats_delete"))
  VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_3);
 else if (!FUNC_7(VAR_3[0], "@stats_clear"))
  VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3);
 else if (!FUNC_7(VAR_3[0], "@stats_list"))
  VAR_6 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 else if (!FUNC_7(VAR_3[0], "@stats_print"))
  VAR_6 = FUNC_5(VAR_1, VAR_2, VAR_3, 0, VAR_4, VAR_5);
 else if (!FUNC_7(VAR_3[0], "@stats_print_clear"))
  VAR_6 = FUNC_5(VAR_1, VAR_2, VAR_3, 1, VAR_4, VAR_5);
 else if (!FUNC_7(VAR_3[0], "@stats_set_aux"))
  VAR_6 = FUNC_6(VAR_1, VAR_2, VAR_3);
 else
  return 2;

 if (VAR_6 == -VAR_0)
  FUNC_0("Invalid parameters for message %s", VAR_3[0]);

 return VAR_6;
}

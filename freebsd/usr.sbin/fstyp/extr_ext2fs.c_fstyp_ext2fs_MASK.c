
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ s_magic; scalar_t__ s_rev_level; char* s_volume_name; } ;
typedef TYPE_1__ e2sb_t ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,int ,int) ;
 int FUNC_2 (char*,char*,size_t) ;

int
FUNC_3(FILE *VAR_3, char *VAR_4, size_t VAR_5)
{
 e2sb_t *VAR_6;
 char *VAR_7;

 VAR_6 = (e2sb_t *)FUNC_1(VAR_3, VAR_0, 512);
 if (VAR_6 == ((void*)0))
  return (1);


 if (VAR_6->s_magic == VAR_2 &&
     VAR_6->s_rev_level == VAR_1) {


 } else {
  FUNC_0(VAR_6);
  return (1);
 }

 VAR_7 = VAR_6->s_volume_name;

 VAR_7[sizeof(VAR_6->s_volume_name) - 1] = '\0';

 if (VAR_7[0] == '/')
  VAR_7 += 1;

 FUNC_2(VAR_4, VAR_7, VAR_5);
 FUNC_0(VAR_6);

 return (0);
}

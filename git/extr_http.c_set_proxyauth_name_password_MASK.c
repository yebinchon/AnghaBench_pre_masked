
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct TYPE_2__ {int password; int username; } ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct strbuf VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_1 (struct strbuf*,char) ;
 int FUNC_2 (struct strbuf*,int ,int ) ;
 int FUNC_3 (struct strbuf*,int *) ;

__attribute__((used)) static void FUNC_4(CURL *VAR_7)
{






  struct strbuf VAR_8 = VAR_3;

  FUNC_2(&VAR_8, VAR_6.username,
     VAR_5);
  FUNC_1(&VAR_8, ':');
  FUNC_2(&VAR_8, VAR_6.password,
     VAR_5);
  VAR_4 = FUNC_3(&VAR_8, ((void*)0));
  FUNC_0(VAR_7, VAR_2, VAR_4);

}

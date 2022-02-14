
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inpcblbgrouphead {int dummy; } ;
struct inpcblbgroup {int il_inpcnt; int il_inpsiz; int * il_inp; int il_dependladdr; int il_lport; int il_vflag; } ;


 int FUNC_0 (int,char*) ;
 struct inpcblbgroup* FUNC_1 (struct inpcblbgrouphead*,int ,int ,int *,int) ;
 int FUNC_2 (struct inpcblbgroup*) ;

__attribute__((used)) static struct inpcblbgroup *
FUNC_3(struct inpcblbgrouphead *VAR_0,
    struct inpcblbgroup *VAR_1, int VAR_2)
{
 struct inpcblbgroup *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_0, VAR_1->il_vflag,
     VAR_1->il_lport, &VAR_1->il_dependladdr, VAR_2);
 if (VAR_3 == ((void*)0))
  return (((void*)0));

 FUNC_0(VAR_1->il_inpcnt < VAR_3->il_inpsiz,
     ("invalid new local group size %d and old local group count %d",
      VAR_3->il_inpsiz, VAR_1->il_inpcnt));

 for (VAR_4 = 0; VAR_4 < VAR_1->il_inpcnt; ++VAR_4)
  VAR_3->il_inp[VAR_4] = VAR_1->il_inp[VAR_4];
 VAR_3->il_inpcnt = VAR_1->il_inpcnt;
 FUNC_2(VAR_1);
 return (VAR_3);
}

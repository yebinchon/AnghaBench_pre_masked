
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_pkt_progress ;
struct TYPE_5__ {size_t len; char* error; int type; } ;
typedef TYPE_1__ git_pkt_err ;
typedef int git_pkt ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (size_t*,size_t,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (size_t) ;
 scalar_t__ FUNC_4 (char const*,size_t,char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*,char const*,size_t) ;

__attribute__((used)) static int FUNC_7(git_pkt **VAR_2, const char *VAR_3, size_t VAR_4)
{
 git_pkt_err *VAR_5 = ((void*)0);
 size_t VAR_6;


 if (FUNC_4(VAR_3, VAR_4, "ERR "))
  goto out_err;
 VAR_3 += 4;
 VAR_4 -= 4;

 FUNC_1(&VAR_6, sizeof(git_pkt_progress), VAR_4);
 FUNC_1(&VAR_6, VAR_6, 1);
 VAR_5 = FUNC_3(VAR_6);
 FUNC_0(VAR_5);
 VAR_5->type = VAR_1;
 VAR_5->len = VAR_4;

 FUNC_6(VAR_5->error, VAR_3, VAR_4);
 VAR_5->error[VAR_4] = '\0';

 *VAR_2 = (git_pkt *) VAR_5;

 return 0;

out_err:
 FUNC_5(VAR_0, "error parsing ERR pkt-line");
 FUNC_2(VAR_5);
 return -1;
}

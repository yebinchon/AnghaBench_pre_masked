
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t len; int data; int type; } ;
typedef TYPE_1__ git_pkt_progress ;
typedef int git_pkt ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (size_t*,int,size_t) ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 (size_t) ;
 int FUNC_3 (int ,char const*,size_t) ;

__attribute__((used)) static int FUNC_4(git_pkt **VAR_1, const char *VAR_2, size_t VAR_3)
{
 git_pkt_progress *VAR_4;
 size_t VAR_5;

 VAR_2++;
 VAR_3--;

 FUNC_1(&VAR_5, sizeof(git_pkt_progress), VAR_3);
 VAR_4 = FUNC_2(VAR_5);
 FUNC_0(VAR_4);

 VAR_4->type = VAR_0;
 VAR_4->len = VAR_3;
 FUNC_3(VAR_4->data, VAR_2, VAR_3);

 *VAR_1 = (git_pkt *) VAR_4;

 return 0;
}

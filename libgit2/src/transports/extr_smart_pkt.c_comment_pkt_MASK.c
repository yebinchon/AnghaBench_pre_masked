
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* comment; int type; } ;
typedef TYPE_1__ git_pkt_comment ;
typedef int git_pkt ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (size_t*,size_t,int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 (size_t) ;
 int FUNC_3 (char*,char const*,size_t) ;

__attribute__((used)) static int FUNC_4(git_pkt **VAR_1, const char *VAR_2, size_t VAR_3)
{
 git_pkt_comment *VAR_4;
 size_t VAR_5;

 FUNC_1(&VAR_5, sizeof(git_pkt_comment), VAR_3);
 FUNC_1(&VAR_5, VAR_5, 1);
 VAR_4 = FUNC_2(VAR_5);
 FUNC_0(VAR_4);

 VAR_4->type = VAR_0;
 FUNC_3(VAR_4->comment, VAR_2, VAR_3);
 VAR_4->comment[VAR_3] = '\0';

 *VAR_1 = (git_pkt *) VAR_4;

 return 0;
}

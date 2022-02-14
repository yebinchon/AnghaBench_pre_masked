
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int unpack_ok; int type; } ;
typedef TYPE_1__ git_pkt_unpack ;
typedef int git_pkt ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (char const*,size_t,char*) ;

__attribute__((used)) static int FUNC_3(git_pkt **VAR_1, const char *VAR_2, size_t VAR_3)
{
 git_pkt_unpack *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4));
 FUNC_0(VAR_4);
 VAR_4->type = VAR_0;

 if (!FUNC_2(VAR_2, VAR_3, "unpack ok"))
  VAR_4->unpack_ok = 1;
 else
  VAR_4->unpack_ok = 0;

 *VAR_1 = (git_pkt *)VAR_4;
 return 0;
}

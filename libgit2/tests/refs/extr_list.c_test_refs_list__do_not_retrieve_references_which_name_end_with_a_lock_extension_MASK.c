
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ count; } ;
typedef TYPE_1__ git_strarray ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(void)
{
 git_strarray VAR_1;


 FUNC_1(
  "./testrepo/.git/refs/heads/hanwen.lock",
  "144344043ba4d4a405da03de3844aa829ae8be0e\n");

 FUNC_2(FUNC_3(&VAR_1, VAR_0));
 FUNC_0((int)VAR_1.count, 18);

 FUNC_4(&VAR_1);
}

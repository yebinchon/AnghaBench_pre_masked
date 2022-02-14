
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ mode; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char const*,int,char*,int *,int) ;
 int FUNC_2 (char const*,int,char*,int,char*,unsigned int,unsigned int) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (size_t*,int *,char const*) ;
 TYPE_1__* FUNC_5 (int *,size_t) ;

__attribute__((used)) static void FUNC_6(
 git_index *VAR_0, const char *VAR_1, unsigned int VAR_2,
 const char *VAR_3, int VAR_4)
{
 size_t VAR_5;
 const git_index_entry *VAR_6;

 FUNC_0(FUNC_3(VAR_0, VAR_1));

 FUNC_1(!FUNC_4(&VAR_5, VAR_0, VAR_1),
  VAR_3, VAR_4, "Cannot find index entry", ((void*)0), 1);

 VAR_6 = FUNC_5(VAR_0, VAR_5);

 FUNC_2(VAR_3, VAR_4, "Expected mode does not match index",
  1, "%07o", (unsigned int)VAR_6->mode, (unsigned int)VAR_2);
}

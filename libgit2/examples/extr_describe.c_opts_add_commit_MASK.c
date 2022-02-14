
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int commit_count; char const** commits; } ;
typedef TYPE_1__ describe_options ;


 int FUNC_0 (int ) ;
 char const** FUNC_1 (void*,size_t) ;

__attribute__((used)) static void FUNC_2(describe_options *VAR_0, const char *VAR_1)
{
 size_t VAR_2;

 FUNC_0(VAR_0 != ((void*)0));

 VAR_2 = ++VAR_0->commit_count * sizeof(VAR_0->commits[0]);
 VAR_0->commits = FUNC_1((void *) VAR_0->commits, VAR_2);
 VAR_0->commits[VAR_0->commit_count - 1] = VAR_1;
}

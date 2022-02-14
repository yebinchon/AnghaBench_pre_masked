
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int format_options; int describe_options; scalar_t__ commit_count; int * commits; } ;
typedef TYPE_1__ describe_options ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_3(describe_options *VAR_2)
{
 FUNC_2(VAR_2, 0, sizeof(*VAR_2));

 VAR_2->commits = ((void*)0);
 VAR_2->commit_count = 0;
 FUNC_1(&VAR_2->describe_options, VAR_1);
 FUNC_0(&VAR_2->format_options, VAR_0);
}

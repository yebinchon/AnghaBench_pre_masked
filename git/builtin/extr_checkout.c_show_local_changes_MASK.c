
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int output_format; int flags; } ;
struct rev_info {TYPE_1__ diffopt; } ;
struct object {int dummy; } ;
struct diff_options {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct rev_info*,struct object*,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,struct rev_info*,int *) ;
 int FUNC_3 (struct rev_info*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct object *VAR_2,
          const struct diff_options *VAR_3)
{
 struct rev_info VAR_4;

 FUNC_2(VAR_1, &VAR_4, ((void*)0));
 VAR_4.diffopt.flags = VAR_3->flags;
 VAR_4.diffopt.output_format |= VAR_0;
 FUNC_1(&VAR_4.diffopt);
 FUNC_0(&VAR_4, VAR_2, ((void*)0));
 FUNC_3(&VAR_4, 0);
}

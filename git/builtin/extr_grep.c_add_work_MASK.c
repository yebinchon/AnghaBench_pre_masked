
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct grep_source {int dummy; } ;
struct grep_opt {scalar_t__ binary; TYPE_1__* repo; } ;
struct TYPE_5__ {int out; scalar_t__ done; struct grep_source source; } ;
struct TYPE_4__ {int index; } ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (struct grep_source*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_7(struct grep_opt *VAR_7, const struct grep_source *VAR_8)
{
 FUNC_1();

 while ((VAR_6+1) % FUNC_0(VAR_4) == VAR_5) {
  FUNC_5(&VAR_2, &VAR_3);
 }

 VAR_4[VAR_6].source = *VAR_8;
 if (VAR_7->binary != VAR_0)
  FUNC_2(&VAR_4[VAR_6].source,
     VAR_7->repo->index);
 VAR_4[VAR_6].done = 0;
 FUNC_6(&VAR_4[VAR_6].out);
 VAR_6 = (VAR_6 + 1) % FUNC_0(VAR_4);

 FUNC_4(&VAR_1);
 FUNC_3();
}

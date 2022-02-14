
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct index_state {int dummy; } ;
struct grep_source {int size; int buf; TYPE_1__* driver; } ;
struct TYPE_2__ {int binary; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct grep_source*) ;
 int FUNC_2 (struct grep_source*,struct index_state*) ;

__attribute__((used)) static int FUNC_3(struct grep_source *VAR_0,
     struct index_state *VAR_1)
{
 FUNC_2(VAR_0, VAR_1);
 if (VAR_0->driver->binary != -1)
  return VAR_0->driver->binary;

 if (!FUNC_1(VAR_0))
  return FUNC_0(VAR_0->buf, VAR_0->size);

 return 0;
}

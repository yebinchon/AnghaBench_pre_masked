
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct diff_queue_struct {int nr; TYPE_2__** queue; } ;
struct diff_options {int dummy; } ;
struct TYPE_4__ {TYPE_1__* one; } ;
struct TYPE_3__ {int path; } ;


 int FUNC_0 (void*,char) ;
 int FUNC_1 (void*,int ) ;

__attribute__((used)) static void FUNC_2(struct diff_queue_struct *VAR_0,
       struct diff_options *VAR_1,
       void *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->nr; VAR_3++) {
  FUNC_1(VAR_2, VAR_0->queue[VAR_3]->one->path);


  FUNC_0(VAR_2, '\0');
 }
}

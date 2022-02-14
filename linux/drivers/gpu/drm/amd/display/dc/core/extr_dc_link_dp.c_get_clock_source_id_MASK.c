
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dc_link {TYPE_2__* dc; } ;
struct clock_source {int id; } ;
typedef enum clock_source_id { ____Placeholder_clock_source_id } clock_source_id ;
struct TYPE_4__ {TYPE_1__* res_pool; } ;
struct TYPE_3__ {struct clock_source* dp_clock_source; } ;


 int FUNC_0 (struct clock_source*) ;
 int VAR_0 ;

__attribute__((used)) static enum clock_source_id FUNC_1(struct dc_link *VAR_1)
{
 enum clock_source_id VAR_2 = VAR_0;
 struct clock_source *VAR_3 = VAR_1->dc->res_pool->dp_clock_source;

 if (VAR_3 != ((void*)0)) {
  VAR_2 = VAR_3->id;
 } else {




  FUNC_0(VAR_3);
 }

 return VAR_2;
}

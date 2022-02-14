
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isert_device {int comps_used; struct isert_comp* comps; } ;
struct isert_conn {struct isert_device* device; } ;
struct isert_comp {scalar_t__ active_qps; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct isert_conn*,struct isert_comp*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct isert_comp *
FUNC_3(struct isert_conn *VAR_1)
{
 struct isert_device *VAR_2 = VAR_1->device;
 struct isert_comp *VAR_3;
 int VAR_4, VAR_5 = 0;

 FUNC_1(&VAR_0);
 for (VAR_4 = 0; VAR_4 < VAR_2->comps_used; VAR_4++)
  if (VAR_2->comps[VAR_4].active_qps <
      VAR_2->comps[VAR_5].active_qps)
   VAR_5 = VAR_4;
 VAR_3 = &VAR_2->comps[VAR_5];
 VAR_3->active_qps++;
 FUNC_2(&VAR_0);

 FUNC_0("conn %p, using comp %p min_index: %d\n",
     VAR_1, VAR_3, VAR_5);

 return VAR_3;
}

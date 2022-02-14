
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_device {unsigned int phys_port_cnt; } ;
struct cma_device {int dummy; } ;
struct cma_dev_port_group {unsigned int port_num; int group; struct cma_dev_group* cma_dev_group; } ;
struct cma_dev_group {struct cma_dev_port_group* ports; int ports_group; } ;
typedef int port_str ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ib_device* FUNC_0 (struct cma_device*) ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (int *,int *) ;
 struct cma_dev_port_group* FUNC_3 (unsigned int,int,int ) ;
 int FUNC_4 (struct cma_dev_port_group*) ;
 int FUNC_5 (char*,int,char*,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct cma_dev_group *VAR_4,
     struct cma_device *VAR_5)
{
 struct ib_device *VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;
 struct cma_dev_port_group *VAR_9;
 int VAR_10;

 VAR_6 = FUNC_0(VAR_5);

 if (!VAR_6)
  return -VAR_0;

 VAR_8 = VAR_6->phys_port_cnt;
 VAR_9 = FUNC_3(VAR_8, sizeof(*VAR_4->ports),
   VAR_2);

 if (!VAR_9) {
  VAR_10 = -VAR_1;
  goto free;
 }

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  char VAR_11[10];

  VAR_9[VAR_7].port_num = VAR_7 + 1;
  FUNC_5(VAR_11, sizeof(VAR_11), "%u", VAR_7 + 1);
  VAR_9[VAR_7].cma_dev_group = VAR_4;
  FUNC_1(&VAR_9[VAR_7].group,
         VAR_11,
         &VAR_3);
  FUNC_2(&VAR_9[VAR_7].group,
    &VAR_4->ports_group);

 }
 VAR_4->ports = VAR_9;

 return 0;
free:
 FUNC_4(VAR_9);
 VAR_4->ports = ((void*)0);
 return VAR_10;
}

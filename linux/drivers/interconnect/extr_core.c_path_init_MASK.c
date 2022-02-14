
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct icc_path {int num_nodes; TYPE_2__* reqs; } ;
struct icc_node {struct icc_node* reverse; int req_list; TYPE_1__* provider; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {struct device* dev; struct icc_node* node; int req_node; } ;
struct TYPE_3__ {int users; } ;


 int VAR_0 ;
 struct icc_path* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 struct icc_path* FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct icc_path*,int ,int) ;

__attribute__((used)) static struct icc_path *FUNC_4(struct device *VAR_3, struct icc_node *VAR_4,
      ssize_t VAR_5)
{
 struct icc_node *VAR_6 = VAR_4;
 struct icc_path *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(FUNC_3(VAR_7, VAR_2, VAR_5), VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_7->num_nodes = VAR_5;

 for (VAR_8 = VAR_5 - 1; VAR_8 >= 0; VAR_8--) {
  VAR_6->provider->users++;
  FUNC_1(&VAR_7->reqs[VAR_8].req_node, &VAR_6->req_list);
  VAR_7->reqs[VAR_8].node = VAR_6;
  VAR_7->reqs[VAR_8].dev = VAR_3;

  VAR_6 = VAR_6->reverse;
 }

 return VAR_7;
}

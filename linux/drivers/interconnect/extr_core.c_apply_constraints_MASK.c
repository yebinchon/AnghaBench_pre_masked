
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct icc_path {int num_nodes; TYPE_2__* reqs; } ;
struct icc_node {TYPE_1__* provider; } ;
struct TYPE_4__ {struct icc_node* node; } ;
struct TYPE_3__ {int (* set ) (struct icc_node*,struct icc_node*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct icc_node*,struct icc_node*) ;

__attribute__((used)) static int FUNC_1(struct icc_path *VAR_1)
{
 struct icc_node *VAR_2, *VAR_3 = ((void*)0);
 int VAR_4 = -VAR_0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1->num_nodes; VAR_5++) {
  VAR_2 = VAR_1->reqs[VAR_5].node;





  if (!VAR_3 || VAR_2->provider != VAR_3->provider) {
   VAR_3 = VAR_2;
   continue;
  }


  VAR_4 = VAR_2->provider->set(VAR_3, VAR_2);
  if (VAR_4)
   goto out;

  VAR_3 = VAR_2;
 }
out:
 return VAR_4;
}

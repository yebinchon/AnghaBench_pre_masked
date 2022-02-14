
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icc_node {int num_links; struct icc_node** links; int provider; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct icc_node*) ;
 int FUNC_1 (struct icc_node*) ;
 int VAR_3 ;
 struct icc_node* FUNC_2 (int const) ;
 struct icc_node** FUNC_3 (struct icc_node**,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct icc_node* FUNC_6 (int const) ;

int FUNC_7(struct icc_node *VAR_4, const int VAR_5)
{
 struct icc_node *VAR_6;
 struct icc_node **VAR_7;
 int VAR_8 = 0;

 if (!VAR_4->provider)
  return -VAR_0;

 FUNC_4(&VAR_3);

 VAR_6 = FUNC_6(VAR_5);
 if (!VAR_6) {
  VAR_6 = FUNC_2(VAR_5);

  if (FUNC_0(VAR_6)) {
   VAR_8 = FUNC_1(VAR_6);
   goto out;
  }
 }

 VAR_7 = FUNC_3(VAR_4->links,
         (VAR_4->num_links + 1) * sizeof(*VAR_4->links),
         VAR_2);
 if (!VAR_7) {
  VAR_8 = -VAR_1;
  goto out;
 }

 VAR_4->links = VAR_7;
 VAR_4->links[VAR_4->num_links++] = VAR_6;

out:
 FUNC_5(&VAR_3);

 return VAR_8;
}

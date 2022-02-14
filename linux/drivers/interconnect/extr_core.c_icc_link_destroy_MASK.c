
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icc_node {size_t num_links; struct icc_node** links; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct icc_node*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;
 struct icc_node** FUNC_2 (struct icc_node**,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct icc_node *VAR_4, struct icc_node *VAR_5)
{
 struct icc_node **VAR_6;
 size_t VAR_7;
 int VAR_8 = 0;

 if (FUNC_0(VAR_4))
  return -VAR_0;

 if (FUNC_0(VAR_5))
  return -VAR_0;

 FUNC_3(&VAR_3);

 for (VAR_7 = 0; VAR_7 < VAR_4->num_links; VAR_7++)
  if (VAR_4->links[VAR_7] == VAR_5)
   break;

 if (FUNC_1(VAR_7 == VAR_4->num_links)) {
  VAR_8 = -VAR_1;
  goto out;
 }

 VAR_4->links[VAR_7] = VAR_4->links[--VAR_4->num_links];

 VAR_6 = FUNC_2(VAR_4->links, VAR_4->num_links * sizeof(*VAR_4->links),
         VAR_2);
 if (VAR_6)
  VAR_4->links = VAR_6;

out:
 FUNC_4(&VAR_3);

 return VAR_8;
}

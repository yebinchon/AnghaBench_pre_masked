
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int parent; } ;
struct fwnode_handle {int dummy; } ;
typedef int DEFINE_MUTEX ;


 struct fwnode_handle* FUNC_0 (char*) ;
 struct irq_domain* FUNC_1 (struct fwnode_handle*,int *,int *) ;
 int FUNC_2 (struct fwnode_handle*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct irq_domain *FUNC_5(void)
{
 static struct irq_domain *VAR_2;
 static DEFINE_MUTEX(VAR_3);
 struct fwnode_handle *VAR_4;

 FUNC_3(&VAR_3);
 if (VAR_2)
  goto out;

 VAR_4 = FUNC_0("UV-CORE");
 if (!VAR_4)
  goto out;

 VAR_2 = FUNC_1(VAR_4, &VAR_0, ((void*)0));
 FUNC_2(VAR_4);
 if (VAR_2)
  VAR_2->parent = VAR_1;
out:
 FUNC_4(&VAR_3);

 return VAR_2;
}

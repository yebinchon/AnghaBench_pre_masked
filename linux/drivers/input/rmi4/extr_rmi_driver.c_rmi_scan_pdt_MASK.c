
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rmi_device*,int,int*,void*,int (*) (struct rmi_device*,void*,struct pdt_entry const*)) ;

int FUNC_1(struct rmi_device *VAR_3, void *VAR_4,
   int (*VAR_5)(struct rmi_device *VAR_6,
   void *VAR_7, const struct pdt_entry *VAR_8))
{
 int VAR_9;
 int VAR_10 = 0;
 int VAR_11 = VAR_2;

 for (VAR_9 = 0; VAR_9 <= VAR_0; VAR_9++) {
  VAR_11 = FUNC_0(VAR_3, VAR_9, &VAR_10,
        VAR_4, VAR_5);
  if (VAR_11 != VAR_1)
   break;
 }

 return VAR_11 < 0 ? VAR_11 : 0;
}

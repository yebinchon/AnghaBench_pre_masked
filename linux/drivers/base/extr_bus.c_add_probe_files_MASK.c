
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bus_type {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bus_type*,int *) ;
 int FUNC_1 (struct bus_type*,int *) ;

__attribute__((used)) static int FUNC_2(struct bus_type *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2, &VAR_1);
 if (VAR_3)
  goto out;

 VAR_3 = FUNC_0(VAR_2, &VAR_0);
 if (VAR_3)
  FUNC_1(VAR_2, &VAR_1);
out:
 return VAR_3;
}

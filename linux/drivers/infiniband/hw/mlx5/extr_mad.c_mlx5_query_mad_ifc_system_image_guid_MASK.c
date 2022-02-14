
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_smp {scalar_t__ data; } ;
struct ib_device {int dummy; } ;
typedef int __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ib_smp*) ;
 struct ib_smp* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,scalar_t__,int) ;
 int FUNC_3 (struct ib_device*,struct ib_smp*) ;

int FUNC_4(struct ib_device *VAR_2,
      __be64 *VAR_3)
{
 struct ib_smp *VAR_4 = ((void*)0);
 int VAR_5 = -VAR_0;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_3(VAR_2, VAR_4);
 if (VAR_5)
  goto out;

 FUNC_2(VAR_3, VAR_4->data + 4, 8);

out:
 FUNC_0(VAR_4);

 return VAR_5;
}

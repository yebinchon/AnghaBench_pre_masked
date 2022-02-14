
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long priv; int data_read; int data_present; int init; int name; } ;
struct talitos_private {int rng_registered; TYPE_1__ rng; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*) ;
 struct talitos_private* FUNC_1 (struct device*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct device *VAR_3)
{
 struct talitos_private *VAR_4 = FUNC_1(VAR_3);
 int VAR_5;

 VAR_4->rng.name = FUNC_0(VAR_3),
 VAR_4->rng.init = VAR_2,
 VAR_4->rng.data_present = VAR_0,
 VAR_4->rng.data_read = VAR_1,
 VAR_4->rng.priv = (unsigned long)VAR_3;

 VAR_5 = FUNC_2(&VAR_4->rng);
 if (!VAR_5)
  VAR_4->rng_registered = 1;

 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct as3935_state {int lock; scalar_t__ noise_tripped; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device*) ;
 struct as3935_state* FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
     struct device_attribute *VAR_3,
     char *VAR_4)
{
 struct as3935_state *VAR_5 = FUNC_1(FUNC_0(VAR_2));
 int VAR_6;

 FUNC_2(&VAR_5->lock);
 VAR_6 = FUNC_4(VAR_4, "%d\n", !FUNC_5(VAR_1, VAR_5->noise_tripped + VAR_0));
 FUNC_3(&VAR_5->lock);

 return VAR_6;
}

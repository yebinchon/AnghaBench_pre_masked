
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vidi_context {int connected; int lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct vidi_context* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2)
{
 struct vidi_context *VAR_3 = FUNC_0(VAR_0);
 int VAR_4;

 FUNC_1(&VAR_3->lock);

 VAR_4 = FUNC_3(VAR_2, "%d\n", VAR_3->connected);

 FUNC_2(&VAR_3->lock);

 return VAR_4;
}

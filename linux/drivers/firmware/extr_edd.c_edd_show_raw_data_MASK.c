
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int key; int length; } ;
struct edd_info {TYPE_1__ params; } ;
struct edd_device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct edd_info* FUNC_0 (struct edd_device*) ;
 int FUNC_1 (char*,TYPE_1__*,int) ;

__attribute__((used)) static ssize_t
FUNC_2(struct edd_device *VAR_1, char *VAR_2)
{
 struct edd_info *VAR_3;
 ssize_t VAR_4 = sizeof (VAR_3->params);
 if (!VAR_1)
  return -VAR_0;
 VAR_3 = FUNC_0(VAR_1);
 if (!VAR_3 || !VAR_2)
  return -VAR_0;

 if (!(VAR_3->params.key == 0xBEDD || VAR_3->params.key == 0xDDBE))
  VAR_4 = VAR_3->params.length;


 if (VAR_4 > (sizeof(VAR_3->params)))
  VAR_4 = sizeof(VAR_3->params);

 FUNC_1(VAR_2, &VAR_3->params, VAR_4);
 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ source_subtype; } ;
struct coresight_device {scalar_t__ type; int dev; TYPE_1__ subtype; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,char const*) ;

__attribute__((used)) static int FUNC_1(struct coresight_device *VAR_4,
         const char *VAR_5)
{
 u32 VAR_6, VAR_7;

 VAR_6 = VAR_4->type;
 VAR_7 = VAR_4->subtype.source_subtype;

 if (VAR_6 != VAR_2) {
  FUNC_0(&VAR_4->dev, "wrong device type in %s\n", VAR_5);
  return -VAR_3;
 }

 if (VAR_7 != VAR_0 &&
     VAR_7 != VAR_1) {
  FUNC_0(&VAR_4->dev, "wrong device subtype in %s\n", VAR_5);
  return -VAR_3;
 }

 return 0;
}

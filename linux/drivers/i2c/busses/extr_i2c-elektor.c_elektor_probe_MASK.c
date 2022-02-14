
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_4__ {struct device* parent; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_7 () ;
 TYPE_2__ VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_7, unsigned int VAR_8)
{
 FUNC_4(&VAR_6);
 if (FUNC_7())
  return -VAR_0;
 VAR_5.dev.parent = VAR_7;
 if (FUNC_3(&VAR_5) < 0)
  goto fail;

 FUNC_0(VAR_7, "found device at %#x\n", VAR_1);

 return 0;

 fail:
 if (VAR_3 > 0) {
  FUNC_1(VAR_3);
  FUNC_2(VAR_3, ((void*)0));
 }

 if (!VAR_4) {
  FUNC_5(VAR_2);
  FUNC_9(VAR_1, 2);
 } else {
  FUNC_6(VAR_2);
  FUNC_8(VAR_1, 2);
 }
 return -VAR_0;
}

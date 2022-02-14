
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int flags; } ;
typedef int dev_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int VAR_1 ;
 struct mapped_device* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct mapped_device*) ;
 int FUNC_4 (struct mapped_device*) ;
 int FUNC_5 (struct mapped_device*) ;
 struct mapped_device* FUNC_6 (int *,unsigned int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;

struct mapped_device *FUNC_10(dev_t VAR_6)
{
 struct mapped_device *VAR_7;
 unsigned VAR_8 = FUNC_1(VAR_6);

 if (FUNC_0(VAR_6) != VAR_3 || VAR_8 >= (1 << VAR_1))
  return ((void*)0);

 FUNC_7(&VAR_5);

 VAR_7 = FUNC_6(&VAR_4, VAR_8);
 if (!VAR_7 || VAR_7 == VAR_2 || (FUNC_1(FUNC_2(FUNC_4(VAR_7))) != VAR_8) ||
     FUNC_9(VAR_0, &VAR_7->flags) || FUNC_3(VAR_7)) {
  VAR_7 = ((void*)0);
  goto out;
 }
 FUNC_5(VAR_7);
out:
 FUNC_8(&VAR_5);

 return VAR_7;
}

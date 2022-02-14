
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nullb_device {int power; int flags; int nullb; } ;
struct config_item {int dummy; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct nullb_device*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int*,char const*,size_t) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 struct nullb_device* FUNC_9 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_10(struct config_item *VAR_4,
         const char *VAR_5, size_t VAR_6)
{
 struct nullb_device *VAR_7 = FUNC_9(VAR_4);
 bool VAR_8 = 0;
 ssize_t VAR_9;

 VAR_9 = FUNC_5(&VAR_8, VAR_5, VAR_6);
 if (VAR_9 < 0)
  return VAR_9;

 if (!VAR_7->power && VAR_8) {
  if (FUNC_8(VAR_2, &VAR_7->flags))
   return VAR_6;
  if (FUNC_3(VAR_7)) {
   FUNC_0(VAR_2, &VAR_7->flags);
   return -VAR_0;
  }

  FUNC_6(VAR_1, &VAR_7->flags);
  VAR_7->power = VAR_8;
 } else if (VAR_7->power && !VAR_8) {
  if (FUNC_7(VAR_2, &VAR_7->flags)) {
   FUNC_1(&VAR_3);
   VAR_7->power = VAR_8;
   FUNC_4(VAR_7->nullb);
   FUNC_2(&VAR_3);
  }
  FUNC_0(VAR_1, &VAR_7->flags);
 }

 return VAR_6;
}

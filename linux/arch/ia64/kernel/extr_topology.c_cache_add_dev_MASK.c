
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct device {int kobj; } ;
struct TYPE_6__ {scalar_t__ parent; } ;
struct cache_info {TYPE_1__ kobj; } ;
struct TYPE_7__ {unsigned long num_cache_leaves; TYPE_1__ kobj; } ;


 int VAR_0 ;
 struct cache_info* FUNC_0 (unsigned int,unsigned long) ;
 TYPE_5__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 struct device* FUNC_3 (unsigned int) ;
 int FUNC_4 (TYPE_1__*,int *,TYPE_1__*,char*,...) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(unsigned int VAR_4)
{
 struct device *VAR_5 = FUNC_3(VAR_4);
 unsigned long VAR_6, VAR_7;
 struct cache_info *VAR_8;
 int VAR_9 = 0;

 if (VAR_1[VAR_4].kobj.parent)
  return 0;


 VAR_9 = FUNC_2(VAR_4);
 if (FUNC_7(VAR_9 < 0))
  return VAR_9;

 VAR_9 = FUNC_4(&VAR_1[VAR_4].kobj,
          &VAR_3, &VAR_5->kobj,
          "%s", "cache");
 if (FUNC_7(VAR_9 < 0)) {
  FUNC_1(VAR_4);
  return VAR_9;
 }

 for (VAR_6 = 0; VAR_6 < VAR_1[VAR_4].num_cache_leaves; VAR_6++) {
  VAR_8 = FUNC_0(VAR_4,VAR_6);
  VAR_9 = FUNC_4(&(VAR_8->kobj),
           &VAR_2,
           &VAR_1[VAR_4].kobj,
           "index%1lu", VAR_6);
  if (FUNC_7(VAR_9)) {
   for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
    FUNC_5(&(FUNC_0(VAR_4,VAR_7)->kobj));
   }
   FUNC_5(&VAR_1[VAR_4].kobj);
   FUNC_1(VAR_4);
   return VAR_9;
  }
  FUNC_6(&(VAR_8->kobj), VAR_0);
 }
 FUNC_6(&VAR_1[VAR_4].kobj, VAR_0);
 return VAR_9;
}

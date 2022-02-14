
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct component_match {int num; int alloc; TYPE_1__* compare; } ;
struct TYPE_2__ {int (* compare ) (struct device*,void*) ;int (* compare_typed ) (struct device*,int,void*) ;void (* release ) (struct device*,void*) ;int * component; void* data; } ;


 int VAR_0 ;
 struct component_match* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct component_match*) ;
 int FUNC_2 (struct device*,struct component_match*,size_t) ;
 int VAR_2 ;
 int FUNC_3 (struct device*,struct component_match*) ;
 struct component_match* FUNC_4 (int ,int,int ) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_3,
 struct component_match **VAR_4,
 void (*VAR_5)(struct device *, void *),
 int (*VAR_6)(struct device *, void *),
 int (*VAR_7)(struct device *, int, void *),
 void *VAR_8)
{
 struct component_match *VAR_9 = *VAR_4;

 if (FUNC_1(VAR_9))
  return;

 if (!VAR_9) {
  VAR_9 = FUNC_4(VAR_2,
         sizeof(*VAR_9), VAR_1);
  if (!VAR_9) {
   *VAR_4 = FUNC_0(-VAR_0);
   return;
  }

  FUNC_3(VAR_3, VAR_9);

  *VAR_4 = VAR_9;
 }

 if (VAR_9->num == VAR_9->alloc) {
  size_t VAR_10 = VAR_9->alloc + 16;
  int VAR_11;

  VAR_11 = FUNC_2(VAR_3, VAR_9, VAR_10);
  if (VAR_11) {
   *VAR_4 = FUNC_0(VAR_11);
   return;
  }
 }

 VAR_9->compare[VAR_9->num].compare = VAR_6;
 VAR_9->compare[VAR_9->num].compare_typed = VAR_7;
 VAR_9->compare[VAR_9->num].release = VAR_5;
 VAR_9->compare[VAR_9->num].data = VAR_8;
 VAR_9->compare[VAR_9->num].component = ((void*)0);
 VAR_9->num++;
}

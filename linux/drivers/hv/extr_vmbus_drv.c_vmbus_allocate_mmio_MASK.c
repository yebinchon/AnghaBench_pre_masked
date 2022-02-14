
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {scalar_t__ start; scalar_t__ end; char* name; struct resource* sibling; } ;
struct hv_device {int device; } ;
typedef scalar_t__ resource_size_t ;
struct TYPE_2__ {scalar_t__ end; scalar_t__ start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct resource*,scalar_t__,scalar_t__) ;
 struct resource* FUNC_1 (struct resource*,scalar_t__,scalar_t__,int *,int ) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* VAR_2 ;
 struct resource* VAR_3 ;
 int VAR_4 ;
 struct resource* FUNC_4 (scalar_t__,scalar_t__,char const*) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct resource **VAR_5, struct hv_device *VAR_6,
   resource_size_t VAR_7, resource_size_t VAR_8,
   resource_size_t VAR_9, resource_size_t VAR_10,
   bool VAR_11)
{
 struct resource *VAR_12, *VAR_13;
 resource_size_t VAR_14, VAR_15, VAR_16;
 const char *VAR_17 = FUNC_2(&VAR_6->device);
 int VAR_18;

 VAR_18 = -VAR_0;
 FUNC_3(&VAR_4);






 if (VAR_11 && VAR_2 && !(VAR_7 > VAR_2->end) &&
     !(VAR_8 < VAR_2->start)) {

  VAR_14 = VAR_2->start;
  VAR_15 = VAR_2->end;
  VAR_16 = (VAR_14 + VAR_10 - 1) & ~(VAR_10 - 1);
  for (; VAR_16 + VAR_9 - 1 <= VAR_15; VAR_16 += VAR_10) {
   *VAR_5 = FUNC_4(VAR_16, VAR_9, VAR_17);
   if (*VAR_5) {
    VAR_18 = 0;
    goto exit;
   }
  }
 }

 for (VAR_12 = VAR_3; VAR_12; VAR_12 = VAR_12->sibling) {
  if ((VAR_12->start >= VAR_8) || (VAR_12->end <= VAR_7))
   continue;

  VAR_14 = VAR_12->start;
  VAR_15 = VAR_12->end;
  VAR_16 = (VAR_14 + VAR_10 - 1) & ~(VAR_10 - 1);
  for (; VAR_16 + VAR_9 - 1 <= VAR_15; VAR_16 += VAR_10) {
   VAR_13 = FUNC_1(VAR_12, VAR_16, VAR_9, ((void*)0),
        VAR_1);
   if (!VAR_13)
    continue;

   *VAR_5 = FUNC_4(VAR_16, VAR_9, VAR_17);
   if (*VAR_5) {
    VAR_13->name = (char *)*VAR_5;
    VAR_18 = 0;
    goto exit;
   }

   FUNC_0(VAR_12, VAR_16, VAR_9);
  }
 }

exit:
 FUNC_5(&VAR_4);
 return VAR_18;
}

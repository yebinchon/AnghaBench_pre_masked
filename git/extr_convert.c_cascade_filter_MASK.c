
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stream_filter {int dummy; } ;
struct TYPE_2__ {int * vtbl; } ;
struct cascade_filter {TYPE_1__ filter; scalar_t__ ptr; scalar_t__ end; struct stream_filter* two; struct stream_filter* one; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct stream_filter*) ;
 struct cascade_filter* FUNC_1 (int) ;

__attribute__((used)) static struct stream_filter *FUNC_2(struct stream_filter *VAR_1,
         struct stream_filter *VAR_2)
{
 struct cascade_filter *VAR_3;

 if (!VAR_1 || FUNC_0(VAR_1))
  return VAR_2;
 if (!VAR_2 || FUNC_0(VAR_2))
  return VAR_1;

 VAR_3 = FUNC_1(sizeof(*VAR_3));
 VAR_3->one = VAR_1;
 VAR_3->two = VAR_2;
 VAR_3->end = VAR_3->ptr = 0;
 VAR_3->filter.vtbl = &VAR_0;
 return (struct stream_filter *)VAR_3;
}

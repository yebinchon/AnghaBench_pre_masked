
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {char const* name; int mode; } ;
struct TYPE_3__ {int show; TYPE_2__ attr; } ;
struct i915_ext_attribute {int val; TYPE_1__ attr; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static struct i915_ext_attribute *
FUNC_1(struct i915_ext_attribute *VAR_1, const char *VAR_2, u64 VAR_3)
{
 FUNC_0(&VAR_1->attr.attr);
 VAR_1->attr.attr.name = VAR_2;
 VAR_1->attr.attr.mode = 0444;
 VAR_1->attr.show = VAR_0;
 VAR_1->val = VAR_3;

 return ++VAR_1;
}

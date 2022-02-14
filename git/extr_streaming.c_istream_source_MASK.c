
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int is_delta; } ;
struct TYPE_4__ {TYPE_1__ packed; } ;
struct object_info {int* typep; unsigned long* sizep; int whence; TYPE_2__ u; } ;
struct object_id {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
typedef enum input_source { ____Placeholder_input_source } input_source ;




 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct object_id const*,struct object_info*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static enum input_source FUNC_1(const struct object_id *VAR_6,
     enum object_type *VAR_7,
     struct object_info *VAR_8)
{
 unsigned long VAR_9;
 int VAR_10;

 VAR_8->typep = VAR_7;
 VAR_8->sizep = &VAR_9;
 VAR_10 = FUNC_0(VAR_5, VAR_6, VAR_8, 0);
 if (VAR_10 < 0)
  return VAR_4;

 switch (VAR_8->whence) {
 case 129:
  return VAR_2;
 case 128:
  if (!VAR_8->u.packed.is_delta && VAR_0 < VAR_9)
   return VAR_3;

 default:
  return VAR_1;
 }
}

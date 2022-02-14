
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void const* data; } ;
struct TYPE_7__ {int odb; TYPE_1__ raw; } ;
struct TYPE_8__ {TYPE_2__ data; scalar_t__ raw; } ;
typedef TYPE_3__ git_blob ;


 int FUNC_0 (TYPE_3__ const*) ;
 void const* FUNC_1 (int ) ;

const void *FUNC_2(const git_blob *VAR_0)
{
 FUNC_0(VAR_0);
 if (VAR_0->raw)
  return VAR_0->data.raw.data;
 else
  return FUNC_1(VAR_0->data.odb);
}

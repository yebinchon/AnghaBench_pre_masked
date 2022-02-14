
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int timestamp_t ;
struct commit_reflog {size_t recno; TYPE_2__* reflogs; } ;
struct TYPE_4__ {TYPE_1__* items; } ;
struct TYPE_3__ {int timestamp; } ;



__attribute__((used)) static timestamp_t FUNC_0(struct commit_reflog *VAR_0)
{
 return VAR_0->reflogs->items[VAR_0->recno].timestamp;
}

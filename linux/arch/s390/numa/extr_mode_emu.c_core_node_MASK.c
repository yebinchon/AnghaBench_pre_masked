
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct toptree {TYPE_3__* parent; } ;
struct TYPE_6__ {TYPE_2__* parent; } ;
struct TYPE_5__ {TYPE_1__* parent; } ;
struct TYPE_4__ {struct toptree* parent; } ;



__attribute__((used)) static struct toptree *FUNC_0(struct toptree *VAR_0)
{
 return VAR_0->parent->parent->parent->parent;
}

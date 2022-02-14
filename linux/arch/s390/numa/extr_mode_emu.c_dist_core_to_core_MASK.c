
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct toptree {int dummy; } ;
struct TYPE_6__ {scalar_t__ id; } ;
struct TYPE_5__ {scalar_t__ id; } ;
struct TYPE_4__ {scalar_t__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 (struct toptree*) ;
 TYPE_2__* FUNC_1 (struct toptree*) ;
 TYPE_1__* FUNC_2 (struct toptree*) ;

__attribute__((used)) static int FUNC_3(struct toptree *VAR_4, struct toptree *VAR_5)
{
 if (FUNC_1(VAR_4)->id != FUNC_1(VAR_5)->id)
  return VAR_2;
 if (FUNC_0(VAR_4)->id != FUNC_0(VAR_5)->id)
  return VAR_0;
 if (FUNC_2(VAR_4)->id != FUNC_2(VAR_5)->id)
  return VAR_3;

 return VAR_1;
}

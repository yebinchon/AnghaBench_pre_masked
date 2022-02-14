
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repository {TYPE_1__* objects; } ;
struct packed_git {int dummy; } ;
struct TYPE_2__ {struct packed_git* packed_git; } ;


 int FUNC_0 (struct repository*) ;

struct packed_git *FUNC_1(struct repository *VAR_0)
{
 FUNC_0(VAR_0);
 return VAR_0->objects->packed_git;
}

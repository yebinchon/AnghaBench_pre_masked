
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdesc_handle {TYPE_1__* mops; } ;
struct TYPE_2__ {int (* free ) (struct mdesc_handle*) ;} ;


 int FUNC_0 (struct mdesc_handle*) ;

__attribute__((used)) static void FUNC_1(struct mdesc_handle *VAR_0)
{
 VAR_0->mops->free(VAR_0);
}

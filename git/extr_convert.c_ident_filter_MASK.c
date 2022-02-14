
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stream_filter {int dummy; } ;
struct object_id {int dummy; } ;
struct TYPE_2__ {int * vtbl; } ;
struct ident_filter {scalar_t__ state; TYPE_1__ filter; int left; int ident; } ;


 int VAR_0 ;
 int FUNC_0 (struct object_id const*) ;
 int FUNC_1 (int *,int ) ;
 struct ident_filter* FUNC_2 (int) ;
 int FUNC_3 (int ,int,char*,int ) ;

__attribute__((used)) static struct stream_filter *FUNC_4(const struct object_id *VAR_1)
{
 struct ident_filter *VAR_2 = FUNC_2(sizeof(*VAR_2));

 FUNC_3(VAR_2->ident, sizeof(VAR_2->ident),
    ": %s $", FUNC_0(VAR_1));
 FUNC_1(&VAR_2->left, 0);
 VAR_2->filter.vtbl = &VAR_0;
 VAR_2->state = 0;
 return (struct stream_filter *)VAR_2;
}

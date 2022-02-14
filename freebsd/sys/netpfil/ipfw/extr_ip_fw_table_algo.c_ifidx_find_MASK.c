
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table_info {int data; int state; } ;
struct ifidx {int dummy; } ;


 struct ifidx* FUNC_0 (void*,int ,int ,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static struct ifidx *
FUNC_1(struct table_info *VAR_1, void *VAR_2)
{
 struct ifidx *VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_1->state, VAR_1->data, sizeof(struct ifidx),
     VAR_0);

 return (VAR_3);
}

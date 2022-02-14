
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_smp {int data; int status; scalar_t__ attr_mod; } ;
struct ib_device {int node_desc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct ib_smp*) ;

__attribute__((used)) static int FUNC_2(struct ib_smp *VAR_1,
        struct ib_device *VAR_2)
{
 if (VAR_1->attr_mod)
  VAR_1->status |= VAR_0;

 FUNC_0(VAR_1->data, VAR_2->node_desc, sizeof(VAR_1->data));

 return FUNC_1(VAR_1);
}

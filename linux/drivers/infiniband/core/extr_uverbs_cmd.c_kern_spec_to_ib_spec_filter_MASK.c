
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_flow_spec {int dummy; } ib_flow_spec ;
struct ib_uverbs_flow_spec_hdr {int dummy; } ;
struct ib_uverbs_flow_spec {int type; int hdr; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,void*,void*,int,union ib_flow_spec*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct ib_uverbs_flow_spec *VAR_0,
           union ib_flow_spec *VAR_1)
{
 ssize_t VAR_2;
 void *VAR_3;
 void *VAR_4;

 VAR_2 = FUNC_1(&VAR_0->hdr);

 VAR_4 = (void *)VAR_0 +
  sizeof(struct ib_uverbs_flow_spec_hdr);
 VAR_3 = VAR_4 + VAR_2;

 return FUNC_0(VAR_0->type,
           VAR_3,
           VAR_4,
           VAR_2, VAR_1);
}

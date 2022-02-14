
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct opa_smp {int status; } ;
struct opa_node_description {int data; } ;
struct ib_mad_hdr {int dummy; } ;
struct ib_device {int node_desc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct ib_mad_hdr*) ;
 scalar_t__ FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct opa_smp *VAR_1, u32 VAR_2,
       u8 *VAR_3, struct ib_device *VAR_4,
       u8 VAR_5, u32 *VAR_6, u32 VAR_7)
{
 struct opa_node_description *VAR_8;

 if (VAR_2 || FUNC_2(sizeof(*VAR_8), VAR_7)) {
  VAR_1->status |= VAR_0;
  return FUNC_1((struct ib_mad_hdr *)VAR_1);
 }

 VAR_8 = (struct opa_node_description *)VAR_3;

 FUNC_0(VAR_8->data, VAR_4->node_desc, sizeof(VAR_8->data));

 if (VAR_6)
  *VAR_6 += sizeof(*VAR_8);

 return FUNC_1((struct ib_mad_hdr *)VAR_1);
}

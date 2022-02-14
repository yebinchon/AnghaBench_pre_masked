
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nvkm_mm_node {scalar_t__ length; scalar_t__ type; int fl_entry; int nl_entry; int offset; int heap; } ;
struct nvkm_mm {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct nvkm_mm_node* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static struct nvkm_mm_node *
FUNC_3(struct nvkm_mm *VAR_2, struct nvkm_mm_node *VAR_3, u32 VAR_4)
{
 struct nvkm_mm_node *VAR_5;

 if (VAR_3->length == VAR_4)
  return VAR_3;

 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_0);
 if (FUNC_2(VAR_5 == ((void*)0)))
  return ((void*)0);

 VAR_5->offset = VAR_3->offset;
 VAR_5->length = VAR_4;
 VAR_5->heap = VAR_3->heap;
 VAR_5->type = VAR_3->type;
 VAR_3->offset += VAR_4;
 VAR_3->length -= VAR_4;
 FUNC_1(&VAR_5->nl_entry, &VAR_3->nl_entry);
 if (VAR_5->type == VAR_1)
  FUNC_1(&VAR_5->fl_entry, &VAR_3->fl_entry);

 return VAR_5;
}

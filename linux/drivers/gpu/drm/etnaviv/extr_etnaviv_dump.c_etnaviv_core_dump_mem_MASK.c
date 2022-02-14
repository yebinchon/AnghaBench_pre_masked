
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct core_dump_iterator {scalar_t__ data; TYPE_1__* hdr; } ;
struct TYPE_2__ {int iova; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct core_dump_iterator*,int ,scalar_t__) ;
 int FUNC_2 (scalar_t__,void*,size_t) ;

__attribute__((used)) static void FUNC_3(struct core_dump_iterator *VAR_0, u32 VAR_1,
 void *VAR_2, size_t VAR_3, u64 VAR_4)
{
 FUNC_2(VAR_0->data, VAR_2, VAR_3);

 VAR_0->hdr->iova = FUNC_0(VAR_4);

 FUNC_1(VAR_0, VAR_1, VAR_0->data + VAR_3);
}

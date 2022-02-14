
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u32 ;
struct skd_device {int sglist_cache; } ;
struct fit_sg_descriptor {int next_desc_ptr; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fit_sg_descriptor* FUNC_0 (struct skd_device*,int ,int*,int,int ) ;

__attribute__((used)) static struct fit_sg_descriptor *FUNC_1(struct skd_device *VAR_3,
        u32 VAR_4,
        dma_addr_t *VAR_5)
{
 struct fit_sg_descriptor *VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_3->sglist_cache, VAR_5,
    VAR_1 | VAR_2, VAR_0);

 if (VAR_6 != ((void*)0)) {
  uint64_t VAR_7 = *VAR_5;
  u32 VAR_8;

  for (VAR_8 = 0; VAR_8 < VAR_4 - 1; VAR_8++) {
   uint64_t VAR_9;
   VAR_9 = (VAR_8 + 1) * sizeof(struct fit_sg_descriptor);

   VAR_6[VAR_8].next_desc_ptr = VAR_7 + VAR_9;
  }
  VAR_6[VAR_8].next_desc_ptr = 0LL;
 }

 return VAR_6;
}

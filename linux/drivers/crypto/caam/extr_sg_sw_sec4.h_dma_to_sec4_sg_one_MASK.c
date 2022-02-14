
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sec4_sg_entry {void* bpid_offset; void* len; int ptr; } ;
struct dpaa2_sg_entry {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dpaa2_sg_entry*,int ,int,int) ;
 int FUNC_3 (char*,int ,int,int,struct sec4_sg_entry*,int,int) ;

__attribute__((used)) static inline void FUNC_4(struct sec4_sg_entry *VAR_3,
          dma_addr_t VAR_4, u32 VAR_5, u16 VAR_6)
{
 if (VAR_2) {
  FUNC_2((struct dpaa2_sg_entry *)VAR_3, VAR_4, VAR_5,
     VAR_6);
 } else {
  VAR_3->ptr = FUNC_1(VAR_4);
  VAR_3->len = FUNC_0(VAR_5);
  VAR_3->bpid_offset = FUNC_0(VAR_6 &
        VAR_1);
 }

 FUNC_3("sec4_sg_ptr@: ", VAR_0, 16, 4,
        VAR_3, sizeof(struct sec4_sg_entry), 1);
}

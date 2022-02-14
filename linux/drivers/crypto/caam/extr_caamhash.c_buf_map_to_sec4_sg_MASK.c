
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec4_sg_entry {int dummy; } ;
struct device {int dummy; } ;
struct caam_hash_state {scalar_t__ buf_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct caam_hash_state*) ;
 int* FUNC_1 (struct caam_hash_state*) ;
 int FUNC_2 (struct device*,char*) ;
 scalar_t__ FUNC_3 (struct device*,int ,int,int ) ;
 scalar_t__ FUNC_4 (struct device*,scalar_t__) ;
 int FUNC_5 (struct sec4_sg_entry*,scalar_t__,int,int ) ;

__attribute__((used)) static inline int FUNC_6(struct device *VAR_2,
         struct sec4_sg_entry *VAR_3,
         struct caam_hash_state *VAR_4)
{
 int VAR_5 = *FUNC_1(VAR_4);

 if (!VAR_5)
  return 0;

 VAR_4->buf_dma = FUNC_3(VAR_2, FUNC_0(VAR_4), VAR_5,
     VAR_0);
 if (FUNC_4(VAR_2, VAR_4->buf_dma)) {
  FUNC_2(VAR_2, "unable to map buf\n");
  VAR_4->buf_dma = 0;
  return -VAR_1;
 }

 FUNC_5(VAR_3, VAR_4->buf_dma, VAR_5, 0);

 return 0;
}

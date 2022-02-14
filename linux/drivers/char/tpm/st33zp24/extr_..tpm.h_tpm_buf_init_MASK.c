
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct tpm_buf {int data_page; int data; scalar_t__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tpm_buf*,int ,int ) ;

__attribute__((used)) static inline int FUNC_3(struct tpm_buf *VAR_2, u16 VAR_3, u32 VAR_4)
{
 VAR_2->data_page = FUNC_0(VAR_1);
 if (!VAR_2->data_page)
  return -VAR_0;

 VAR_2->flags = 0;
 VAR_2->data = FUNC_1(VAR_2->data_page);
 FUNC_2(VAR_2, VAR_3, VAR_4);
 return 0;
}

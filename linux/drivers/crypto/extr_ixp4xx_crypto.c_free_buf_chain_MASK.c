
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
struct buffer_desc {int dir; int buf_len; int phys_next; struct buffer_desc* next; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct buffer_desc*,int ) ;
 int FUNC_1 (struct device*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_1, struct buffer_desc *VAR_2,
      dma_addr_t VAR_3)
{
 while (VAR_2) {
  struct buffer_desc *VAR_4;
  u32 VAR_5;

  VAR_4 = VAR_2->next;
  VAR_5 = VAR_2->phys_next;
  FUNC_1(VAR_1, VAR_2->phys_next, VAR_2->buf_len, VAR_2->dir);
  FUNC_0(VAR_0, VAR_2, VAR_3);
  VAR_2 = VAR_4;
  VAR_3 = VAR_5;
 }
}

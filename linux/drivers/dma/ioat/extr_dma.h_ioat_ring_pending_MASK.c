
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ioatdma_chan {int issued; int head; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct ioatdma_chan*) ;

__attribute__((used)) static inline u16 FUNC_2(struct ioatdma_chan *VAR_0)
{
 return FUNC_0(VAR_0->head, VAR_0->issued,
   FUNC_1(VAR_0));
}

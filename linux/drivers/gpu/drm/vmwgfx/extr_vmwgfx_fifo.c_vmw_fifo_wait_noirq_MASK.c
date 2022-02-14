
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmw_private {int fifo_queue; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int *) ;
 unsigned long VAR_6 ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;
 int FUNC_8 (struct vmw_private*,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct vmw_private *VAR_7,
          uint32_t VAR_8, bool VAR_9,
          unsigned long VAR_10)
{
 int VAR_11 = 0;
 unsigned long VAR_12 = VAR_6 + VAR_10;
 FUNC_0(VAR_4);

 FUNC_2("Fifo wait noirq.\n");

 for (;;) {
  FUNC_4(&VAR_7->fifo_queue, &VAR_4,
    (VAR_9) ?
    VAR_2 : VAR_3);
  if (!FUNC_8(VAR_7, VAR_8))
   break;
  if (FUNC_7(VAR_6, VAR_12)) {
   VAR_11 = -VAR_0;
   FUNC_1("SVGA device lockup.\n");
   break;
  }
  FUNC_5(1);
  if (VAR_9 && FUNC_6(VAR_5)) {
   VAR_11 = -VAR_1;
   break;
  }
 }
 FUNC_3(&VAR_7->fifo_queue, &VAR_4);
 FUNC_9(&VAR_7->fifo_queue);
 FUNC_2("Fifo noirq exit.\n");
 return VAR_11;
}

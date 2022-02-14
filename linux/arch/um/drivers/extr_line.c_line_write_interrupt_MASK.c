
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line {int port; int lock; int buffer; int tail; int head; } ;
struct chan {struct line* line; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct line*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct chan *VAR_5 = VAR_4;
 struct line *VAR_6 = VAR_5->line;
 int VAR_7;






 FUNC_1(&VAR_6->lock);
 VAR_7 = FUNC_0(VAR_6);
 if (VAR_7 == 0) {
  FUNC_2(&VAR_6->lock);
  return VAR_2;
 } else if ((VAR_7 < 0) && (VAR_7 != -VAR_0)) {
  VAR_6->head = VAR_6->buffer;
  VAR_6->tail = VAR_6->buffer;
 }
 FUNC_2(&VAR_6->lock);

 FUNC_3(&VAR_6->port);

 return VAR_1;
}

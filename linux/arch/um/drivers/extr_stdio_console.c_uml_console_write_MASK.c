
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line {int lock; int chan_out; } ;
struct console {size_t index; } ;


 int FUNC_0 (int ,char const*,unsigned int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct line* VAR_0 ;

__attribute__((used)) static void FUNC_3(struct console *VAR_1, const char *VAR_2,
         unsigned VAR_3)
{
 struct line *VAR_4 = &VAR_0[VAR_1->index];
 unsigned long VAR_5;

 FUNC_1(&VAR_4->lock, VAR_5);
 FUNC_0(VAR_4->chan_out, VAR_2, VAR_3);
 FUNC_2(&VAR_4->lock, VAR_5);
}

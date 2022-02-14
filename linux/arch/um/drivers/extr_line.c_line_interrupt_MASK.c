
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line {int dummy; } ;
struct chan {struct line* line; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct line*,int) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_1, void *VAR_2)
{
 struct chan *VAR_3 = VAR_2;
 struct line *VAR_4 = VAR_3->line;

 if (VAR_4)
  FUNC_0(VAR_4, VAR_1);

 return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scr24x_dev {scalar_t__ regs; int * buf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct scr24x_dev*) ;

__attribute__((used)) static int FUNC_4(struct scr24x_dev *VAR_2, size_t VAR_3, size_t VAR_4)
{
 size_t VAR_5, VAR_6;
 int VAR_7;

 for (VAR_5 = VAR_3; VAR_5 < VAR_4; VAR_5 += 5) {
  FUNC_2(VAR_0, VAR_2->regs + VAR_1);
  VAR_7 = FUNC_3(VAR_2);
  if (VAR_7 < 0)
   return VAR_7;

  for (VAR_6 = 0; VAR_6 < 5 && VAR_5 + VAR_6 < VAR_4; VAR_6++)
   VAR_2->buf[VAR_5 + VAR_6] = FUNC_1(VAR_2->regs + FUNC_0(VAR_6));
 }

 return 0;
}

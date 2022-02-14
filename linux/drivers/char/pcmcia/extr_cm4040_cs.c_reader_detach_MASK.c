
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reader_dev {int dummy; } ;
struct pcmcia_device {struct reader_dev* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 struct pcmcia_device** VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct reader_dev*) ;
 int VAR_3 ;
 int FUNC_3 (struct pcmcia_device*) ;

__attribute__((used)) static void FUNC_4(struct pcmcia_device *VAR_4)
{
 struct reader_dev *VAR_5 = VAR_4->priv;
 int VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_2[VAR_6] == VAR_4)
   break;
 }
 if (VAR_6 == VAR_0)
  return;

 FUNC_3(VAR_4);

 VAR_2[VAR_6] = ((void*)0);
 FUNC_2(VAR_5);

 FUNC_1(VAR_1, FUNC_0(VAR_3, VAR_6));

 return;
}

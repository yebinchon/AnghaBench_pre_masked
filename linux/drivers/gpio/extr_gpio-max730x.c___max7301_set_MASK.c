
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max7301 {int out_level; int (* write ) (int ,int,int) ;int dev; } ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct max7301 *VAR_0, unsigned VAR_1, int VAR_2)
{
 if (VAR_2) {
  VAR_0->out_level |= 1 << VAR_1;
  return VAR_0->write(VAR_0->dev, 0x20 + VAR_1, 0x01);
 } else {
  VAR_0->out_level &= ~(1 << VAR_1);
  return VAR_0->write(VAR_0->dev, 0x20 + VAR_1, 0x00);
 }
}

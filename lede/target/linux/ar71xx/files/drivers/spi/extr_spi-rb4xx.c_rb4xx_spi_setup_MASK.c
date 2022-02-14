
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int mode; int bits_per_word; int chip_select; int dev; int master; } ;
struct rb4xx_spi {int cs_wait; int lock; int busy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,unsigned int) ;
 int FUNC_1 (struct rb4xx_spi*,unsigned long*) ;
 struct rb4xx_spi* FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_3)
{
 struct rb4xx_spi *VAR_4 = FUNC_2(VAR_3->master);
 unsigned long VAR_5;

 if (VAR_3->mode & ~(VAR_1 | VAR_2)) {
  FUNC_0(&VAR_3->dev, "mode %x not supported\n",
   (unsigned) VAR_3->mode);
  return -VAR_0;
 }

 if (VAR_3->bits_per_word != 8 && VAR_3->bits_per_word != 0) {
  FUNC_0(&VAR_3->dev, "bits_per_word %u not supported\n",
   (unsigned) VAR_3->bits_per_word);
  return -VAR_0;
 }

 FUNC_3(&VAR_4->lock, VAR_5);
 if (VAR_4->cs_wait == VAR_3->chip_select && !VAR_4->busy) {
  VAR_4->cs_wait = -1;
  FUNC_1(VAR_4, &VAR_5);
 }
 FUNC_4(&VAR_4->lock, VAR_5);

 return 0;
}

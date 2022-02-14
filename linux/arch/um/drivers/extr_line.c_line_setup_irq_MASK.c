
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_driver {int write_irq_name; int write_irq; int read_irq_name; int read_irq; } ;
struct line {struct line_driver* driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int ,int ,int ,int ,void*) ;

int FUNC_1(int VAR_5, int VAR_6, int VAR_7, struct line *VAR_8, void *VAR_9)
{
 const struct line_driver *VAR_10 = VAR_8->driver;
 int VAR_11 = 0;

 if (VAR_6)
  VAR_11 = FUNC_0(VAR_10->read_irq, VAR_5, VAR_1,
         VAR_3, VAR_0,
         VAR_10->read_irq_name, VAR_9);
 if (VAR_11)
  return VAR_11;
 if (VAR_7)
  VAR_11 = FUNC_0(VAR_10->write_irq, VAR_5, VAR_2,
         VAR_4, VAR_0,
         VAR_10->write_irq_name, VAR_9);
 return VAR_11;
}

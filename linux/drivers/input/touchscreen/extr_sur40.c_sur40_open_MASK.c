
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sur40_state {int dev; } ;
struct input_polled_dev {struct sur40_state* private; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct sur40_state*) ;

__attribute__((used)) static void FUNC_2(struct input_polled_dev *VAR_0)
{
 struct sur40_state *VAR_1 = VAR_0->private;

 FUNC_0(VAR_1->dev, "open\n");
 FUNC_1(VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sparcspkr_state {int (* event ) (struct input_dev*,int ,int ,int ) ;struct input_dev* input_dev; } ;
struct platform_device {int dummy; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sparcspkr_state* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct input_dev*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct platform_device *VAR_2)
{
 struct sparcspkr_state *VAR_3 = FUNC_0(VAR_2);
 struct input_dev *VAR_4 = VAR_3->input_dev;


 VAR_3->event(VAR_4, VAR_0, VAR_1, 0);
}

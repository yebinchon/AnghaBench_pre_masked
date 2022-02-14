
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct hideep_event {int index; int flag; int w; int z; int y; int x; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int) ;
 int FUNC_3 (struct input_dev*,int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct input_dev *VAR_5,
          const struct hideep_event *VAR_6)
{
 FUNC_2(VAR_5, VAR_6->index & 0x0f);
 FUNC_1(VAR_5,
       FUNC_0(VAR_6->type),
       !(VAR_6->flag & VAR_4));
 if (!(VAR_6->flag & VAR_4)) {
  FUNC_3(VAR_5, VAR_0,
     FUNC_4(&VAR_6->x));
  FUNC_3(VAR_5, VAR_1,
     FUNC_4(&VAR_6->y));
  FUNC_3(VAR_5, VAR_2,
     FUNC_4(&VAR_6->z));
  FUNC_3(VAR_5, VAR_3, VAR_6->w);
 }
}

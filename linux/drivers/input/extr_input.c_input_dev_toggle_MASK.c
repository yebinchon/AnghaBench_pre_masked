
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int * rep; int (* event ) (struct input_dev*,int ,size_t,int ) ;int evbit; } ;


 int VAR_0 ;
 int FUNC_0 (struct input_dev*,int ,int ,int) ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct input_dev*,int ,size_t,int ) ;
 int FUNC_2 (struct input_dev*,int ,size_t,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct input_dev *VAR_7, bool VAR_8)
{
 if (!VAR_7->event)
  return;

 FUNC_0(VAR_7, VAR_1, VAR_5, VAR_8);
 FUNC_0(VAR_7, VAR_4, VAR_6, VAR_8);

 if (VAR_8 && FUNC_3(VAR_0, VAR_7->evbit)) {
  VAR_7->event(VAR_7, VAR_0, VAR_3, VAR_7->rep[VAR_3]);
  VAR_7->event(VAR_7, VAR_0, VAR_2, VAR_7->rep[VAR_2]);
 }
}

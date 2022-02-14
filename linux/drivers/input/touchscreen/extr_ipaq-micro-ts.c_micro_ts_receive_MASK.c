
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct touchscreen_data {int input; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_3, int VAR_4, unsigned char *VAR_5)
{
 struct touchscreen_data *VAR_6 = VAR_3;

 if (VAR_4 == 4) {
  FUNC_1(VAR_6->input, VAR_0,
     FUNC_0((__be16 *) &VAR_5[2]));
  FUNC_1(VAR_6->input, VAR_1,
     FUNC_0((__be16 *) &VAR_5[0]));
  FUNC_2(VAR_6->input, VAR_2, 1);
  FUNC_3(VAR_6->input);
 } else if (VAR_4 == 0) {
  FUNC_1(VAR_6->input, VAR_0, 0);
  FUNC_1(VAR_6->input, VAR_1, 0);
  FUNC_2(VAR_6->input, VAR_2, 0);
  FUNC_3(VAR_6->input);
 }
}

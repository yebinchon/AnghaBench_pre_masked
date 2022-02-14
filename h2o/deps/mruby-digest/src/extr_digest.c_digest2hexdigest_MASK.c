
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int buf ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,char*,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (char*,int,char*,unsigned char) ;

__attribute__((used)) static mrb_value
FUNC_5(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value VAR_2;
  int VAR_3, VAR_4;
  char *VAR_5, VAR_6[3];

  VAR_5 = FUNC_1(VAR_1);
  VAR_4 = FUNC_0(VAR_1);
  VAR_2 = FUNC_3(VAR_0, VAR_4 * 2);
  for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
    FUNC_4(VAR_6, sizeof(VAR_6), "%02x", (unsigned char )VAR_5[VAR_3]);
    FUNC_2(VAR_0, VAR_2, VAR_6, 2);
  }
  return VAR_2;
}

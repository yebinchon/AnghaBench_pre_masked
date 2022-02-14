
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ) ;
 unsigned long FUNC_2 (int *,char const*,long*) ;

__attribute__((used)) static int
FUNC_3(mrb_state *VAR_0, const unsigned char * VAR_1, int VAR_2, mrb_value VAR_3, unsigned int VAR_4)
{
  unsigned long VAR_5;
  long VAR_6 = VAR_2;

  if (VAR_2 == 0) {
    return 1;
  }
  VAR_5 = FUNC_2(VAR_0, (const char *)VAR_1, &VAR_6);
  FUNC_0(VAR_0, VAR_3, FUNC_1((mrb_int)VAR_5));
  return (int)VAR_6;
}

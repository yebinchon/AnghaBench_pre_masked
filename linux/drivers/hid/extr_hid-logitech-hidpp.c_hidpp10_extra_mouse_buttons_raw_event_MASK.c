
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hidpp_device {int input; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,scalar_t__,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct hidpp_device *VAR_5,
        u8 *VAR_6, int VAR_7)
{
 int VAR_8;

 if (!VAR_5->input)
  return -VAR_2;

 if (VAR_7 < 7)
  return 0;

 if (VAR_6[0] != VAR_4 ||
     VAR_6[2] != VAR_3)
  return 0;







 for (VAR_8 = 0; VAR_8 < 8; VAR_8++)
  FUNC_0(VAR_5->input, VAR_1 + VAR_8,
     (VAR_6[3] & (1 << VAR_8)));


 for (VAR_8 = 0; VAR_8 < 8; VAR_8++)
  FUNC_0(VAR_5->input, VAR_0 + VAR_8,
     (VAR_6[4] & (1 << VAR_8)));

 FUNC_1(VAR_5->input);
 return 1;
}

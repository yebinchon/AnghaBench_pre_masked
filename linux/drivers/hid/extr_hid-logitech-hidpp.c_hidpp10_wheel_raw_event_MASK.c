
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct hidpp_device {int input; } ;
typedef int s8 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct hidpp_device *VAR_7,
       u8 *VAR_8, int VAR_9)
{
 s8 VAR_10, VAR_11;

 if (!VAR_7->input)
  return -VAR_0;

 if (VAR_9 < 7)
  return 0;

 if (VAR_8[0] != VAR_6 || VAR_8[2] != VAR_1)
  return 0;

 VAR_10 = VAR_8[3];
 VAR_11 = VAR_8[4];

 FUNC_0(VAR_7->input, VAR_4, VAR_10);
 FUNC_0(VAR_7->input, VAR_5, VAR_10 * 120);
 FUNC_0(VAR_7->input, VAR_2, VAR_11);
 FUNC_0(VAR_7->input, VAR_3, VAR_11 * 120);
 FUNC_1(VAR_7->input);

 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wmem ;
struct wiimote_data {int dummy; } ;
typedef int __u8 ;


 int FUNC_0 (struct wiimote_data*,int,int*,int) ;

__attribute__((used)) static int FUNC_1(struct wiimote_data *VAR_0)
{
 __u8 VAR_1;
 int VAR_2;


 VAR_1 = 0x55;
 VAR_2 = FUNC_0(VAR_0, 0xa600f0, &VAR_1, sizeof(VAR_1));
 if (VAR_2)
  return VAR_2;


 VAR_1 = 0x0;
 VAR_2 = FUNC_0(VAR_0, 0xa600fb, &VAR_1, sizeof(VAR_1));
 if (VAR_2)
  return VAR_2;

 return 0;
}

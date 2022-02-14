
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct amd64_pvt {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int ,struct amd64_pvt*) ;
 scalar_t__ FUNC_1 (int,int ,struct amd64_pvt*) ;

__attribute__((used)) static int FUNC_2(int VAR_3, u8 VAR_4, struct amd64_pvt *VAR_5)
{
 int VAR_6 = 0;

 if (FUNC_0(2 * VAR_3, VAR_4, VAR_5))
  VAR_6 |= VAR_0;

 if (FUNC_0(2 * VAR_3 + 1, VAR_4, VAR_5))
  VAR_6 |= VAR_1;


 if (FUNC_1(2 * VAR_3 + 1, VAR_4, VAR_5))
  VAR_6 |= VAR_2;

 return VAR_6;
}

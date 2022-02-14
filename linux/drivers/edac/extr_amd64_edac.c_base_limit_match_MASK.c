
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct amd64_pvt {int dummy; } ;


 int FUNC_0 (struct amd64_pvt*,int ) ;
 int FUNC_1 (struct amd64_pvt*,int ) ;

__attribute__((used)) static bool FUNC_2(struct amd64_pvt *VAR_0, u64 VAR_1, u8 VAR_2)
{
 u64 VAR_3;







 VAR_3 = VAR_1 & 0x000000ffffffffffull;

 return ((VAR_3 >= FUNC_0(VAR_0, VAR_2)) &&
  (VAR_3 <= FUNC_1(VAR_0, VAR_2)));
}

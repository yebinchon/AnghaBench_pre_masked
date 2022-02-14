
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct frame {int sent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct frame *VAR_3)
{
 u64 VAR_4 = FUNC_3(FUNC_2(FUNC_1(), VAR_3->sent));


 if (FUNC_4(VAR_4 <= VAR_2))
  return (u32)VAR_4 / VAR_1;


 if (VAR_4 > ((u64)VAR_0 * VAR_1))
  return VAR_0;

 return FUNC_0(VAR_4, VAR_1);
}

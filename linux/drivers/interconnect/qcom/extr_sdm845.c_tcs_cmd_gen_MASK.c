
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct tcs_cmd {int wait; int data; int addr; } ;


 int FUNC_0 (int,int,int ,int ) ;
 int VAR_0 ;

inline void FUNC_1(struct tcs_cmd *VAR_1, u64 VAR_2, u64 VAR_3,
   u32 VAR_4, bool VAR_5)
{
 bool VAR_6 = 1;

 if (!VAR_1)
  return;

 if (VAR_2 == 0 && VAR_3 == 0)
  VAR_6 = 0;

 if (VAR_2 > VAR_0)
  VAR_2 = VAR_0;

 if (VAR_3 > VAR_0)
  VAR_3 = VAR_0;

 VAR_1->addr = VAR_4;
 VAR_1->data = FUNC_0(VAR_5, VAR_6, VAR_2, VAR_3);





 if (VAR_5)
  VAR_1->wait = 1;
}

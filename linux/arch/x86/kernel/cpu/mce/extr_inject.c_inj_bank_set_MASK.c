
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct mce {int bank; int extcpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(void *VAR_4, u64 VAR_5)
{
 struct mce *VAR_6 = (struct mce *)VAR_4;
 u8 VAR_7;
 u64 VAR_8;


 FUNC_2(VAR_6->extcpu, VAR_2, &VAR_8);
 VAR_7 = VAR_8 & VAR_1;

 if (VAR_5 >= VAR_7) {
  FUNC_1("MCA bank %llu non-existent on CPU%d\n", VAR_5, VAR_6->extcpu);
  return -VAR_0;
 }

 VAR_6->bank = VAR_5;
 FUNC_0();


 FUNC_3(&VAR_3);

 return 0;
}

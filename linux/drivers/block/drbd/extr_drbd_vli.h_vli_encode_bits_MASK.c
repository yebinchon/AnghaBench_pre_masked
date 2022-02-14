
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct bitstream {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct bitstream*,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static inline int FUNC_2(struct bitstream *VAR_1, u64 VAR_2)
{
 u64 VAR_3 = VAR_3;
 int VAR_4 = FUNC_0(&VAR_3, VAR_2);

 if (VAR_4 <= 0)
  return VAR_4;

 return FUNC_1(VAR_1, VAR_3, VAR_4);
}

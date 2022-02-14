
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scatterlist {int dummy; } ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct scatterlist*,int ,int const*,int) ;
 int FUNC_3 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_4(struct scatterlist *VAR_1, u8 VAR_2)
{
 int VAR_3 = FUNC_1(VAR_2);
 const u8 *VAR_4 = FUNC_0(VAR_2);
 int VAR_5;

 VAR_5 = FUNC_2(VAR_1, FUNC_3(VAR_1), VAR_4, VAR_3);
 if (VAR_5 != VAR_3)
  return -VAR_0;

 return VAR_3;
}

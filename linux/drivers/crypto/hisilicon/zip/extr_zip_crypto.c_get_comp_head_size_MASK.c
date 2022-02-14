
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scatterlist {int dummy; } ;


 size_t VAR_0 ;


 size_t FUNC_0 (int const) ;
 size_t FUNC_1 (struct scatterlist*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static size_t FUNC_3(struct scatterlist *VAR_1, u8 VAR_2)
{
 switch (VAR_2) {
 case 128:
  return FUNC_0(128);
 case 129:
  return FUNC_1(VAR_1);
 default:
  FUNC_2("request type does not support!\n");
  return -VAR_0;
 }
}

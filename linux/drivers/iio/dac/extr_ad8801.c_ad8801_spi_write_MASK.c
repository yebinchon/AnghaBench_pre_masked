
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct ad8801_state {int data; int spi; } ;


 unsigned char VAR_0 ;
 int FUNC_0 (unsigned char) ;
 int FUNC_1 (int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct ad8801_state *VAR_1,
 u8 VAR_2, unsigned char VAR_3)
{
 VAR_1->data = FUNC_0((VAR_2 << VAR_0) | VAR_3);
 return FUNC_1(VAR_1->spi, &VAR_1->data, sizeof(VAR_1->data));
}
